// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSDialogueViewModel.h"
#include "DQSTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSDialogueViewModel() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogQuestSubsystem_NoRegister();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSActiveDialogueLine();
DQSUI_API UClass* Z_Construct_UClass_UDQSDialogueViewModel();
DQSUI_API UClass* Z_Construct_UClass_UDQSDialogueViewModel_NoRegister();
DQSUI_API UFunction* Z_Construct_UDelegateFunction_DQSUI_DQSDialogueViewModelChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_DQSUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FDQSDialogueViewModelChangedSignature *********************************
struct Z_Construct_UDelegateFunction_DQSUI_DQSDialogueViewModelChangedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DQSDialogueViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DQSUI_DQSDialogueViewModelChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DQSUI, nullptr, "DQSDialogueViewModelChangedSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DQSUI_DQSDialogueViewModelChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DQSUI_DQSDialogueViewModelChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_DQSUI_DQSDialogueViewModelChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DQSUI_DQSDialogueViewModelChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDQSDialogueViewModelChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& DQSDialogueViewModelChangedSignature)
{
	DQSDialogueViewModelChangedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FDQSDialogueViewModelChangedSignature ***********************************

// ********** Begin Class UDQSDialogueViewModel Function GetCurrentLine ****************************
struct Z_Construct_UFunction_UDQSDialogueViewModel_GetCurrentLine_Statics
{
	struct DQSDialogueViewModel_eventGetCurrentLine_Parms
	{
		FDQSActiveDialogueLine ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDQSDialogueViewModel_GetCurrentLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueViewModel_eventGetCurrentLine_Parms, ReturnValue), Z_Construct_UScriptStruct_FDQSActiveDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 3038726987
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueViewModel_GetCurrentLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueViewModel_GetCurrentLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueViewModel_GetCurrentLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueViewModel_GetCurrentLine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueViewModel, nullptr, "GetCurrentLine", Z_Construct_UFunction_UDQSDialogueViewModel_GetCurrentLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueViewModel_GetCurrentLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueViewModel_GetCurrentLine_Statics::DQSDialogueViewModel_eventGetCurrentLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueViewModel_GetCurrentLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueViewModel_GetCurrentLine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueViewModel_GetCurrentLine_Statics::DQSDialogueViewModel_eventGetCurrentLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueViewModel_GetCurrentLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueViewModel_GetCurrentLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueViewModel::execGetCurrentLine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDQSActiveDialogueLine*)Z_Param__Result=P_THIS->GetCurrentLine();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueViewModel Function GetCurrentLine ******************************

// ********** Begin Class UDQSDialogueViewModel Function HandleDialogueEnded ***********************
struct Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DQSDialogueViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueEnded_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueViewModel, nullptr, "HandleDialogueEnded", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueEnded_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueViewModel::execHandleDialogueEnded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDialogueEnded();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueViewModel Function HandleDialogueEnded *************************

// ********** Begin Class UDQSDialogueViewModel Function HandleDialogueUpdated *********************
struct Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueUpdated_Statics
{
	struct DQSDialogueViewModel_eventHandleDialogueUpdated_Parms
	{
		FDQSActiveDialogueLine ActiveLine;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DQSDialogueViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveLine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueUpdated_Statics::NewProp_ActiveLine = { "ActiveLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueViewModel_eventHandleDialogueUpdated_Parms, ActiveLine), Z_Construct_UScriptStruct_FDQSActiveDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveLine_MetaData), NewProp_ActiveLine_MetaData) }; // 3038726987
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueUpdated_Statics::NewProp_ActiveLine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueViewModel, nullptr, "HandleDialogueUpdated", Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueUpdated_Statics::DQSDialogueViewModel_eventHandleDialogueUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueUpdated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueUpdated_Statics::DQSDialogueViewModel_eventHandleDialogueUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueViewModel::execHandleDialogueUpdated)
{
	P_GET_STRUCT_REF(FDQSActiveDialogueLine,Z_Param_Out_ActiveLine);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleDialogueUpdated(Z_Param_Out_ActiveLine);
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueViewModel Function HandleDialogueUpdated ***********************

// ********** Begin Class UDQSDialogueViewModel Function InitializeFromWorldContext ****************
struct Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics
{
	struct DQSDialogueViewModel_eventInitializeFromWorldContext_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueViewModel_eventInitializeFromWorldContext_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DQSDialogueViewModel_eventInitializeFromWorldContext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DQSDialogueViewModel_eventInitializeFromWorldContext_Parms), &Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueViewModel, nullptr, "InitializeFromWorldContext", Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::DQSDialogueViewModel_eventInitializeFromWorldContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::DQSDialogueViewModel_eventInitializeFromWorldContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueViewModel::execInitializeFromWorldContext)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitializeFromWorldContext(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueViewModel Function InitializeFromWorldContext ******************

// ********** Begin Class UDQSDialogueViewModel Function IsDialogueActive **************************
struct Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive_Statics
{
	struct DQSDialogueViewModel_eventIsDialogueActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueViewModel.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DQSDialogueViewModel_eventIsDialogueActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DQSDialogueViewModel_eventIsDialogueActive_Parms), &Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueViewModel, nullptr, "IsDialogueActive", Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive_Statics::DQSDialogueViewModel_eventIsDialogueActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive_Statics::DQSDialogueViewModel_eventIsDialogueActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueViewModel::execIsDialogueActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDialogueActive();
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueViewModel Function IsDialogueActive ****************************

// ********** Begin Class UDQSDialogueViewModel ****************************************************
void UDQSDialogueViewModel::StaticRegisterNativesUDQSDialogueViewModel()
{
	UClass* Class = UDQSDialogueViewModel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentLine", &UDQSDialogueViewModel::execGetCurrentLine },
		{ "HandleDialogueEnded", &UDQSDialogueViewModel::execHandleDialogueEnded },
		{ "HandleDialogueUpdated", &UDQSDialogueViewModel::execHandleDialogueUpdated },
		{ "InitializeFromWorldContext", &UDQSDialogueViewModel::execInitializeFromWorldContext },
		{ "IsDialogueActive", &UDQSDialogueViewModel::execIsDialogueActive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSDialogueViewModel;
UClass* UDQSDialogueViewModel::GetPrivateStaticClass()
{
	using TClass = UDQSDialogueViewModel;
	if (!Z_Registration_Info_UClass_UDQSDialogueViewModel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSDialogueViewModel"),
			Z_Registration_Info_UClass_UDQSDialogueViewModel.InnerSingleton,
			StaticRegisterNativesUDQSDialogueViewModel,
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
	return Z_Registration_Info_UClass_UDQSDialogueViewModel.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSDialogueViewModel_NoRegister()
{
	return UDQSDialogueViewModel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSDialogueViewModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSDialogueViewModel.h" },
		{ "ModuleRelativePath", "Public/DQSDialogueViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStateChanged_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDialogueActive_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLine_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/DQSDialogueViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateChanged;
	static void NewProp_bDialogueActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDialogueActive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLine;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundSubsystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDQSDialogueViewModel_GetCurrentLine, "GetCurrentLine" }, // 3073439347
		{ &Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueEnded, "HandleDialogueEnded" }, // 2575083738
		{ &Z_Construct_UFunction_UDQSDialogueViewModel_HandleDialogueUpdated, "HandleDialogueUpdated" }, // 879403846
		{ &Z_Construct_UFunction_UDQSDialogueViewModel_InitializeFromWorldContext, "InitializeFromWorldContext" }, // 2599460442
		{ &Z_Construct_UFunction_UDQSDialogueViewModel_IsDialogueActive, "IsDialogueActive" }, // 2739353606
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSDialogueViewModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDQSDialogueViewModel_Statics::NewProp_OnStateChanged = { "OnStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDialogueViewModel, OnStateChanged), Z_Construct_UDelegateFunction_DQSUI_DQSDialogueViewModelChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStateChanged_MetaData), NewProp_OnStateChanged_MetaData) }; // 2618393630
void Z_Construct_UClass_UDQSDialogueViewModel_Statics::NewProp_bDialogueActive_SetBit(void* Obj)
{
	((UDQSDialogueViewModel*)Obj)->bDialogueActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDQSDialogueViewModel_Statics::NewProp_bDialogueActive = { "bDialogueActive", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDQSDialogueViewModel), &Z_Construct_UClass_UDQSDialogueViewModel_Statics::NewProp_bDialogueActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDialogueActive_MetaData), NewProp_bDialogueActive_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSDialogueViewModel_Statics::NewProp_CurrentLine = { "CurrentLine", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDialogueViewModel, CurrentLine), Z_Construct_UScriptStruct_FDQSActiveDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLine_MetaData), NewProp_CurrentLine_MetaData) }; // 3038726987
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDialogueViewModel_Statics::NewProp_BoundSubsystem = { "BoundSubsystem", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDialogueViewModel, BoundSubsystem), Z_Construct_UClass_UDialogQuestSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundSubsystem_MetaData), NewProp_BoundSubsystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSDialogueViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDialogueViewModel_Statics::NewProp_OnStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDialogueViewModel_Statics::NewProp_bDialogueActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDialogueViewModel_Statics::NewProp_CurrentLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDialogueViewModel_Statics::NewProp_BoundSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueViewModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSDialogueViewModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueViewModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSDialogueViewModel_Statics::ClassParams = {
	&UDQSDialogueViewModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDQSDialogueViewModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueViewModel_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueViewModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSDialogueViewModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSDialogueViewModel()
{
	if (!Z_Registration_Info_UClass_UDQSDialogueViewModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSDialogueViewModel.OuterSingleton, Z_Construct_UClass_UDQSDialogueViewModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSDialogueViewModel.OuterSingleton;
}
UDQSDialogueViewModel::UDQSDialogueViewModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSDialogueViewModel);
UDQSDialogueViewModel::~UDQSDialogueViewModel() {}
// ********** End Class UDQSDialogueViewModel ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueViewModel_h__Script_DQSUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSDialogueViewModel, UDQSDialogueViewModel::StaticClass, TEXT("UDQSDialogueViewModel"), &Z_Registration_Info_UClass_UDQSDialogueViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSDialogueViewModel), 1389448522U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueViewModel_h__Script_DQSUI_3051222527(TEXT("/Script/DQSUI"),
	Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueViewModel_h__Script_DQSUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueViewModel_h__Script_DQSUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
