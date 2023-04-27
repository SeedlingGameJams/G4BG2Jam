// Copyright Epic Games, Inc. All Rights Reserved.

#include "AudioMeterPluginStyle.h"
#include "AudioMeterPlugin.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FAudioMeterPluginStyle::StyleInstance = nullptr;

void FAudioMeterPluginStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FAudioMeterPluginStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FAudioMeterPluginStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("AudioMeterPluginStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FAudioMeterPluginStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("AudioMeterPluginStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("AudioMeterPlugin")->GetBaseDir() / TEXT("Resources"));

	Style->Set("AudioMeterPlugin.PluginAction", new IMAGE_BRUSH(TEXT("T_ButtonIconMeter"), Icon20x20));
	return Style;
}

void FAudioMeterPluginStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FAudioMeterPluginStyle::Get()
{
	return *StyleInstance;
}
