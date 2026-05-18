// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSUISettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSUISettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSUIThemeAsset_NoRegister();
DQSUI_API UClass* Z_Construct_UClass_UDQSDialogueWidgetBase_NoRegister();
DQSUI_API UClass* Z_Construct_UClass_UDQSQuestLogWidgetBase_NoRegister();
DQSUI_API UClass* Z_Construct_UClass_UDQSQuestTrackerWidgetBase_NoRegister();
DQSUI_API UClass* Z_Construct_UClass_UDQSUISettings();
DQSUI_API UClass* Z_Construct_UClass_UDQSUISettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_DQSUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDQSUISettings ***********************************************************
void UDQSUISettings::StaticRegisterNativesUDQSUISettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSUISettings;
UClass* UDQSUISettings::GetPrivateStaticClass()
{
	using TClass = UDQSUISettings;
	if (!Z_Registration_Info_UClass_UDQSUISettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSUISettings"),
			Z_Registration_Info_UClass_UDQSUISettings.InnerSingleton,
			StaticRegisterNativesUDQSUISettings,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UDQSUISettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSUISettings_NoRegister()
{
	return UDQSUISettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSUISettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Dialog Quest System UI" },
		{ "IncludePath", "DQSUISettings.h" },
		{ "ModuleRelativePath", "Public/DQSUISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDialogueWidgetClass_MetaData[] = {
		{ "Category", "Dialog Quest System|Defaults" },
		{ "ModuleRelativePath", "Public/DQSUISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultQuestTrackerWidgetClass_MetaData[] = {
		{ "Category", "Dialog Quest System|Defaults" },
		{ "ModuleRelativePath", "Public/DQSUISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultQuestLogWidgetClass_MetaData[] = {
		{ "Category", "Dialog Quest System|Defaults" },
		{ "ModuleRelativePath", "Public/DQSUISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTheme_MetaData[] = {
		{ "Category", "Dialog Quest System|Defaults" },
		{ "ModuleRelativePath", "Public/DQSUISettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultDialogueWidgetClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultQuestTrackerWidgetClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultQuestLogWidgetClass;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultTheme;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSUISettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDQSUISettings_Statics::NewProp_DefaultDialogueWidgetClass = { "DefaultDialogueWidgetClass", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUISettings, DefaultDialogueWidgetClass), Z_Construct_UClass_UDQSDialogueWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDialogueWidgetClass_MetaData), NewProp_DefaultDialogueWidgetClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDQSUISettings_Statics::NewProp_DefaultQuestTrackerWidgetClass = { "DefaultQuestTrackerWidgetClass", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUISettings, DefaultQuestTrackerWidgetClass), Z_Construct_UClass_UDQSQuestTrackerWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultQuestTrackerWidgetClass_MetaData), NewProp_DefaultQuestTrackerWidgetClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDQSUISettings_Statics::NewProp_DefaultQuestLogWidgetClass = { "DefaultQuestLogWidgetClass", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUISettings, DefaultQuestLogWidgetClass), Z_Construct_UClass_UDQSQuestLogWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultQuestLogWidgetClass_MetaData), NewProp_DefaultQuestLogWidgetClass_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDQSUISettings_Statics::NewProp_DefaultTheme = { "DefaultTheme", nullptr, (EPropertyFlags)0x0014000000004015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUISettings, DefaultTheme), Z_Construct_UClass_UDQSUIThemeAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTheme_MetaData), NewProp_DefaultTheme_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSUISettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUISettings_Statics::NewProp_DefaultDialogueWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUISettings_Statics::NewProp_DefaultQuestTrackerWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUISettings_Statics::NewProp_DefaultQuestLogWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUISettings_Statics::NewProp_DefaultTheme,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSUISettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSUISettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSUISettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSUISettings_Statics::ClassParams = {
	&UDQSUISettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDQSUISettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSUISettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSUISettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSUISettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSUISettings()
{
	if (!Z_Registration_Info_UClass_UDQSUISettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSUISettings.OuterSingleton, Z_Construct_UClass_UDQSUISettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSUISettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSUISettings);
UDQSUISettings::~UDQSUISettings() {}
// ********** End Class UDQSUISettings *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSUISettings_h__Script_DQSUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSUISettings, UDQSUISettings::StaticClass, TEXT("UDQSUISettings"), &Z_Registration_Info_UClass_UDQSUISettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSUISettings), 961337372U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSUISettings_h__Script_DQSUI_910614310(TEXT("/Script/DQSUI"),
	Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSUISettings_h__Script_DQSUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSUISettings_h__Script_DQSUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
