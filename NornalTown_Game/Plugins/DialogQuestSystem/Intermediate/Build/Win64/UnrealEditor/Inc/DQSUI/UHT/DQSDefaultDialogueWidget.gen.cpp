// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSDefaultDialogueWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSDefaultDialogueWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DQSUI_API UClass* Z_Construct_UClass_UDQSChoiceButtonProxy();
DQSUI_API UClass* Z_Construct_UClass_UDQSChoiceButtonProxy_NoRegister();
DQSUI_API UClass* Z_Construct_UClass_UDQSDefaultDialogueWidget();
DQSUI_API UClass* Z_Construct_UClass_UDQSDefaultDialogueWidget_NoRegister();
DQSUI_API UClass* Z_Construct_UClass_UDQSDialogueWidgetBase();
UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_DQSUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDQSChoiceButtonProxy Function HandleClick *******************************
struct Z_Construct_UFunction_UDQSChoiceButtonProxy_HandleClick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSChoiceButtonProxy_HandleClick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSChoiceButtonProxy, nullptr, "HandleClick", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSChoiceButtonProxy_HandleClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSChoiceButtonProxy_HandleClick_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDQSChoiceButtonProxy_HandleClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSChoiceButtonProxy_HandleClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSChoiceButtonProxy::execHandleClick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleClick();
	P_NATIVE_END;
}
// ********** End Class UDQSChoiceButtonProxy Function HandleClick *********************************

