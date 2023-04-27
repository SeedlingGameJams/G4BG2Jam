// Copyright Epic Games, Inc. All Rights Reserved.

#include "AudioMeterPlugin.h"
#include "AudioMeterPluginStyle.h"
#include "AudioMeterPluginCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"
#include "EditorUtilityWidget.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "EditorUtilitySubsystem.h"

static const FName AudioMeterPluginTabName("AudioMeterPlugin");

#define LOCTEXT_NAMESPACE "FAudioMeterPluginModule"

void FAudioMeterPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FAudioMeterPluginStyle::Initialize();
	FAudioMeterPluginStyle::ReloadTextures();

	FAudioMeterPluginCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FAudioMeterPluginCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FAudioMeterPluginModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FAudioMeterPluginModule::RegisterMenus));
}

void FAudioMeterPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FAudioMeterPluginStyle::Shutdown();

	FAudioMeterPluginCommands::Unregister();
}

void FAudioMeterPluginModule::PluginButtonClicked()
{
	// get the  path of the asset by R.Clicking on the asset and 'Copy Reference'
	const FStringAssetReference widgetAssetPath("/AudioMeterPlugin/WUBP_AudioMeters.WUBP_AudioMeters");

	UObject* widgetAssetLoaded = widgetAssetPath.TryLoad();
	if (widgetAssetLoaded == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Missing Expected widget class at : /AudioMeterPlugin/WUBP_AudioMeters.WUBP_AudioMeters'"));
		return;
	}

	UEditorUtilityWidgetBlueprint* widget = Cast<UEditorUtilityWidgetBlueprint>(widgetAssetLoaded);
	if (widget == nullptr) {
		UE_LOG(LogTemp, Warning, TEXT("Couldnt cast /AudioMeterPlugin/WUBP_AudioMeters.WUBP_AudioMeters to UEditorUtilityWidgetBlueprint"));
		return;
	}

	UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
	EditorUtilitySubsystem->SpawnAndRegisterTab(widget);
}

void FAudioMeterPluginModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FAudioMeterPluginCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FAudioMeterPluginCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAudioMeterPluginModule, AudioMeterPlugin)