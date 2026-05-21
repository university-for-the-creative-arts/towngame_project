// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSUIThemeAsset.h"
#include "Fonts/SlateFontInfo.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSUIThemeAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSUIThemeAsset();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSUIThemeAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
UPackage* Z_Construct_UPackage__Script_DQSRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDQSUIThemeAsset *********************************************************
void UDQSUIThemeAsset::StaticRegisterNativesUDQSUIThemeAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSUIThemeAsset;
UClass* UDQSUIThemeAsset::GetPrivateStaticClass()
{
	using TClass = UDQSUIThemeAsset;
	if (!Z_Registration_Info_UClass_UDQSUIThemeAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSUIThemeAsset"),
			Z_Registration_Info_UClass_UDQSUIThemeAsset.InnerSingleton,
			StaticRegisterNativesUDQSUIThemeAsset,
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
	return Z_Registration_Info_UClass_UDQSUIThemeAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSUIThemeAsset_NoRegister()
{
	return UDQSUIThemeAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSUIThemeAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSUIThemeAsset.h" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackdropColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Color" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Color" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Color" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Color" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Color" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Color" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MutedTextColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Color" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Color" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledChoiceColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Color" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelBrush_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Brush" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameBrush_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Brush" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccentBrush_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Brush" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortraitFrameBrush_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Brush" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptionFont_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Font" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerFont_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Font" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyFont_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Font" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceFont_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Font" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonFont_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Font" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelPadding_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Layout" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyPadding_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Layout" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoicePadding_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Layout" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidth_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Layout" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueMaxHeight_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Layout" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortraitSize_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Layout" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyMaxHeight_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Layout" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceListMaxHeight_MetaData[] = {
		{ "Category", "Dialog Quest System|Dialogue|Layout" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestSurfaceColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Quest|Color" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestCardColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Quest|Color" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestAccentColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Quest|Color" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestTextColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Quest|Color" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestMutedTextColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Quest|Color" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackerWidth_MetaData[] = {
		{ "Category", "Dialog Quest System|Quest|Layout" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogWidth_MetaData[] = {
		{ "Category", "Dialog Quest System|Quest|Layout" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogHeight_MetaData[] = {
		{ "Category", "Dialog Quest System|Quest|Layout" },
		{ "ModuleRelativePath", "Public/DQSUIThemeAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackdropColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PanelColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccentColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MutedTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChoiceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledChoiceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PanelBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccentBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PortraitFrameBrush;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CaptionFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpeakerFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChoiceFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PanelPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyPadding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChoicePadding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DialogueWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DialogueMaxHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PortraitSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyMaxHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChoiceListMaxHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestSurfaceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestCardColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestAccentColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestMutedTextColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TrackerWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LogWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LogHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSUIThemeAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_BackdropColor = { "BackdropColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, BackdropColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackdropColor_MetaData), NewProp_BackdropColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_SurfaceColor = { "SurfaceColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, SurfaceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceColor_MetaData), NewProp_SurfaceColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_PanelColor = { "PanelColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, PanelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelColor_MetaData), NewProp_PanelColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_FrameColor = { "FrameColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, FrameColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameColor_MetaData), NewProp_FrameColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_AccentColor = { "AccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, AccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentColor_MetaData), NewProp_AccentColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextColor_MetaData), NewProp_TextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_MutedTextColor = { "MutedTextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, MutedTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MutedTextColor_MetaData), NewProp_MutedTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_ChoiceColor = { "ChoiceColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, ChoiceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceColor_MetaData), NewProp_ChoiceColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_DisabledChoiceColor = { "DisabledChoiceColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, DisabledChoiceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledChoiceColor_MetaData), NewProp_DisabledChoiceColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_PanelBrush = { "PanelBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, PanelBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelBrush_MetaData), NewProp_PanelBrush_MetaData) }; // 963227394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_FrameBrush = { "FrameBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, FrameBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameBrush_MetaData), NewProp_FrameBrush_MetaData) }; // 963227394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_AccentBrush = { "AccentBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, AccentBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccentBrush_MetaData), NewProp_AccentBrush_MetaData) }; // 963227394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_PortraitFrameBrush = { "PortraitFrameBrush", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, PortraitFrameBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortraitFrameBrush_MetaData), NewProp_PortraitFrameBrush_MetaData) }; // 963227394
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_CaptionFont = { "CaptionFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, CaptionFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptionFont_MetaData), NewProp_CaptionFont_MetaData) }; // 72193436
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_SpeakerFont = { "SpeakerFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, SpeakerFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerFont_MetaData), NewProp_SpeakerFont_MetaData) }; // 72193436
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_BodyFont = { "BodyFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, BodyFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyFont_MetaData), NewProp_BodyFont_MetaData) }; // 72193436
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_ChoiceFont = { "ChoiceFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, ChoiceFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceFont_MetaData), NewProp_ChoiceFont_MetaData) }; // 72193436
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_ButtonFont = { "ButtonFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, ButtonFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonFont_MetaData), NewProp_ButtonFont_MetaData) }; // 72193436
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_PanelPadding = { "PanelPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, PanelPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelPadding_MetaData), NewProp_PanelPadding_MetaData) }; // 1262192159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_BodyPadding = { "BodyPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, BodyPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyPadding_MetaData), NewProp_BodyPadding_MetaData) }; // 1262192159
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_ChoicePadding = { "ChoicePadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, ChoicePadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoicePadding_MetaData), NewProp_ChoicePadding_MetaData) }; // 1262192159
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_DialogueWidth = { "DialogueWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, DialogueWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWidth_MetaData), NewProp_DialogueWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_DialogueMaxHeight = { "DialogueMaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, DialogueMaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueMaxHeight_MetaData), NewProp_DialogueMaxHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_PortraitSize = { "PortraitSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, PortraitSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortraitSize_MetaData), NewProp_PortraitSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_BodyMaxHeight = { "BodyMaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, BodyMaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyMaxHeight_MetaData), NewProp_BodyMaxHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_ChoiceListMaxHeight = { "ChoiceListMaxHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, ChoiceListMaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceListMaxHeight_MetaData), NewProp_ChoiceListMaxHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_QuestSurfaceColor = { "QuestSurfaceColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, QuestSurfaceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestSurfaceColor_MetaData), NewProp_QuestSurfaceColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_QuestCardColor = { "QuestCardColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, QuestCardColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestCardColor_MetaData), NewProp_QuestCardColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_QuestAccentColor = { "QuestAccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, QuestAccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestAccentColor_MetaData), NewProp_QuestAccentColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_QuestTextColor = { "QuestTextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, QuestTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestTextColor_MetaData), NewProp_QuestTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_QuestMutedTextColor = { "QuestMutedTextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, QuestMutedTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestMutedTextColor_MetaData), NewProp_QuestMutedTextColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_TrackerWidth = { "TrackerWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, TrackerWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackerWidth_MetaData), NewProp_TrackerWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_LogWidth = { "LogWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, LogWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogWidth_MetaData), NewProp_LogWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_LogHeight = { "LogHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSUIThemeAsset, LogHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogHeight_MetaData), NewProp_LogHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSUIThemeAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_BackdropColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_SurfaceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_PanelColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_FrameColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_AccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_TextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_MutedTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_ChoiceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_DisabledChoiceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_PanelBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_FrameBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_AccentBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_PortraitFrameBrush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_CaptionFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_SpeakerFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_BodyFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_ChoiceFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_ButtonFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_PanelPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_BodyPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_ChoicePadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_DialogueWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_DialogueMaxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_PortraitSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_BodyMaxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_ChoiceListMaxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_QuestSurfaceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_QuestCardColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_QuestAccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_QuestTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_QuestMutedTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_TrackerWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_LogWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSUIThemeAsset_Statics::NewProp_LogHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSUIThemeAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSUIThemeAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSUIThemeAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSUIThemeAsset_Statics::ClassParams = {
	&UDQSUIThemeAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDQSUIThemeAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSUIThemeAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSUIThemeAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSUIThemeAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSUIThemeAsset()
{
	if (!Z_Registration_Info_UClass_UDQSUIThemeAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSUIThemeAsset.OuterSingleton, Z_Construct_UClass_UDQSUIThemeAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSUIThemeAsset.OuterSingleton;
}
UDQSUIThemeAsset::UDQSUIThemeAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSUIThemeAsset);
UDQSUIThemeAsset::~UDQSUIThemeAsset() {}
// ********** End Class UDQSUIThemeAsset ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSUIThemeAsset_h__Script_DQSRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSUIThemeAsset, UDQSUIThemeAsset::StaticClass, TEXT("UDQSUIThemeAsset"), &Z_Registration_Info_UClass_UDQSUIThemeAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSUIThemeAsset), 460310374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSUIThemeAsset_h__Script_DQSRuntime_2646561522(TEXT("/Script/DQSRuntime"),
	Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSUIThemeAsset_h__Script_DQSRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSUIThemeAsset_h__Script_DQSRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