// ********** Begin Class UDQSChoiceButtonProxy ****************************************************
void UDQSChoiceButtonProxy::StaticRegisterNativesUDQSChoiceButtonProxy()
{
	UClass* Class = UDQSChoiceButtonProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleClick", &UDQSChoiceButtonProxy::execHandleClick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSChoiceButtonProxy;
UClass* UDQSChoiceButtonProxy::GetPrivateStaticClass()
{
	using TClass = UDQSChoiceButtonProxy;
	if (!Z_Registration_Info_UClass_UDQSChoiceButtonProxy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSChoiceButtonProxy"),
			Z_Registration_Info_UClass_UDQSChoiceButtonProxy.InnerSingleton,
			StaticRegisterNativesUDQSChoiceButtonProxy,
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
	return Z_Registration_Info_UClass_UDQSChoiceButtonProxy.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSChoiceButtonProxy_NoRegister()
{
	return UDQSChoiceButtonProxy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSChoiceButtonProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DQSDefaultDialogueWidget.h" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChoiceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDQSChoiceButtonProxy_HandleClick, "HandleClick" }, // 3786012997
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSChoiceButtonProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSChoiceButtonProxy_Statics::NewProp_OwnerWidget = { "OwnerWidget", nullptr, (EPropertyFlags)0x0114000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSChoiceButtonProxy, OwnerWidget), Z_Construct_UClass_UDQSDefaultDialogueWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerWidget_MetaData), NewProp_OwnerWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDQSChoiceButtonProxy_Statics::NewProp_ChoiceIndex = { "ChoiceIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSChoiceButtonProxy, ChoiceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceIndex_MetaData), NewProp_ChoiceIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSChoiceButtonProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSChoiceButtonProxy_Statics::NewProp_OwnerWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSChoiceButtonProxy_Statics::NewProp_ChoiceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSChoiceButtonProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSChoiceButtonProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSChoiceButtonProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSChoiceButtonProxy_Statics::ClassParams = {
	&UDQSChoiceButtonProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDQSChoiceButtonProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSChoiceButtonProxy_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSChoiceButtonProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSChoiceButtonProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSChoiceButtonProxy()
{
	if (!Z_Registration_Info_UClass_UDQSChoiceButtonProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSChoiceButtonProxy.OuterSingleton, Z_Construct_UClass_UDQSChoiceButtonProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSChoiceButtonProxy.OuterSingleton;
}
UDQSChoiceButtonProxy::UDQSChoiceButtonProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSChoiceButtonProxy);
UDQSChoiceButtonProxy::~UDQSChoiceButtonProxy() {}
// ********** End Class UDQSChoiceButtonProxy ******************************************************

// ********** Begin Class UDQSDefaultDialogueWidget Function HandleContinueClicked *****************
struct Z_Construct_UFunction_UDQSDefaultDialogueWidget_HandleContinueClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDefaultDialogueWidget_HandleContinueClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDefaultDialogueWidget, nullptr, "HandleContinueClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDefaultDialogueWidget_HandleContinueClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDefaultDialogueWidget_HandleContinueClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDQSDefaultDialogueWidget_HandleContinueClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDefaultDialogueWidget_HandleContinueClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDefaultDialogueWidget::execHandleContinueClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleContinueClicked();
	P_NATIVE_END;
}
// ********** End Class UDQSDefaultDialogueWidget Function HandleContinueClicked *******************

// ********** Begin Class UDQSDefaultDialogueWidget Function HandleDialogueStateChanged ************
struct Z_Construct_UFunction_UDQSDefaultDialogueWidget_HandleDialogueStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDefaultDialogueWidget_HandleDialogueStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDefaultDialogueWidget, nullptr, "HandleDialogueStateChanged", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDefaultDialogueWidget_HandleDialogueStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDefaultDialogueWidget_HandleDialogueStateChanged_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDQSDefaultDialogueWidget_HandleDialogueStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDefaultDialogueWidget_HandleDialogueStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDefaultDialogueWidget::execHandleDialogueStateChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDialogueStateChanged();
	P_NATIVE_END;
}
// ********** End Class UDQSDefaultDialogueWidget Function HandleDialogueStateChanged **************

// ********** Begin Class UDQSDefaultDialogueWidget ************************************************
void UDQSDefaultDialogueWidget::StaticRegisterNativesUDQSDefaultDialogueWidget()
{
	UClass* Class = UDQSDefaultDialogueWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleContinueClicked", &UDQSDefaultDialogueWidget::execHandleContinueClicked },
		{ "HandleDialogueStateChanged", &UDQSDefaultDialogueWidget::execHandleDialogueStateChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSDefaultDialogueWidget;
UClass* UDQSDefaultDialogueWidget::GetPrivateStaticClass()
{
	using TClass = UDQSDefaultDialogueWidget;
	if (!Z_Registration_Info_UClass_UDQSDefaultDialogueWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSDefaultDialogueWidget"),
			Z_Registration_Info_UClass_UDQSDefaultDialogueWidget.InnerSingleton,
			StaticRegisterNativesUDQSDefaultDialogueWidget,
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
	return Z_Registration_Info_UClass_UDQSDefaultDialogueWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSDefaultDialogueWidget_NoRegister()
{
	return UDQSDefaultDialogueWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSDefaultDialogueWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackAccentColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Style" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackSurfaceColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Style" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackPanelColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Style" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackTextColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Style" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackMutedTextColor_MetaData[] = {
		{ "Category", "Dialog Quest System|Style" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackdropBorder_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueFrame_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueSurface_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidthBox_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortraitSizeBox_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortraitFrame_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortraitImage_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptionTextBlock_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerTextBlock_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyPanel_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyTextBlock_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyScrollBox_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponsesPanel_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponsesLabelText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponsesScrollBox_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponsesList_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinueArea_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HintTextBlock_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinueButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinueButtonText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceButtons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceButtonTexts_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceButtonProxies_MetaData[] = {
		{ "ModuleRelativePath", "Public/DQSDefaultDialogueWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackAccentColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackSurfaceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackPanelColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackTextColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FallbackMutedTextColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackdropBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueFrame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueSurface;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueWidthBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PortraitSizeBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PortraitFrame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PortraitImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptionTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeakerTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyScrollBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponsesPanel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponsesLabelText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponsesScrollBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResponsesList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinueArea;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HintTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinueButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContinueButtonText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoiceButtons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChoiceButtons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoiceButtonTexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChoiceButtonTexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChoiceButtonProxies_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChoiceButtonProxies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDQSDefaultDialogueWidget_HandleContinueClicked, "HandleContinueClicked" }, // 2464503763
		{ &Z_Construct_UFunction_UDQSDefaultDialogueWidget_HandleDialogueStateChanged, "HandleDialogueStateChanged" }, // 2765410220
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSDefaultDialogueWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_FallbackAccentColor = { "FallbackAccentColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, FallbackAccentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackAccentColor_MetaData), NewProp_FallbackAccentColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_FallbackSurfaceColor = { "FallbackSurfaceColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, FallbackSurfaceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackSurfaceColor_MetaData), NewProp_FallbackSurfaceColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_FallbackPanelColor = { "FallbackPanelColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, FallbackPanelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackPanelColor_MetaData), NewProp_FallbackPanelColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_FallbackTextColor = { "FallbackTextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, FallbackTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackTextColor_MetaData), NewProp_FallbackTextColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_FallbackMutedTextColor = { "FallbackMutedTextColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, FallbackMutedTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackMutedTextColor_MetaData), NewProp_FallbackMutedTextColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_BackdropBorder = { "BackdropBorder", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, BackdropBorder), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackdropBorder_MetaData), NewProp_BackdropBorder_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_DialogueFrame = { "DialogueFrame", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, DialogueFrame), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueFrame_MetaData), NewProp_DialogueFrame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_DialogueSurface = { "DialogueSurface", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, DialogueSurface), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueSurface_MetaData), NewProp_DialogueSurface_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_DialogueWidthBox = { "DialogueWidthBox", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, DialogueWidthBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWidthBox_MetaData), NewProp_DialogueWidthBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_PortraitSizeBox = { "PortraitSizeBox", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, PortraitSizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortraitSizeBox_MetaData), NewProp_PortraitSizeBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_PortraitFrame = { "PortraitFrame", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, PortraitFrame), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortraitFrame_MetaData), NewProp_PortraitFrame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_PortraitImage = { "PortraitImage", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, PortraitImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortraitImage_MetaData), NewProp_PortraitImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_CaptionTextBlock = { "CaptionTextBlock", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, CaptionTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptionTextBlock_MetaData), NewProp_CaptionTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_SpeakerTextBlock = { "SpeakerTextBlock", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, SpeakerTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerTextBlock_MetaData), NewProp_SpeakerTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_BodyPanel = { "BodyPanel", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, BodyPanel), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyPanel_MetaData), NewProp_BodyPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_BodyTextBlock = { "BodyTextBlock", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, BodyTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyTextBlock_MetaData), NewProp_BodyTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_BodyScrollBox = { "BodyScrollBox", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, BodyScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyScrollBox_MetaData), NewProp_BodyScrollBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ResponsesPanel = { "ResponsesPanel", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, ResponsesPanel), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponsesPanel_MetaData), NewProp_ResponsesPanel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ResponsesLabelText = { "ResponsesLabelText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, ResponsesLabelText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponsesLabelText_MetaData), NewProp_ResponsesLabelText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ResponsesScrollBox = { "ResponsesScrollBox", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, ResponsesScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponsesScrollBox_MetaData), NewProp_ResponsesScrollBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ResponsesList = { "ResponsesList", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, ResponsesList), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponsesList_MetaData), NewProp_ResponsesList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ContinueArea = { "ContinueArea", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, ContinueArea), Z_Construct_UClass_UBorder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinueArea_MetaData), NewProp_ContinueArea_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_HintTextBlock = { "HintTextBlock", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, HintTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HintTextBlock_MetaData), NewProp_HintTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ContinueButton = { "ContinueButton", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, ContinueButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinueButton_MetaData), NewProp_ContinueButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ContinueButtonText = { "ContinueButtonText", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, ContinueButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinueButtonText_MetaData), NewProp_ContinueButtonText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ChoiceButtons_Inner = { "ChoiceButtons", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ChoiceButtons = { "ChoiceButtons", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, ChoiceButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceButtons_MetaData), NewProp_ChoiceButtons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ChoiceButtonTexts_Inner = { "ChoiceButtonTexts", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ChoiceButtonTexts = { "ChoiceButtonTexts", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, ChoiceButtonTexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceButtonTexts_MetaData), NewProp_ChoiceButtonTexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ChoiceButtonProxies_Inner = { "ChoiceButtonProxies", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDQSChoiceButtonProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ChoiceButtonProxies = { "ChoiceButtonProxies", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDefaultDialogueWidget, ChoiceButtonProxies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceButtonProxies_MetaData), NewProp_ChoiceButtonProxies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_FallbackAccentColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_FallbackSurfaceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_FallbackPanelColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_FallbackTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_FallbackMutedTextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_BackdropBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_DialogueFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_DialogueSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_DialogueWidthBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_PortraitSizeBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_PortraitFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_PortraitImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_CaptionTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_SpeakerTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_BodyPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_BodyTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_BodyScrollBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ResponsesPanel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ResponsesLabelText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ResponsesScrollBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ResponsesList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ContinueArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_HintTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ContinueButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ContinueButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ChoiceButtons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ChoiceButtons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ChoiceButtonTexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ChoiceButtonTexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ChoiceButtonProxies_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::NewProp_ChoiceButtonProxies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDQSDialogueWidgetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::ClassParams = {
	&UDQSDefaultDialogueWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSDefaultDialogueWidget()
{
	if (!Z_Registration_Info_UClass_UDQSDefaultDialogueWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSDefaultDialogueWidget.OuterSingleton, Z_Construct_UClass_UDQSDefaultDialogueWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSDefaultDialogueWidget.OuterSingleton;
}
UDQSDefaultDialogueWidget::UDQSDefaultDialogueWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSDefaultDialogueWidget);
UDQSDefaultDialogueWidget::~UDQSDefaultDialogueWidget() {}
// ********** End Class UDQSDefaultDialogueWidget **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDefaultDialogueWidget_h__Script_DQSUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSChoiceButtonProxy, UDQSChoiceButtonProxy::StaticClass, TEXT("UDQSChoiceButtonProxy"), &Z_Registration_Info_UClass_UDQSChoiceButtonProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSChoiceButtonProxy), 820030525U) },
		{ Z_Construct_UClass_UDQSDefaultDialogueWidget, UDQSDefaultDialogueWidget::StaticClass, TEXT("UDQSDefaultDialogueWidget"), &Z_Registration_Info_UClass_UDQSDefaultDialogueWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSDefaultDialogueWidget), 993801082U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDefaultDialogueWidget_h__Script_DQSUI_1274950907(TEXT("/Script/DQSUI"),
	Z_CompiledInDeferFile_FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDefaultDialogueWidget_h__Script_DQSUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDefaultDialogueWidget_h__Script_DQSUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
