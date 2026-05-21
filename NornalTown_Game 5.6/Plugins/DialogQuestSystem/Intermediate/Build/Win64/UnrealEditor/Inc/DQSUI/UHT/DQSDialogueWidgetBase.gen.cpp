// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSDialogueWidgetBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSDialogueWidgetBase() {}

// ********** Begin Cross Module References ********************************************************
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSSpeakerStyleAsset_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSUIThemeAsset_NoRegister();
DQSUI_API UClass* Z_Construct_UClass_UDQSDialogueViewModel_NoRegister();
DQSUI_API UClass* Z_Construct_UClass_UDQSDialogueWidgetBase();
DQSUI_API UClass* Z_Construct_UClass_UDQSDialogueWidgetBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
UPackage* Z_Construct_UPackage__Script_DQSUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDQSDialogueWidgetBase Function ApplyResolvedTheme ***********************
struct DQSDialogueWidgetBase_eventApplyResolvedTheme_Parms
{
	UDQSUIThemeAsset* Theme;
};
static FName NAME_UDQSDialogueWidgetBase_ApplyResolvedTheme = FName(TEXT("ApplyResolvedTheme"));
void UDQSDialogueWidgetBase::ApplyResolvedTheme(UDQSUIThemeAsset* Theme)
{
	DQSDialogueWidgetBase_eventApplyResolvedTheme_Parms Parms;
	Parms.Theme=Theme;
	UFunction* Func = FindFunctionChecked(NAME_UDQSDialogueWidgetBase_ApplyResolvedTheme);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_ApplyResolvedTheme_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Theme;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_ApplyResolvedTheme_Statics::NewProp_Theme = { "Theme", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventApplyResolvedTheme_Parms, Theme), Z_Construct_UClass_UDQSUIThemeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_ApplyResolvedTheme_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_ApplyResolvedTheme_Statics::NewProp_Theme,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_ApplyResolvedTheme_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_ApplyResolvedTheme_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "ApplyResolvedTheme", Z_Construct_UFunction_UDQSDialogueWidgetBase_ApplyResolvedTheme_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_ApplyResolvedTheme_Statics::PropPointers), sizeof(DQSDialogueWidgetBase_eventApplyResolvedTheme_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_ApplyResolvedTheme_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_ApplyResolvedTheme_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DQSDialogueWidgetBase_eventApplyResolvedTheme_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_ApplyResolvedTheme()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_ApplyResolvedTheme_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UDQSDialogueWidgetBase Function ApplyResolvedTheme *************************

// ********** Begin Class UDQSDialogueWidgetBase Function ChooseDialogueOption *********************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_ChooseDialogueOption_Statics
{
	struct DQSDialogueWidgetBase_eventChooseDialogueOption_Parms
	{
		int32 ChoiceIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChoiceIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_ChooseDialogueOption_Statics::NewProp_ChoiceIndex = { "ChoiceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventChooseDialogueOption_Parms, ChoiceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_ChooseDialogueOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_ChooseDialogueOption_Statics::NewProp_ChoiceIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_ChooseDialogueOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_ChooseDialogueOption_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "ChooseDialogueOption", Z_Construct_UFunction_UDQSDialogueWidgetBase_ChooseDialogueOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_ChooseDialogueOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_ChooseDialogueOption_Statics::DQSDialogueWidgetBase_eventChooseDialogueOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_ChooseDialogueOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_ChooseDialogueOption_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_ChooseDialogueOption_Statics::DQSDialogueWidgetBase_eventChooseDialogueOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_ChooseDialogueOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_ChooseDialogueOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execChooseDialogueOption)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChoiceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChooseDialogueOption(Z_Param_ChoiceIndex);
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function ChooseDialogueOption ***********************

// ********** Begin Class UDQSDialogueWidgetBase Function ContinueDialogue *************************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_ContinueDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_ContinueDialogue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "ContinueDialogue", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_ContinueDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_ContinueDialogue_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_ContinueDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_ContinueDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execContinueDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ContinueDialogue();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function ContinueDialogue ***************************

// ********** Begin Class UDQSDialogueWidgetBase Function GetChoice1Text ***************************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Text_Statics
{
	struct DQSDialogueWidgetBase_eventGetChoice1Text_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetChoiceText with GetChoiceCount instead." },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Text_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetChoice1Text_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Text_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Text_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Text_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Text_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetChoice1Text", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Text_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Text_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Text_Statics::DQSDialogueWidgetBase_eventGetChoice1Text_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Text_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Text_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Text_Statics::DQSDialogueWidgetBase_eventGetChoice1Text_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Text()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Text_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetChoice1Text)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetChoice1Text();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetChoice1Text *****************************

// ********** Begin Class UDQSDialogueWidgetBase Function GetChoice1Visibility *********************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility_Statics
{
	struct DQSDialogueWidgetBase_eventGetChoice1Visibility_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetChoiceButtonVisibility with a dynamic choice index instead." },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetChoice1Visibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetChoice1Visibility", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility_Statics::DQSDialogueWidgetBase_eventGetChoice1Visibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility_Statics::DQSDialogueWidgetBase_eventGetChoice1Visibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetChoice1Visibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->GetChoice1Visibility();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetChoice1Visibility ***********************

// ********** Begin Class UDQSDialogueWidgetBase Function GetChoice2Text ***************************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Text_Statics
{
	struct DQSDialogueWidgetBase_eventGetChoice2Text_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetChoiceText with GetChoiceCount instead." },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Text_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetChoice2Text_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Text_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Text_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Text_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Text_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetChoice2Text", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Text_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Text_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Text_Statics::DQSDialogueWidgetBase_eventGetChoice2Text_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Text_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Text_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Text_Statics::DQSDialogueWidgetBase_eventGetChoice2Text_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Text()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Text_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetChoice2Text)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetChoice2Text();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetChoice2Text *****************************

// ********** Begin Class UDQSDialogueWidgetBase Function GetChoice2Visibility *********************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility_Statics
{
	struct DQSDialogueWidgetBase_eventGetChoice2Visibility_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetChoiceButtonVisibility with a dynamic choice index instead." },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetChoice2Visibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetChoice2Visibility", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility_Statics::DQSDialogueWidgetBase_eventGetChoice2Visibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility_Statics::DQSDialogueWidgetBase_eventGetChoice2Visibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetChoice2Visibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->GetChoice2Visibility();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetChoice2Visibility ***********************

// ********** Begin Class UDQSDialogueWidgetBase Function GetChoiceButtonVisibility ****************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics
{
	struct DQSDialogueWidgetBase_eventGetChoiceButtonVisibility_Parms
	{
		int32 ChoiceIndex;
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChoiceIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::NewProp_ChoiceIndex = { "ChoiceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetChoiceButtonVisibility_Parms, ChoiceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetChoiceButtonVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::NewProp_ChoiceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetChoiceButtonVisibility", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::DQSDialogueWidgetBase_eventGetChoiceButtonVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::DQSDialogueWidgetBase_eventGetChoiceButtonVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetChoiceButtonVisibility)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChoiceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->GetChoiceButtonVisibility(Z_Param_ChoiceIndex);
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetChoiceButtonVisibility ******************

// ********** Begin Class UDQSDialogueWidgetBase Function GetChoiceCount ***************************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceCount_Statics
{
	struct DQSDialogueWidgetBase_eventGetChoiceCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetChoiceCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetChoiceCount", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceCount_Statics::DQSDialogueWidgetBase_eventGetChoiceCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceCount_Statics::DQSDialogueWidgetBase_eventGetChoiceCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetChoiceCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetChoiceCount();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetChoiceCount *****************************

// ********** Begin Class UDQSDialogueWidgetBase Function GetChoiceDisabledReason ******************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason_Statics
{
	struct DQSDialogueWidgetBase_eventGetChoiceDisabledReason_Parms
	{
		int32 ChoiceIndex;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChoiceIndex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason_Statics::NewProp_ChoiceIndex = { "ChoiceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetChoiceDisabledReason_Parms, ChoiceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetChoiceDisabledReason_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason_Statics::NewProp_ChoiceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetChoiceDisabledReason", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason_Statics::DQSDialogueWidgetBase_eventGetChoiceDisabledReason_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason_Statics::DQSDialogueWidgetBase_eventGetChoiceDisabledReason_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetChoiceDisabledReason)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChoiceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetChoiceDisabledReason(Z_Param_ChoiceIndex);
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetChoiceDisabledReason ********************

// ********** Begin Class UDQSDialogueWidgetBase Function GetChoiceText ****************************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText_Statics
{
	struct DQSDialogueWidgetBase_eventGetChoiceText_Parms
	{
		int32 ChoiceIndex;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChoiceIndex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText_Statics::NewProp_ChoiceIndex = { "ChoiceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetChoiceText_Parms, ChoiceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetChoiceText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText_Statics::NewProp_ChoiceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetChoiceText", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText_Statics::DQSDialogueWidgetBase_eventGetChoiceText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText_Statics::DQSDialogueWidgetBase_eventGetChoiceText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetChoiceText)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChoiceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetChoiceText(Z_Param_ChoiceIndex);
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetChoiceText ******************************

// ********** Begin Class UDQSDialogueWidgetBase Function GetContinueButtonVisibility **************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility_Statics
{
	struct DQSDialogueWidgetBase_eventGetContinueButtonVisibility_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetContinueButtonVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetContinueButtonVisibility", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility_Statics::DQSDialogueWidgetBase_eventGetContinueButtonVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility_Statics::DQSDialogueWidgetBase_eventGetContinueButtonVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetContinueButtonVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->GetContinueButtonVisibility();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetContinueButtonVisibility ****************

// ********** Begin Class UDQSDialogueWidgetBase Function GetDialogueBodyText **********************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueBodyText_Statics
{
	struct DQSDialogueWidgetBase_eventGetDialogueBodyText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueBodyText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetDialogueBodyText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueBodyText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueBodyText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueBodyText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueBodyText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetDialogueBodyText", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueBodyText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueBodyText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueBodyText_Statics::DQSDialogueWidgetBase_eventGetDialogueBodyText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueBodyText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueBodyText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueBodyText_Statics::DQSDialogueWidgetBase_eventGetDialogueBodyText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueBodyText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueBodyText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetDialogueBodyText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDialogueBodyText();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetDialogueBodyText ************************

// ********** Begin Class UDQSDialogueWidgetBase Function GetDialogueRootVisibility ****************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility_Statics
{
	struct DQSDialogueWidgetBase_eventGetDialogueRootVisibility_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetDialogueRootVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetDialogueRootVisibility", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility_Statics::DQSDialogueWidgetBase_eventGetDialogueRootVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility_Statics::DQSDialogueWidgetBase_eventGetDialogueRootVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetDialogueRootVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->GetDialogueRootVisibility();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetDialogueRootVisibility ******************

// ********** Begin Class UDQSDialogueWidgetBase Function GetPortraitVisibility ********************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility_Statics
{
	struct DQSDialogueWidgetBase_eventGetPortraitVisibility_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetPortraitVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetPortraitVisibility", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility_Statics::DQSDialogueWidgetBase_eventGetPortraitVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility_Statics::DQSDialogueWidgetBase_eventGetPortraitVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetPortraitVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->GetPortraitVisibility();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetPortraitVisibility **********************

// ********** Begin Class UDQSDialogueWidgetBase Function GetResolvedTheme *************************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResolvedTheme_Statics
{
	struct DQSDialogueWidgetBase_eventGetResolvedTheme_Parms
	{
		UDQSUIThemeAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResolvedTheme_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetResolvedTheme_Parms, ReturnValue), Z_Construct_UClass_UDQSUIThemeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResolvedTheme_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResolvedTheme_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResolvedTheme_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResolvedTheme_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetResolvedTheme", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResolvedTheme_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResolvedTheme_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResolvedTheme_Statics::DQSDialogueWidgetBase_eventGetResolvedTheme_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResolvedTheme_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResolvedTheme_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResolvedTheme_Statics::DQSDialogueWidgetBase_eventGetResolvedTheme_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResolvedTheme()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResolvedTheme_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetResolvedTheme)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDQSUIThemeAsset**)Z_Param__Result=P_THIS->GetResolvedTheme();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetResolvedTheme ***************************

// ********** Begin Class UDQSDialogueWidgetBase Function GetResponsesSectionVisibility ************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility_Statics
{
	struct DQSDialogueWidgetBase_eventGetResponsesSectionVisibility_Parms
	{
		ESlateVisibility ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetResponsesSectionVisibility_Parms, ReturnValue), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(0, nullptr) }; // 2974316103
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetResponsesSectionVisibility", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility_Statics::DQSDialogueWidgetBase_eventGetResponsesSectionVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility_Statics::DQSDialogueWidgetBase_eventGetResponsesSectionVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetResponsesSectionVisibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ESlateVisibility*)Z_Param__Result=P_THIS->GetResponsesSectionVisibility();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetResponsesSectionVisibility **************

// ********** Begin Class UDQSDialogueWidgetBase Function GetSpeakerNameText ***********************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerNameText_Statics
{
	struct DQSDialogueWidgetBase_eventGetSpeakerNameText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerNameText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetSpeakerNameText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerNameText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerNameText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerNameText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerNameText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetSpeakerNameText", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerNameText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerNameText_Statics::DQSDialogueWidgetBase_eventGetSpeakerNameText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerNameText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerNameText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerNameText_Statics::DQSDialogueWidgetBase_eventGetSpeakerNameText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerNameText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerNameText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetSpeakerNameText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetSpeakerNameText();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetSpeakerNameText *************************

// ********** Begin Class UDQSDialogueWidgetBase Function GetSpeakerPortrait ***********************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerPortrait_Statics
{
	struct DQSDialogueWidgetBase_eventGetSpeakerPortrait_Parms
	{
		TSoftObjectPtr<UTexture2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerPortrait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetSpeakerPortrait_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerPortrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerPortrait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerPortrait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerPortrait_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetSpeakerPortrait", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerPortrait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerPortrait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerPortrait_Statics::DQSDialogueWidgetBase_eventGetSpeakerPortrait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerPortrait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerPortrait_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerPortrait_Statics::DQSDialogueWidgetBase_eventGetSpeakerPortrait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerPortrait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerPortrait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetSpeakerPortrait)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UTexture2D>*)Z_Param__Result=P_THIS->GetSpeakerPortrait();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetSpeakerPortrait *************************

// ********** Begin Class UDQSDialogueWidgetBase Function GetSpeakerStyle **************************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerStyle_Statics
{
	struct DQSDialogueWidgetBase_eventGetSpeakerStyle_Parms
	{
		TSoftObjectPtr<UDQSSpeakerStyleAsset> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerStyle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventGetSpeakerStyle_Parms, ReturnValue), Z_Construct_UClass_UDQSSpeakerStyleAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerStyle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerStyle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "GetSpeakerStyle", Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerStyle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerStyle_Statics::DQSDialogueWidgetBase_eventGetSpeakerStyle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerStyle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerStyle_Statics::DQSDialogueWidgetBase_eventGetSpeakerStyle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerStyle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerStyle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execGetSpeakerStyle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UDQSSpeakerStyleAsset>*)Z_Param__Result=P_THIS->GetSpeakerStyle();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function GetSpeakerStyle ****************************

// ********** Begin Class UDQSDialogueWidgetBase Function HandleViewModelStateChanged **************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_HandleViewModelStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_HandleViewModelStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "HandleViewModelStateChanged", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_HandleViewModelStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_HandleViewModelStateChanged_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_HandleViewModelStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_HandleViewModelStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execHandleViewModelStateChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleViewModelStateChanged();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function HandleViewModelStateChanged ****************

// ********** Begin Class UDQSDialogueWidgetBase Function IsChoice1Enabled *************************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled_Statics
{
	struct DQSDialogueWidgetBase_eventIsChoice1Enabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use IsChoiceEnabled with a dynamic choice index instead." },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DQSDialogueWidgetBase_eventIsChoice1Enabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DQSDialogueWidgetBase_eventIsChoice1Enabled_Parms), &Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "IsChoice1Enabled", Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled_Statics::DQSDialogueWidgetBase_eventIsChoice1Enabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled_Statics::DQSDialogueWidgetBase_eventIsChoice1Enabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execIsChoice1Enabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsChoice1Enabled();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function IsChoice1Enabled ***************************

// ********** Begin Class UDQSDialogueWidgetBase Function IsChoice2Enabled *************************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled_Statics
{
	struct DQSDialogueWidgetBase_eventIsChoice2Enabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use IsChoiceEnabled with a dynamic choice index instead." },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DQSDialogueWidgetBase_eventIsChoice2Enabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DQSDialogueWidgetBase_eventIsChoice2Enabled_Parms), &Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "IsChoice2Enabled", Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled_Statics::DQSDialogueWidgetBase_eventIsChoice2Enabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled_Statics::DQSDialogueWidgetBase_eventIsChoice2Enabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execIsChoice2Enabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsChoice2Enabled();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function IsChoice2Enabled ***************************

// ********** Begin Class UDQSDialogueWidgetBase Function IsChoiceEnabled **************************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics
{
	struct DQSDialogueWidgetBase_eventIsChoiceEnabled_Parms
	{
		int32 ChoiceIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChoiceIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::NewProp_ChoiceIndex = { "ChoiceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueWidgetBase_eventIsChoiceEnabled_Parms, ChoiceIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DQSDialogueWidgetBase_eventIsChoiceEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DQSDialogueWidgetBase_eventIsChoiceEnabled_Parms), &Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::NewProp_ChoiceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "IsChoiceEnabled", Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::DQSDialogueWidgetBase_eventIsChoiceEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::DQSDialogueWidgetBase_eventIsChoiceEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execIsChoiceEnabled)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChoiceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsChoiceEnabled(Z_Param_ChoiceIndex);
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function IsChoiceEnabled ****************************

// ********** Begin Class UDQSDialogueWidgetBase Function IsContinueButtonEnabled ******************
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled_Statics
{
	struct DQSDialogueWidgetBase_eventIsContinueButtonEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DQSDialogueWidgetBase_eventIsContinueButtonEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DQSDialogueWidgetBase_eventIsContinueButtonEnabled_Parms), &Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "IsContinueButtonEnabled", Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled_Statics::DQSDialogueWidgetBase_eventIsContinueButtonEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled_Statics::DQSDialogueWidgetBase_eventIsContinueButtonEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueWidgetBase::execIsContinueButtonEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsContinueButtonEnabled();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueWidgetBase Function IsContinueButtonEnabled ********************

// ********** Begin Class UDQSDialogueWidgetBase Function OnDialogueStateChanged *******************
static FName NAME_UDQSDialogueWidgetBase_OnDialogueStateChanged = FName(TEXT("OnDialogueStateChanged"));
void UDQSDialogueWidgetBase::OnDialogueStateChanged()
{
	UFunction* Func = FindFunctionChecked(NAME_UDQSDialogueWidgetBase_OnDialogueStateChanged);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UDQSDialogueWidgetBase_OnDialogueStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueWidgetBase_OnDialogueStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueWidgetBase, nullptr, "OnDialogueStateChanged", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueWidgetBase_OnDialogueStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueWidgetBase_OnDialogueStateChanged_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDQSDialogueWidgetBase_OnDialogueStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueWidgetBase_OnDialogueStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UDQSDialogueWidgetBase Function OnDialogueStateChanged *********************

// ********** Begin Class UDQSDialogueWidgetBase ***************************************************
void UDQSDialogueWidgetBase::StaticRegisterNativesUDQSDialogueWidgetBase()
{
	UClass* Class = UDQSDialogueWidgetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ChooseDialogueOption", &UDQSDialogueWidgetBase::execChooseDialogueOption },
		{ "ContinueDialogue", &UDQSDialogueWidgetBase::execContinueDialogue },
		{ "GetChoice1Text", &UDQSDialogueWidgetBase::execGetChoice1Text },
		{ "GetChoice1Visibility", &UDQSDialogueWidgetBase::execGetChoice1Visibility },
		{ "GetChoice2Text", &UDQSDialogueWidgetBase::execGetChoice2Text },
		{ "GetChoice2Visibility", &UDQSDialogueWidgetBase::execGetChoice2Visibility },
		{ "GetChoiceButtonVisibility", &UDQSDialogueWidgetBase::execGetChoiceButtonVisibility },
		{ "GetChoiceCount", &UDQSDialogueWidgetBase::execGetChoiceCount },
		{ "GetChoiceDisabledReason", &UDQSDialogueWidgetBase::execGetChoiceDisabledReason },
		{ "GetChoiceText", &UDQSDialogueWidgetBase::execGetChoiceText },
		{ "GetContinueButtonVisibility", &UDQSDialogueWidgetBase::execGetContinueButtonVisibility },
		{ "GetDialogueBodyText", &UDQSDialogueWidgetBase::execGetDialogueBodyText },
		{ "GetDialogueRootVisibility", &UDQSDialogueWidgetBase::execGetDialogueRootVisibility },
		{ "GetPortraitVisibility", &UDQSDialogueWidgetBase::execGetPortraitVisibility },
		{ "GetResolvedTheme", &UDQSDialogueWidgetBase::execGetResolvedTheme },
		{ "GetResponsesSectionVisibility", &UDQSDialogueWidgetBase::execGetResponsesSectionVisibility },
		{ "GetSpeakerNameText", &UDQSDialogueWidgetBase::execGetSpeakerNameText },
		{ "GetSpeakerPortrait", &UDQSDialogueWidgetBase::execGetSpeakerPortrait },
		{ "GetSpeakerStyle", &UDQSDialogueWidgetBase::execGetSpeakerStyle },
		{ "HandleViewModelStateChanged", &UDQSDialogueWidgetBase::execHandleViewModelStateChanged },
		{ "IsChoice1Enabled", &UDQSDialogueWidgetBase::execIsChoice1Enabled },
		{ "IsChoice2Enabled", &UDQSDialogueWidgetBase::execIsChoice2Enabled },
		{ "IsChoiceEnabled", &UDQSDialogueWidgetBase::execIsChoiceEnabled },
		{ "IsContinueButtonEnabled", &UDQSDialogueWidgetBase::execIsContinueButtonEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSDialogueWidgetBase;
UClass* UDQSDialogueWidgetBase::GetPrivateStaticClass()
{
	using TClass = UDQSDialogueWidgetBase;
	if (!Z_Registration_Info_UClass_UDQSDialogueWidgetBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSDialogueWidgetBase"),
			Z_Registration_Info_UClass_UDQSDialogueWidgetBase.InnerSingleton,
			StaticRegisterNativesUDQSDialogueWidgetBase,
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
	return Z_Registration_Info_UClass_UDQSDialogueWidgetBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSDialogueWidgetBase_NoRegister()
{
	return UDQSDialogueWidgetBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSDialogueWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSDialogueWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewModel_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThemeOverride_MetaData[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSDialogueWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewModel;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ThemeOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_ApplyResolvedTheme, "ApplyResolvedTheme" }, // 344485039
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_ChooseDialogueOption, "ChooseDialogueOption" }, // 2767021822
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_ContinueDialogue, "ContinueDialogue" }, // 145101713
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Text, "GetChoice1Text" }, // 3668311454
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice1Visibility, "GetChoice1Visibility" }, // 3314693274
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Text, "GetChoice2Text" }, // 3662709463
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoice2Visibility, "GetChoice2Visibility" }, // 1683050411
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceButtonVisibility, "GetChoiceButtonVisibility" }, // 2066473263
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceCount, "GetChoiceCount" }, // 1817628453
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceDisabledReason, "GetChoiceDisabledReason" }, // 45916366
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetChoiceText, "GetChoiceText" }, // 2191067922
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetContinueButtonVisibility, "GetContinueButtonVisibility" }, // 2643939276
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueBodyText, "GetDialogueBodyText" }, // 3361204728
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetDialogueRootVisibility, "GetDialogueRootVisibility" }, // 4168445170
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetPortraitVisibility, "GetPortraitVisibility" }, // 975981862
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResolvedTheme, "GetResolvedTheme" }, // 471427547
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetResponsesSectionVisibility, "GetResponsesSectionVisibility" }, // 3979542588
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerNameText, "GetSpeakerNameText" }, // 2062573354
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerPortrait, "GetSpeakerPortrait" }, // 4035034097
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_GetSpeakerStyle, "GetSpeakerStyle" }, // 1234672423
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_HandleViewModelStateChanged, "HandleViewModelStateChanged" }, // 3987572350
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice1Enabled, "IsChoice1Enabled" }, // 629888373
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoice2Enabled, "IsChoice2Enabled" }, // 348823293
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_IsChoiceEnabled, "IsChoiceEnabled" }, // 2646343432
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_IsContinueButtonEnabled, "IsContinueButtonEnabled" }, // 2610312872
		{ &Z_Construct_UFunction_UDQSDialogueWidgetBase_OnDialogueStateChanged, "OnDialogueStateChanged" }, // 1249788827
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSDialogueWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDialogueWidgetBase_Statics::NewProp_ViewModel = { "ViewModel", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDialogueWidgetBase, ViewModel), Z_Construct_UClass_UDQSDialogueViewModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewModel_MetaData), NewProp_ViewModel_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDQSDialogueWidgetBase_Statics::NewProp_ThemeOverride = { "ThemeOverride", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDialogueWidgetBase, ThemeOverride), Z_Construct_UClass_UDQSUIThemeAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThemeOverride_MetaData), NewProp_ThemeOverride_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSDialogueWidgetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDialogueWidgetBase_Statics::NewProp_ViewModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDialogueWidgetBase_Statics::NewProp_ThemeOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueWidgetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSDialogueWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSDialogueWidgetBase_Statics::ClassParams = {
	&UDQSDialogueWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDQSDialogueWidgetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueWidgetBase_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSDialogueWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSDialogueWidgetBase()
{
	if (!Z_Registration_Info_UClass_UDQSDialogueWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSDialogueWidgetBase.OuterSingleton, Z_Construct_UClass_UDQSDialogueWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSDialogueWidgetBase.OuterSingleton;
}
UDQSDialogueWidgetBase::UDQSDialogueWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSDialogueWidgetBase);
UDQSDialogueWidgetBase::~UDQSDialogueWidgetBase() {}
// ********** End Class UDQSDialogueWidgetBase *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueWidgetBase_h__Script_DQSUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSDialogueWidgetBase, UDQSDialogueWidgetBase::StaticClass, TEXT("UDQSDialogueWidgetBase"), &Z_Registration_Info_UClass_UDQSDialogueWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSDialogueWidgetBase), 2429701071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueWidgetBase_h__Script_DQSUI_3088256519(TEXT("/Script/DQSUI"),
	Z_CompiledInDeferFile_FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueWidgetBase_h__Script_DQSUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueWidgetBase_h__Script_DQSUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
