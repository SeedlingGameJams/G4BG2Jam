// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMeterPlugin/Public/AudioMeterParentWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMeterParentWidget() {}
// Cross Module References
	AUDIOMETERPLUGIN_API UClass* Z_Construct_UClass_UAudioMeterParentWidget();
	AUDIOMETERPLUGIN_API UClass* Z_Construct_UClass_UAudioMeterParentWidget_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	UPackage* Z_Construct_UPackage__Script_AudioMeterPlugin();
// End Cross Module References
	void UAudioMeterParentWidget::StaticRegisterNativesUAudioMeterParentWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioMeterParentWidget);
	UClass* Z_Construct_UClass_UAudioMeterParentWidget_NoRegister()
	{
		return UAudioMeterParentWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAudioMeterParentWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioMeterParentWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMeterPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioMeterParentWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AudioMeterParentWidget.h" },
		{ "ModuleRelativePath", "Public/AudioMeterParentWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioMeterParentWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioMeterParentWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioMeterParentWidget_Statics::ClassParams = {
		&UAudioMeterParentWidget::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioMeterParentWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioMeterParentWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioMeterParentWidget()
	{
		if (!Z_Registration_Info_UClass_UAudioMeterParentWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioMeterParentWidget.OuterSingleton, Z_Construct_UClass_UAudioMeterParentWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioMeterParentWidget.OuterSingleton;
	}
	template<> AUDIOMETERPLUGIN_API UClass* StaticClass<UAudioMeterParentWidget>()
	{
		return UAudioMeterParentWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioMeterParentWidget);
	UAudioMeterParentWidget::~UAudioMeterParentWidget() {}
	struct Z_CompiledInDeferFile_FID_Audio_Meters_Plugin_Packages_AudioMetersPlugin_ConradoLaje_25_04_23b_AudioMeterPlugin_HostProject_Plugins_AudioMeterPlugin_Source_AudioMeterPlugin_Public_AudioMeterParentWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Audio_Meters_Plugin_Packages_AudioMetersPlugin_ConradoLaje_25_04_23b_AudioMeterPlugin_HostProject_Plugins_AudioMeterPlugin_Source_AudioMeterPlugin_Public_AudioMeterParentWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioMeterParentWidget, UAudioMeterParentWidget::StaticClass, TEXT("UAudioMeterParentWidget"), &Z_Registration_Info_UClass_UAudioMeterParentWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioMeterParentWidget), 557109658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Audio_Meters_Plugin_Packages_AudioMetersPlugin_ConradoLaje_25_04_23b_AudioMeterPlugin_HostProject_Plugins_AudioMeterPlugin_Source_AudioMeterPlugin_Public_AudioMeterParentWidget_h_1251974922(TEXT("/Script/AudioMeterPlugin"),
		Z_CompiledInDeferFile_FID_Audio_Meters_Plugin_Packages_AudioMetersPlugin_ConradoLaje_25_04_23b_AudioMeterPlugin_HostProject_Plugins_AudioMeterPlugin_Source_AudioMeterPlugin_Public_AudioMeterParentWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Audio_Meters_Plugin_Packages_AudioMetersPlugin_ConradoLaje_25_04_23b_AudioMeterPlugin_HostProject_Plugins_AudioMeterPlugin_Source_AudioMeterPlugin_Public_AudioMeterParentWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
