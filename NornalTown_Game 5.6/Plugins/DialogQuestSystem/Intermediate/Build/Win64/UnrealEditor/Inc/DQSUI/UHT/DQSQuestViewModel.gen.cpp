// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSQuestViewModel.h"
#include "DQSTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSQuestViewModel() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogQuestSubsystem_NoRegister();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSQuestRuntimeState();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSQuestStatusUpdate();
DQSUI_API UClass* Z_Construct_UClass_UDQSQuestViewModel();
DQSUI_API UClass* Z_Construct_UClass_UDQSQuestViewModel_NoRegister();
DQSUI_API UFunction* Z_Construct_UDelegateFunction_DQSUI_DQSQuestViewModelChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_DQSUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FDQSQuestViewModelChangedSignature ************************************
struct Z_Construct_UDelegateFunction_DQSUI_DQSQuestViewModelChangedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DQSQuestViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DQSUI_DQSQuestViewModelChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DQSUI, nullptr, "DQSQuestViewModelChangedSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DQSUI_DQSQuestViewModelChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DQSUI_DQSQuestViewModelChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_DQSUI_DQSQuestViewModelChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DQSUI_DQSQuestViewModelChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDQSQuestViewModelChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& DQSQuestViewModelChangedSignature)
{
	DQSQuestViewModelChangedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FDQSQuestViewModelChangedSignature **************************************

// ********** Begin Class UDQSQuestViewModel Function GetLatestUpdate ******************************
struct Z_Construct_UFunction_UDQSQuestViewModel_GetLatestUpdate_Statics
{
	struct DQSQuestViewModel_eventGetLatestUpdate_Parms
	{
		FDQSQuestStatusUpdate ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSQuestViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDQSQuestViewModel_GetLatestUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSQuestViewModel_eventGetLatestUpdate_Parms, ReturnValue), Z_Construct_UScriptStruct_FDQSQuestStatusUpdate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2096365403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSQuestViewModel_GetLatestUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSQuestViewModel_GetLatestUpdate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestViewModel_GetLatestUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSQuestViewModel_GetLatestUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSQuestViewModel, nullptr, "GetLatestUpdate", Z_Construct_UFunction_UDQSQuestViewModel_GetLatestUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestViewModel_GetLatestUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSQuestViewModel_GetLatestUpdate_Statics::DQSQuestViewModel_eventGetLatestUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestViewModel_GetLatestUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSQuestViewModel_GetLatestUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSQuestViewModel_GetLatestUpdate_Statics::DQSQuestViewModel_eventGetLatestUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSQuestViewModel_GetLatestUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSQuestViewModel_GetLatestUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSQuestViewModel::execGetLatestUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDQSQuestStatusUpdate*)Z_Param__Result=P_THIS->GetLatestUpdate();
	P_NATIVE_END;
}
// ********** End Class UDQSQuestViewModel Function GetLatestUpdate ********************************

// ********** Begin Class UDQSQuestViewModel Function GetQuestStates *******************************
struct Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics
{
	struct DQSQuestViewModel_eventGetQuestStates_Parms
	{
		TMap<FName,FDQSQuestRuntimeState> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSQuestViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDQSQuestRuntimeState, METADATA_PARAMS(0, nullptr) }; // 1135250961
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSQuestViewModel_eventGetQuestStates_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1135250961
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSQuestViewModel, nullptr, "GetQuestStates", Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::DQSQuestViewModel_eventGetQuestStates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::DQSQuestViewModel_eventGetQuestStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSQuestViewModel::execGetQuestStates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,FDQSQuestRuntimeState>*)Z_Param__Result=P_THIS->GetQuestStates();
	P_NATIVE_END;
}
// ********** End Class UDQSQuestViewModel Function GetQuestStates *********************************

// ********** Begin Class UDQSQuestViewModel Function HandleQuestUpdated ***************************
struct Z_Construct_UFunction_UDQSQuestViewModel_HandleQuestUpdated_Statics
{
	struct DQSQuestViewModel_eventHandleQuestUpdated_Parms
	{
		FDQSQuestStatusUpdate Update;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DQSQuestViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Update_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Update;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDQSQuestViewModel_HandleQuestUpdated_Statics::NewProp_Update = { "Update", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSQuestViewModel_eventHandleQuestUpdated_Parms, Update), Z_Construct_UScriptStruct_FDQSQuestStatusUpdate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Update_MetaData), NewProp_Update_MetaData) }; // 2096365403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSQuestViewModel_HandleQuestUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSQuestViewModel_HandleQuestUpdated_Statics::NewProp_Update,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestViewModel_HandleQuestUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSQuestViewModel_HandleQuestUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSQuestViewModel, nullptr, "HandleQuestUpdated", Z_Construct_UFunction_UDQSQuestViewModel_HandleQuestUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestViewModel_HandleQuestUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSQuestViewModel_HandleQuestUpdated_Statics::DQSQuestViewModel_eventHandleQuestUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestViewModel_HandleQuestUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSQuestViewModel_HandleQuestUpdated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSQuestViewModel_HandleQuestUpdated_Statics::DQSQuestViewModel_eventHandleQuestUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSQuestViewModel_HandleQuestUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSQuestViewModel_HandleQuestUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSQuestViewModel::execHandleQuestUpdated)
{
	P_GET_STRUCT_REF(FDQSQuestStatusUpdate,Z_Param_Out_Update);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleQuestUpdated(Z_Param_Out_Update);
	P_NATIVE_END;
}
// ********** End Class UDQSQuestViewModel Function HandleQuestUpdated *****************************

