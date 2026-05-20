// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSDefaultQuestTrackerWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSDefaultQuestTrackerWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DQSUI_API UClass* Z_Construct_UClass_UDQSDefaultQuestTrackerWidget();
DQSUI_API UClass* Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_NoRegister();
DQSUI_API UClass* Z_Construct_UClass_UDQSQuestTrackerWidgetBase();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_DQSUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDQSDefaultQuestTrackerWidget Function HandleQuestStateChanged ***********
struct Z_Construct_UFunction_UDQSDefaultQuestTrackerWidget_HandleQuestStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DQSDefaultQuestTrackerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDefaultQuestTrackerWidget_HandleQuestStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDefaultQuestTrackerWidget, nullptr, "HandleQuestStateChanged", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDefaultQuestTrackerWidget_HandleQuestStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDefaultQuestTrackerWidget_HandleQuestStateChanged_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDQSDefaultQuestTrackerWidget_HandleQuestStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDefaultQuestTrackerWidget_HandleQuestStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDefaultQuestTrackerWidget::execHandleQuestStateChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleQuestStateChanged();
	P_NATIVE_END;
}
// ********** End Class UDQSDefaultQuestTrackerWidget Function HandleQuestStateChanged *************

// ********** Begin Class UDQSDefaultQuestTrackerWidget ********************************************
void UDQSDefaultQuestTrackerWidget::StaticRegisterNativesUDQSDefaultQuestTrackerWidget()
{
	UClass* Class = UDQSDefaultQuestTrackerWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleQuestStateChanged", &UDQSDefaultQuestTrackerWidget::execHandleQuestStateChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSDefaultQuestTrackerWidget;
UClass* UDQSDefaultQuestTrackerWidget::GetPrivateStaticClass()
{
	using TClass = UDQSDefaultQuestTrackerWidget;
	if (!Z_Registration_Info_UClass_UDQSDefaultQuestTrackerWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSDefaultQuestTrackerWidget"),
			Z_Registration_Info_UClass_UDQSDefaultQuestTrackerWidget.InnerSingleton,
			StaticRegisterNativesUDQSDefaultQuestTrackerWidget,
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
	return Z_Registration_Info_UClass_UDQSDefaultQuestTrackerWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_NoRegister()
{
	return UDQSDefaultQuestTrackerWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSDefaultQuestTrackerWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultQuestTrackerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackAccentColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Style" },
		{ "ModuleRelativePath", "Public/DQSDefaultQuestTrackerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackSurfaceColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Style" },
		{ "ModuleRelativePath", "Public/DQSDefaultQuestTrackerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackTextColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Style" },
		{ "ModuleRelativePath", "Public/DQSDefaultQuestTrackerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackMutedTextColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Style" },
		{ "ModuleRelativePath", "Public/DQSDefaultQuestTrackerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackerPanel_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultQuestTrackerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeaderText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultQuestTrackerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatestPanel_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultQuestTrackerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatestTitleText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultQuestTrackerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatestMessageText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultQuestTrackerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedLabelText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultQuestTrackerWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveQuestList_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultQuestTrackerWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackAccentColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackSurfaceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackMutedTextColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackerPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeaderText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LatestPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LatestTitleText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LatestMessageText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedLabelText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveQuestList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDQSDefaultQuestTrackerWidget_HandleQuestStateChanged, "HandleQuestStateChanged" }, // 2701840444
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSDefaultQuestTrackerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_FallbackAccentColor = { "FallbackAccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultQuestTrackerWidget, FallbackAccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackAccentColor_MetaData), NewProp_FallbackAccentColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_FallbackSurfaceColor = { "FallbackSurfaceColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultQuestTrackerWidget, FallbackSurfaceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackSurfaceColor_MetaData), NewProp_FallbackSurfaceColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_FallbackTextColor = { "FallbackTextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultQuestTrackerWidget, FallbackTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackTextColor_MetaData), NewProp_FallbackTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_FallbackMutedTextColor = { "FallbackMutedTextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultQuestTrackerWidget, FallbackMutedTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackMutedTextColor_MetaData), NewProp_FallbackMutedTextColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_TrackerPanel = { "TrackerPanel", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultQuestTrackerWidget, TrackerPanel), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackerPanel_MetaData), NewProp_TrackerPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_HeaderText = { "HeaderText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultQuestTrackerWidget, HeaderText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeaderText_MetaData), NewProp_HeaderText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_LatestPanel = { "LatestPanel", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultQuestTrackerWidget, LatestPanel), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatestPanel_MetaData), NewProp_LatestPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_LatestTitleText = { "LatestTitleText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultQuestTrackerWidget, LatestTitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatestTitleText_MetaData), NewProp_LatestTitleText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_LatestMessageText = { "LatestMessageText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultQuestTrackerWidget, LatestMessageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatestMessageText_MetaData), NewProp_LatestMessageText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_TrackedLabelText = { "TrackedLabelText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultQuestTrackerWidget, TrackedLabelText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedLabelText_MetaData), NewProp_TrackedLabelText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_ActiveQuestList = { "ActiveQuestList", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultQuestTrackerWidget, ActiveQuestList), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveQuestList_MetaData), NewProp_ActiveQuestList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_FallbackAccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_FallbackSurfaceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_FallbackTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_FallbackMutedTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_TrackerPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_HeaderText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_LatestPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_LatestTitleText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_LatestMessageText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_TrackedLabelText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::NewProp_ActiveQuestList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDQSQuestTrackerWidgetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::ClassParams = {
	&UDQSDefaultQuestTrackerWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSDefaultQuestTrackerWidget()
{
	if (!Z_Registration_Info_UClass_UDQSDefaultQuestTrackerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSDefaultQuestTrackerWidget.OuterSingleton, Z_Construct_UClass_UDQSDefaultQuestTrackerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSDefaultQuestTrackerWidget.OuterSingleton;
}
UDQSDefaultQuestTrackerWidget::UDQSDefaultQuestTrackerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSDefaultQuestTrackerWidget);
UDQSDefaultQuestTrackerWidget::~UDQSDefaultQuestTrackerWidget() {}
// ********** End Class UDQSDefaultQuestTrackerWidget **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDefaultQuestTrackerWidget_h__Script_DQSUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSDefaultQuestTrackerWidget, UDQSDefaultQuestTrackerWidget::StaticClass, TEXT("UDQSDefaultQuestTrackerWidget"), &Z_Registration_Info_UClass_UDQSDefaultQuestTrackerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSDefaultQuestTrackerWidget), 3974881490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDefaultQuestTrackerWidget_h__Script_DQSUI_4273884378(TEXT("/Script/DQSUI"),
	Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDefaultQuestTrackerWidget_h__Script_DQSUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDefaultQuestTrackerWidget_h__Script_DQSUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
