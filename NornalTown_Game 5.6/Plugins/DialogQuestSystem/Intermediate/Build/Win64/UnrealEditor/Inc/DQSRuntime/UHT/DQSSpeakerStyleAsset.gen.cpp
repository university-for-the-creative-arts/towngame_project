// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSSpeakerStyleAsset.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSSpeakerStyleAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSSpeakerStyleAsset();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSSpeakerStyleAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
UPackage* Z_Construct_UPackage__Script_DQSRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDQSSpeakerStyleAsset ****************************************************
void UDQSSpeakerStyleAsset::StaticRegisterNativesUDQSSpeakerStyleAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSSpeakerStyleAsset;
UClass* UDQSSpeakerStyleAsset::GetPrivateStaticClass()
{
	using TClass = UDQSSpeakerStyleAsset;
	if (!Z_Registration_Info_UClass_UDQSSpeakerStyleAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSSpeakerStyleAsset"),
			Z_Registration_Info_UClass_UDQSSpeakerStyleAsset.InnerSingleton,
			StaticRegisterNativesUDQSSpeakerStyleAsset,
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
	return Z_Registration_Info_UClass_UDQSSpeakerStyleAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSSpeakerStyleAsset_NoRegister()
{
	return UDQSSpeakerStyleAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSSpeakerStyleAsset.h" },
		{ "ModuleRelativePath", "Public/DQSSpeakerStyleAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortraitTexture_MetaData[] = {
		{ "Category", "Dialog Quest System|Speaker" },
		{ "ModuleRelativePath", "Public/DQSSpeakerStyleAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortraitBrush_MetaData[] = {
		{ "Category", "Dialog Quest System|Speaker" },
		{ "ModuleRelativePath", "Public/DQSSpeakerStyleAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortraitSize_MetaData[] = {
		{ "Category", "Dialog Quest System|Speaker" },
		{ "ModuleRelativePath", "Public/DQSSpeakerStyleAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAccentColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Speaker" },
		{ "ModuleRelativePath", "Public/DQSSpeakerStyleAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Speaker" },
		{ "EditCondition", "bOverrideAccentColor" },
		{ "ModuleRelativePath", "Public/DQSSpeakerStyleAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerFont_MetaData[] = {
		{ "Category", "Dialog Quest System|Speaker" },
		{ "ModuleRelativePath", "Public/DQSSpeakerStyleAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyFont_MetaData[] = {
		{ "Category", "Dialog Quest System|Speaker" },
		{ "ModuleRelativePath", "Public/DQSSpeakerStyleAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PortraitTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PortraitBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PortraitSize;
	static void NewProp_bOverrideAccentColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAccentColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccentColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeakerFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyFont;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSSpeakerStyleAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_PortraitTexture = { "PortraitTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSSpeakerStyleAsset, PortraitTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortraitTexture_MetaData), NewProp_PortraitTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_PortraitBrush = { "PortraitBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSSpeakerStyleAsset, PortraitBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortraitBrush_MetaData), NewProp_PortraitBrush_MetaData) }; // 963227394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_PortraitSize = { "PortraitSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSSpeakerStyleAsset, PortraitSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortraitSize_MetaData), NewProp_PortraitSize_MetaData) };
void Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_bOverrideAccentColor_SetBit(void* Obj)
{
	((UDQSSpeakerStyleAsset*)Obj)->bOverrideAccentColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_bOverrideAccentColor = { "bOverrideAccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDQSSpeakerStyleAsset), &Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_bOverrideAccentColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAccentColor_MetaData), NewProp_bOverrideAccentColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_AccentColor = { "AccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSSpeakerStyleAsset, AccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentColor_MetaData), NewProp_AccentColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_SpeakerFont = { "SpeakerFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSSpeakerStyleAsset, SpeakerFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerFont_MetaData), NewProp_SpeakerFont_MetaData) }; // 72193436
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_BodyFont = { "BodyFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSSpeakerStyleAsset, BodyFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyFont_MetaData), NewProp_BodyFont_MetaData) }; // 72193436
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_PortraitTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_PortraitBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_PortraitSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_bOverrideAccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_AccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_SpeakerFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::NewProp_BodyFont,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::ClassParams = {
	&UDQSSpeakerStyleAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSSpeakerStyleAsset()
{
	if (!Z_Registration_Info_UClass_UDQSSpeakerStyleAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSSpeakerStyleAsset.OuterSingleton, Z_Construct_UClass_UDQSSpeakerStyleAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSSpeakerStyleAsset.OuterSingleton;
}
UDQSSpeakerStyleAsset::UDQSSpeakerStyleAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSSpeakerStyleAsset);
UDQSSpeakerStyleAsset::~UDQSSpeakerStyleAsset() {}
// ********** End Class UDQSSpeakerStyleAsset ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSSpeakerStyleAsset_h__Script_DQSRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSSpeakerStyleAsset, UDQSSpeakerStyleAsset::StaticClass, TEXT("UDQSSpeakerStyleAsset"), &Z_Registration_Info_UClass_UDQSSpeakerStyleAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSSpeakerStyleAsset), 2419663722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSSpeakerStyleAsset_h__Script_DQSRuntime_457004235(TEXT("/Script/DQSRuntime"),
	Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSSpeakerStyleAsset_h__Script_DQSRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSSpeakerStyleAsset_h__Script_DQSRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