// ********** Begin Class UDQSQuestViewModel Function InitializeFromWorldContext *******************
struct Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics
{
	struct DQSQuestViewModel_eventInitializeFromWorldContext_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSQuestViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSQuestViewModel_eventInitializeFromWorldContext_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DQSQuestViewModel_eventInitializeFromWorldContext_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DQSQuestViewModel_eventInitializeFromWorldContext_Parms), &Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSQuestViewModel, nullptr, "InitializeFromWorldContext", Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::DQSQuestViewModel_eventInitializeFromWorldContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::DQSQuestViewModel_eventInitializeFromWorldContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSQuestViewModel::execInitializeFromWorldContext)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitializeFromWorldContext(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UDQSQuestViewModel Function InitializeFromWorldContext *********************

// ********** Begin Class UDQSQuestViewModel *******************************************************
void UDQSQuestViewModel::StaticRegisterNativesUDQSQuestViewModel()
{
	UClass* Class = UDQSQuestViewModel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLatestUpdate", &UDQSQuestViewModel::execGetLatestUpdate },
		{ "GetQuestStates", &UDQSQuestViewModel::execGetQuestStates },
		{ "HandleQuestUpdated", &UDQSQuestViewModel::execHandleQuestUpdated },
		{ "InitializeFromWorldContext", &UDQSQuestViewModel::execInitializeFromWorldContext },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSQuestViewModel;
UClass* UDQSQuestViewModel::GetPrivateStaticClass()
{
	using TClass = UDQSQuestViewModel;
	if (!Z_Registration_Info_UClass_UDQSQuestViewModel.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSQuestViewModel"),
			Z_Registration_Info_UClass_UDQSQuestViewModel.InnerSingleton,
			StaticRegisterNativesUDQSQuestViewModel,
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
	return Z_Registration_Info_UClass_UDQSQuestViewModel.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSQuestViewModel_NoRegister()
{
	return UDQSQuestViewModel::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSQuestViewModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSQuestViewModel.h" },
		{ "ModuleRelativePath", "Public/DQSQuestViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStateChanged_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSQuestViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatestUpdate_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSQuestViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedQuestStates_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSQuestViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/DQSQuestViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateChanged;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatestUpdate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedQuestStates_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CachedQuestStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CachedQuestStates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoundSubsystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDQSQuestViewModel_GetLatestUpdate, "GetLatestUpdate" }, // 3374312165
		{ &Z_Construct_UFunction_UDQSQuestViewModel_GetQuestStates, "GetQuestStates" }, // 3486842971
		{ &Z_Construct_UFunction_UDQSQuestViewModel_HandleQuestUpdated, "HandleQuestUpdated" }, // 2749626472
		{ &Z_Construct_UFunction_UDQSQuestViewModel_InitializeFromWorldContext, "InitializeFromWorldContext" }, // 932885394
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSQuestViewModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDQSQuestViewModel_Statics::NewProp_OnStateChanged = { "OnStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSQuestViewModel, OnStateChanged), Z_Construct_UDelegateFunction_DQSUI_DQSQuestViewModelChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStateChanged_MetaData), NewProp_OnStateChanged_MetaData) }; // 1323939340
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSQuestViewModel_Statics::NewProp_LatestUpdate = { "LatestUpdate", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSQuestViewModel, LatestUpdate), Z_Construct_UScriptStruct_FDQSQuestStatusUpdate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatestUpdate_MetaData), NewProp_LatestUpdate_MetaData) }; // 2096365403
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSQuestViewModel_Statics::NewProp_CachedQuestStates_ValueProp = { "CachedQuestStates", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDQSQuestRuntimeState, METADATA_PARAMS(0, nullptr) }; // 1135250961
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDQSQuestViewModel_Statics::NewProp_CachedQuestStates_Key_KeyProp = { "CachedQuestStates_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDQSQuestViewModel_Statics::NewProp_CachedQuestStates = { "CachedQuestStates", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSQuestViewModel, CachedQuestStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedQuestStates_MetaData), NewProp_CachedQuestStates_MetaData) }; // 1135250961
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSQuestViewModel_Statics::NewProp_BoundSubsystem = { "BoundSubsystem", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSQuestViewModel, BoundSubsystem), Z_Construct_UClass_UDialogQuestSubsystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundSubsystem_MetaData), NewProp_BoundSubsystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSQuestViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSQuestViewModel_Statics::NewProp_OnStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSQuestViewModel_Statics::NewProp_LatestUpdate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSQuestViewModel_Statics::NewProp_CachedQuestStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSQuestViewModel_Statics::NewProp_CachedQuestStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSQuestViewModel_Statics::NewProp_CachedQuestStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSQuestViewModel_Statics::NewProp_BoundSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestViewModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSQuestViewModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestViewModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSQuestViewModel_Statics::ClassParams = {
	&UDQSQuestViewModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDQSQuestViewModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestViewModel_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestViewModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSQuestViewModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSQuestViewModel()
{
	if (!Z_Registration_Info_UClass_UDQSQuestViewModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSQuestViewModel.OuterSingleton, Z_Construct_UClass_UDQSQuestViewModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSQuestViewModel.OuterSingleton;
}
UDQSQuestViewModel::UDQSQuestViewModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSQuestViewModel);
UDQSQuestViewModel::~UDQSQuestViewModel() {}
// ********** End Class UDQSQuestViewModel *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestViewModel_h__Script_DQSUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSQuestViewModel, UDQSQuestViewModel::StaticClass, TEXT("UDQSQuestViewModel"), &Z_Registration_Info_UClass_UDQSQuestViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSQuestViewModel), 1221298752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestViewModel_h__Script_DQSUI_2454847806(TEXT("/Script/DQSUI"),
	Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestViewModel_h__Script_DQSUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestViewModel_h__Script_DQSUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
