// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSAction.h"
#include "DQSTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSAction() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogQuestSubsystem_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSAction();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSAction_AddTag();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSAction_AddTag_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSAction_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSAction_RemoveTag();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSAction_RemoveTag_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSAction_SetBoolVariable();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSAction_SetBoolVariable_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSAction_SetVariable();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSAction_SetVariable_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSAction_TriggerDialogueEvent();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_NoRegister();
DQSRUNTIME_API UEnum* Z_Construct_UEnum_DQSRuntime_EDQSDialogueEventTargetMode();
DQSRUNTIME_API UEnum* Z_Construct_UEnum_DQSRuntime_EDQSStateScope();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSVariableValue();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DQSRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EDQSDialogueEventTargetMode ***********************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDQSDialogueEventTargetMode;
static UEnum* EDQSDialogueEventTargetMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDQSDialogueEventTargetMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDQSDialogueEventTargetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DQSRuntime_EDQSDialogueEventTargetMode, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("EDQSDialogueEventTargetMode"));
	}
	return Z_Registration_Info_UEnum_EDQSDialogueEventTargetMode.OuterSingleton;
}
template<> DQSRUNTIME_API UEnum* StaticEnum<EDQSDialogueEventTargetMode>()
{
	return EDQSDialogueEventTargetMode_StaticEnum();
}
struct Z_Construct_UEnum_DQSRuntime_EDQSDialogueEventTargetMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ActorsOfClass.DisplayName", "Actors Of Class" },
		{ "ActorsOfClass.Name", "EDQSDialogueEventTargetMode::ActorsOfClass" },
		{ "ActorsWithTag.DisplayName", "Actors With Actor Tag" },
		{ "ActorsWithTag.Name", "EDQSDialogueEventTargetMode::ActorsWithTag" },
		{ "AllReceivers.DisplayName", "All Actors With DQS Event Receiver" },
		{ "AllReceivers.Name", "EDQSDialogueEventTargetMode::AllReceivers" },
		{ "BlueprintType", "true" },
		{ "ContextObject.DisplayName", "Context Object" },
		{ "ContextObject.Name", "EDQSDialogueEventTargetMode::ContextObject" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
		{ "SubsystemOnly.DisplayName", "Subsystem Broadcast Only" },
		{ "SubsystemOnly.Name", "EDQSDialogueEventTargetMode::SubsystemOnly" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDQSDialogueEventTargetMode::SubsystemOnly", (int64)EDQSDialogueEventTargetMode::SubsystemOnly },
		{ "EDQSDialogueEventTargetMode::ContextObject", (int64)EDQSDialogueEventTargetMode::ContextObject },
		{ "EDQSDialogueEventTargetMode::AllReceivers", (int64)EDQSDialogueEventTargetMode::AllReceivers },
		{ "EDQSDialogueEventTargetMode::ActorsWithTag", (int64)EDQSDialogueEventTargetMode::ActorsWithTag },
		{ "EDQSDialogueEventTargetMode::ActorsOfClass", (int64)EDQSDialogueEventTargetMode::ActorsOfClass },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DQSRuntime_EDQSDialogueEventTargetMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	"EDQSDialogueEventTargetMode",
	"EDQSDialogueEventTargetMode",
	Z_Construct_UEnum_DQSRuntime_EDQSDialogueEventTargetMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSDialogueEventTargetMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSDialogueEventTargetMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DQSRuntime_EDQSDialogueEventTargetMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DQSRuntime_EDQSDialogueEventTargetMode()
{
	if (!Z_Registration_Info_UEnum_EDQSDialogueEventTargetMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDQSDialogueEventTargetMode.InnerSingleton, Z_Construct_UEnum_DQSRuntime_EDQSDialogueEventTargetMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDQSDialogueEventTargetMode.InnerSingleton;
}
// ********** End Enum EDQSDialogueEventTargetMode *************************************************

// ********** Begin Class UDQSAction Function DescribeAction ***************************************
struct DQSAction_eventDescribeAction_Parms
{
	FText ReturnValue;
};
static FName NAME_UDQSAction_DescribeAction = FName(TEXT("DescribeAction"));
FText UDQSAction::DescribeAction() const
{
	UFunction* Func = FindFunctionChecked(NAME_UDQSAction_DescribeAction);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DQSAction_eventDescribeAction_Parms Parms;
		const_cast<UDQSAction*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UDQSAction*>(this)->DescribeAction_Implementation();
	}
}
struct Z_Construct_UFunction_UDQSAction_DescribeAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDQSAction_DescribeAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSAction_eventDescribeAction_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSAction_DescribeAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSAction_DescribeAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSAction_DescribeAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSAction_DescribeAction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSAction, nullptr, "DescribeAction", Z_Construct_UFunction_UDQSAction_DescribeAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSAction_DescribeAction_Statics::PropPointers), sizeof(DQSAction_eventDescribeAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSAction_DescribeAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSAction_DescribeAction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DQSAction_eventDescribeAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSAction_DescribeAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSAction_DescribeAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSAction::execDescribeAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->DescribeAction_Implementation();
	P_NATIVE_END;
}
// ********** End Class UDQSAction Function DescribeAction *****************************************

// ********** Begin Class UDQSAction Function Execute **********************************************
struct DQSAction_eventExecute_Parms
{
	UDialogQuestSubsystem* Subsystem;
	UObject* Context;
};
static FName NAME_UDQSAction_Execute = FName(TEXT("Execute"));
void UDQSAction::Execute(UDialogQuestSubsystem* Subsystem, UObject* Context)
{
	UFunction* Func = FindFunctionChecked(NAME_UDQSAction_Execute);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DQSAction_eventExecute_Parms Parms;
		Parms.Subsystem=Subsystem;
		Parms.Context=Context;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		Execute_Implementation(Subsystem, Context);
	}
}
struct Z_Construct_UFunction_UDQSAction_Execute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSAction_Execute_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSAction_eventExecute_Parms, Subsystem), Z_Construct_UClass_UDialogQuestSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSAction_Execute_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSAction_eventExecute_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSAction_Execute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSAction_Execute_Statics::NewProp_Subsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSAction_Execute_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSAction_Execute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSAction_Execute_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSAction, nullptr, "Execute", Z_Construct_UFunction_UDQSAction_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSAction_Execute_Statics::PropPointers), sizeof(DQSAction_eventExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSAction_Execute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSAction_Execute_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DQSAction_eventExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSAction_Execute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSAction_Execute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSAction::execExecute)
{
	P_GET_OBJECT(UDialogQuestSubsystem,Z_Param_Subsystem);
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Execute_Implementation(Z_Param_Subsystem,Z_Param_Context);
	P_NATIVE_END;
}
// ********** End Class UDQSAction Function Execute ************************************************

// ********** Begin Class UDQSAction ***************************************************************
void UDQSAction::StaticRegisterNativesUDQSAction()
{
	UClass* Class = UDQSAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DescribeAction", &UDQSAction::execDescribeAction },
		{ "Execute", &UDQSAction::execExecute },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSAction;
UClass* UDQSAction::GetPrivateStaticClass()
{
	using TClass = UDQSAction;
	if (!Z_Registration_Info_UClass_UDQSAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSAction"),
			Z_Registration_Info_UClass_UDQSAction.InnerSingleton,
			StaticRegisterNativesUDQSAction,
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
	return Z_Registration_Info_UClass_UDQSAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSAction_NoRegister()
{
	return UDQSAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDQSAction_DescribeAction, "DescribeAction" }, // 2485773225
		{ &Z_Construct_UFunction_UDQSAction_Execute, "Execute" }, // 263056520
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDQSAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSAction_Statics::ClassParams = {
	&UDQSAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSAction()
{
	if (!Z_Registration_Info_UClass_UDQSAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSAction.OuterSingleton, Z_Construct_UClass_UDQSAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSAction.OuterSingleton;
}
UDQSAction::UDQSAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSAction);
UDQSAction::~UDQSAction() {}
// ********** End Class UDQSAction *****************************************************************

// ********** Begin Class UDQSAction_SetVariable ***************************************************
void UDQSAction_SetVariable::StaticRegisterNativesUDQSAction_SetVariable()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSAction_SetVariable;
UClass* UDQSAction_SetVariable::GetPrivateStaticClass()
{
	using TClass = UDQSAction_SetVariable;
	if (!Z_Registration_Info_UClass_UDQSAction_SetVariable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSAction_SetVariable"),
			Z_Registration_Info_UClass_UDQSAction_SetVariable.InnerSingleton,
			StaticRegisterNativesUDQSAction_SetVariable,
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
	return Z_Registration_Info_UClass_UDQSAction_SetVariable.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSAction_SetVariable_NoRegister()
{
	return UDQSAction_SetVariable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSAction_SetVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSAction.h" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableKey_MetaData[] = {
		{ "Category", "Dialog Quest System|Action" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Dialog Quest System|Action" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scope_MetaData[] = {
		{ "Category", "Dialog Quest System|Action" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScopedOwnerId_MetaData[] = {
		{ "Category", "Dialog Quest System|Action" },
		{ "EditCondition", "Scope != EDQSStateScope::Global" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Scope_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Scope;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScopedOwnerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSAction_SetVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDQSAction_SetVariable_Statics::NewProp_VariableKey = { "VariableKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSAction_SetVariable, VariableKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableKey_MetaData), NewProp_VariableKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSAction_SetVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSAction_SetVariable, Value), Z_Construct_UScriptStruct_FDQSVariableValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 2378772934
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDQSAction_SetVariable_Statics::NewProp_Scope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDQSAction_SetVariable_Statics::NewProp_Scope = { "Scope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSAction_SetVariable, Scope), Z_Construct_UEnum_DQSRuntime_EDQSStateScope, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scope_MetaData), NewProp_Scope_MetaData) }; // 909860648
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDQSAction_SetVariable_Statics::NewProp_ScopedOwnerId = { "ScopedOwnerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSAction_SetVariable, ScopedOwnerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScopedOwnerId_MetaData), NewProp_ScopedOwnerId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSAction_SetVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_SetVariable_Statics::NewProp_VariableKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_SetVariable_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_SetVariable_Statics::NewProp_Scope_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_SetVariable_Statics::NewProp_Scope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_SetVariable_Statics::NewProp_ScopedOwnerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_SetVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSAction_SetVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDQSAction,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_SetVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSAction_SetVariable_Statics::ClassParams = {
	&UDQSAction_SetVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDQSAction_SetVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_SetVariable_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_SetVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSAction_SetVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSAction_SetVariable()
{
	if (!Z_Registration_Info_UClass_UDQSAction_SetVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSAction_SetVariable.OuterSingleton, Z_Construct_UClass_UDQSAction_SetVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSAction_SetVariable.OuterSingleton;
}
UDQSAction_SetVariable::UDQSAction_SetVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSAction_SetVariable);
UDQSAction_SetVariable::~UDQSAction_SetVariable() {}
// ********** End Class UDQSAction_SetVariable *****************************************************

// ********** Begin Class UDQSAction_SetBoolVariable ***********************************************
void UDQSAction_SetBoolVariable::StaticRegisterNativesUDQSAction_SetBoolVariable()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSAction_SetBoolVariable;
UClass* UDQSAction_SetBoolVariable::GetPrivateStaticClass()
{
	using TClass = UDQSAction_SetBoolVariable;
	if (!Z_Registration_Info_UClass_UDQSAction_SetBoolVariable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSAction_SetBoolVariable"),
			Z_Registration_Info_UClass_UDQSAction_SetBoolVariable.InnerSingleton,
			StaticRegisterNativesUDQSAction_SetBoolVariable,
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
	return Z_Registration_Info_UClass_UDQSAction_SetBoolVariable.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSAction_SetBoolVariable_NoRegister()
{
	return UDQSAction_SetBoolVariable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSAction.h" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableKey_MetaData[] = {
		{ "Category", "Dialog Quest System|Action" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[] = {
		{ "Category", "Dialog Quest System|Action" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scope_MetaData[] = {
		{ "Category", "Dialog Quest System|Action" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScopedOwnerId_MetaData[] = {
		{ "Category", "Dialog Quest System|Action" },
		{ "EditCondition", "Scope != EDQSStateScope::Global" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableKey;
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Scope_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Scope;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScopedOwnerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSAction_SetBoolVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::NewProp_VariableKey = { "VariableKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSAction_SetBoolVariable, VariableKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableKey_MetaData), NewProp_VariableKey_MetaData) };
void Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((UDQSAction_SetBoolVariable*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDQSAction_SetBoolVariable), &Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValue_MetaData), NewProp_bValue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::NewProp_Scope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::NewProp_Scope = { "Scope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSAction_SetBoolVariable, Scope), Z_Construct_UEnum_DQSRuntime_EDQSStateScope, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scope_MetaData), NewProp_Scope_MetaData) }; // 909860648
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::NewProp_ScopedOwnerId = { "ScopedOwnerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSAction_SetBoolVariable, ScopedOwnerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScopedOwnerId_MetaData), NewProp_ScopedOwnerId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::NewProp_VariableKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::NewProp_bValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::NewProp_Scope_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::NewProp_Scope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::NewProp_ScopedOwnerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDQSAction,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::ClassParams = {
	&UDQSAction_SetBoolVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSAction_SetBoolVariable()
{
	if (!Z_Registration_Info_UClass_UDQSAction_SetBoolVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSAction_SetBoolVariable.OuterSingleton, Z_Construct_UClass_UDQSAction_SetBoolVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSAction_SetBoolVariable.OuterSingleton;
}
UDQSAction_SetBoolVariable::UDQSAction_SetBoolVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSAction_SetBoolVariable);
UDQSAction_SetBoolVariable::~UDQSAction_SetBoolVariable() {}
// ********** End Class UDQSAction_SetBoolVariable *************************************************

// ********** Begin Class UDQSAction_AddTag ********************************************************
void UDQSAction_AddTag::StaticRegisterNativesUDQSAction_AddTag()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSAction_AddTag;
UClass* UDQSAction_AddTag::GetPrivateStaticClass()
{
	using TClass = UDQSAction_AddTag;
	if (!Z_Registration_Info_UClass_UDQSAction_AddTag.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSAction_AddTag"),
			Z_Registration_Info_UClass_UDQSAction_AddTag.InnerSingleton,
			StaticRegisterNativesUDQSAction_AddTag,
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
	return Z_Registration_Info_UClass_UDQSAction_AddTag.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSAction_AddTag_NoRegister()
{
	return UDQSAction_AddTag::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSAction_AddTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSAction.h" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Dialog Quest System|Action" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSAction_AddTag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSAction_AddTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSAction_AddTag, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSAction_AddTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_AddTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_AddTag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSAction_AddTag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDQSAction,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_AddTag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSAction_AddTag_Statics::ClassParams = {
	&UDQSAction_AddTag::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDQSAction_AddTag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_AddTag_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_AddTag_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSAction_AddTag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSAction_AddTag()
{
	if (!Z_Registration_Info_UClass_UDQSAction_AddTag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSAction_AddTag.OuterSingleton, Z_Construct_UClass_UDQSAction_AddTag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSAction_AddTag.OuterSingleton;
}
UDQSAction_AddTag::UDQSAction_AddTag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSAction_AddTag);
UDQSAction_AddTag::~UDQSAction_AddTag() {}
// ********** End Class UDQSAction_AddTag **********************************************************

// ********** Begin Class UDQSAction_RemoveTag *****************************************************
void UDQSAction_RemoveTag::StaticRegisterNativesUDQSAction_RemoveTag()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSAction_RemoveTag;
UClass* UDQSAction_RemoveTag::GetPrivateStaticClass()
{
	using TClass = UDQSAction_RemoveTag;
	if (!Z_Registration_Info_UClass_UDQSAction_RemoveTag.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSAction_RemoveTag"),
			Z_Registration_Info_UClass_UDQSAction_RemoveTag.InnerSingleton,
			StaticRegisterNativesUDQSAction_RemoveTag,
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
	return Z_Registration_Info_UClass_UDQSAction_RemoveTag.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSAction_RemoveTag_NoRegister()
{
	return UDQSAction_RemoveTag::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSAction_RemoveTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSAction.h" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Dialog Quest System|Action" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSAction_RemoveTag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSAction_RemoveTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSAction_RemoveTag, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSAction_RemoveTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_RemoveTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_RemoveTag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSAction_RemoveTag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDQSAction,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_RemoveTag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSAction_RemoveTag_Statics::ClassParams = {
	&UDQSAction_RemoveTag::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDQSAction_RemoveTag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_RemoveTag_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_RemoveTag_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSAction_RemoveTag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSAction_RemoveTag()
{
	if (!Z_Registration_Info_UClass_UDQSAction_RemoveTag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSAction_RemoveTag.OuterSingleton, Z_Construct_UClass_UDQSAction_RemoveTag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSAction_RemoveTag.OuterSingleton;
}
UDQSAction_RemoveTag::UDQSAction_RemoveTag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSAction_RemoveTag);
UDQSAction_RemoveTag::~UDQSAction_RemoveTag() {}
// ********** End Class UDQSAction_RemoveTag *******************************************************

// ********** Begin Class UDQSAction_TriggerDialogueEvent ******************************************
void UDQSAction_TriggerDialogueEvent::StaticRegisterNativesUDQSAction_TriggerDialogueEvent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSAction_TriggerDialogueEvent;
UClass* UDQSAction_TriggerDialogueEvent::GetPrivateStaticClass()
{
	using TClass = UDQSAction_TriggerDialogueEvent;
	if (!Z_Registration_Info_UClass_UDQSAction_TriggerDialogueEvent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSAction_TriggerDialogueEvent"),
			Z_Registration_Info_UClass_UDQSAction_TriggerDialogueEvent.InnerSingleton,
			StaticRegisterNativesUDQSAction_TriggerDialogueEvent,
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
	return Z_Registration_Info_UClass_UDQSAction_TriggerDialogueEvent.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_NoRegister()
{
	return UDQSAction_TriggerDialogueEvent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSAction.h" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventTag_MetaData[] = {
		{ "Category", "Dialog Quest System|Action" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "Category", "Dialog Quest System|Action" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetMode_MetaData[] = {
		{ "Category", "Dialog Quest System|Action" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTag_MetaData[] = {
		{ "Category", "Dialog Quest System|Action" },
		{ "EditCondition", "TargetMode == EDQSDialogueEventTargetMode::ActorsWithTag" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorClass_MetaData[] = {
		{ "Category", "Dialog Quest System|Action" },
		{ "EditCondition", "TargetMode == EDQSDialogueEventTargetMode::ActorsOfClass" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DQSAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActorTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TargetActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSAction_TriggerDialogueEvent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSAction_TriggerDialogueEvent, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventTag_MetaData), NewProp_EventTag_MetaData) }; // 133831994
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSAction_TriggerDialogueEvent, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::NewProp_TargetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::NewProp_TargetMode = { "TargetMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSAction_TriggerDialogueEvent, TargetMode), Z_Construct_UEnum_DQSRuntime_EDQSDialogueEventTargetMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetMode_MetaData), NewProp_TargetMode_MetaData) }; // 3575262926
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::NewProp_ActorTag = { "ActorTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSAction_TriggerDialogueEvent, ActorTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTag_MetaData), NewProp_ActorTag_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::NewProp_TargetActorClass = { "TargetActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSAction_TriggerDialogueEvent, TargetActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActorClass_MetaData), NewProp_TargetActorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::NewProp_TargetMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::NewProp_TargetMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::NewProp_ActorTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::NewProp_TargetActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDQSAction,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::ClassParams = {
	&UDQSAction_TriggerDialogueEvent::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSAction_TriggerDialogueEvent()
{
	if (!Z_Registration_Info_UClass_UDQSAction_TriggerDialogueEvent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSAction_TriggerDialogueEvent.OuterSingleton, Z_Construct_UClass_UDQSAction_TriggerDialogueEvent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSAction_TriggerDialogueEvent.OuterSingleton;
}
UDQSAction_TriggerDialogueEvent::UDQSAction_TriggerDialogueEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSAction_TriggerDialogueEvent);
UDQSAction_TriggerDialogueEvent::~UDQSAction_TriggerDialogueEvent() {}
// ********** End Class UDQSAction_TriggerDialogueEvent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSAction_h__Script_DQSRuntime_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDQSDialogueEventTargetMode_StaticEnum, TEXT("EDQSDialogueEventTargetMode"), &Z_Registration_Info_UEnum_EDQSDialogueEventTargetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3575262926U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSAction, UDQSAction::StaticClass, TEXT("UDQSAction"), &Z_Registration_Info_UClass_UDQSAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSAction), 1433825780U) },
		{ Z_Construct_UClass_UDQSAction_SetVariable, UDQSAction_SetVariable::StaticClass, TEXT("UDQSAction_SetVariable"), &Z_Registration_Info_UClass_UDQSAction_SetVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSAction_SetVariable), 2390756922U) },
		{ Z_Construct_UClass_UDQSAction_SetBoolVariable, UDQSAction_SetBoolVariable::StaticClass, TEXT("UDQSAction_SetBoolVariable"), &Z_Registration_Info_UClass_UDQSAction_SetBoolVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSAction_SetBoolVariable), 1443842608U) },
		{ Z_Construct_UClass_UDQSAction_AddTag, UDQSAction_AddTag::StaticClass, TEXT("UDQSAction_AddTag"), &Z_Registration_Info_UClass_UDQSAction_AddTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSAction_AddTag), 2107350363U) },
		{ Z_Construct_UClass_UDQSAction_RemoveTag, UDQSAction_RemoveTag::StaticClass, TEXT("UDQSAction_RemoveTag"), &Z_Registration_Info_UClass_UDQSAction_RemoveTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSAction_RemoveTag), 167272658U) },
		{ Z_Construct_UClass_UDQSAction_TriggerDialogueEvent, UDQSAction_TriggerDialogueEvent::StaticClass, TEXT("UDQSAction_TriggerDialogueEvent"), &Z_Registration_Info_UClass_UDQSAction_TriggerDialogueEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSAction_TriggerDialogueEvent), 2691739499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSAction_h__Script_DQSRuntime_1754113993(TEXT("/Script/DQSRuntime"),
	Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSAction_h__Script_DQSRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSAction_h__Script_DQSRuntime_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSAction_h__Script_DQSRuntime_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSAction_h__Script_DQSRuntime_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
