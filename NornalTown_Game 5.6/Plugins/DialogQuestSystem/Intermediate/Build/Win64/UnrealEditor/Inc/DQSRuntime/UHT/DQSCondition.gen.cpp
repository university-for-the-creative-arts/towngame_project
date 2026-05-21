// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSCondition.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSCondition() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogQuestSubsystem_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_BoolVariable();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_BoolVariable_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_HasTag();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_HasTag_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_IntVariable();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_IntVariable_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_QuestStatus();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_QuestStatus_NoRegister();
DQSRUNTIME_API UEnum* Z_Construct_UEnum_DQSRuntime_EDQSIntComparisonOperation();
DQSRUNTIME_API UEnum* Z_Construct_UEnum_DQSRuntime_EDQSQuestStatus();
DQSRUNTIME_API UEnum* Z_Construct_UEnum_DQSRuntime_EDQSStateScope();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DQSRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EDQSIntComparisonOperation ************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDQSIntComparisonOperation;
static UEnum* EDQSIntComparisonOperation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDQSIntComparisonOperation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDQSIntComparisonOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DQSRuntime_EDQSIntComparisonOperation, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("EDQSIntComparisonOperation"));
	}
	return Z_Registration_Info_UEnum_EDQSIntComparisonOperation.OuterSingleton;
}
template<> DQSRUNTIME_API UEnum* StaticEnum<EDQSIntComparisonOperation>()
{
	return EDQSIntComparisonOperation_StaticEnum();
}
struct Z_Construct_UEnum_DQSRuntime_EDQSIntComparisonOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Equal.Name", "EDQSIntComparisonOperation::Equal" },
		{ "Greater.Name", "EDQSIntComparisonOperation::Greater" },
		{ "GreaterOrEqual.Name", "EDQSIntComparisonOperation::GreaterOrEqual" },
		{ "Less.Name", "EDQSIntComparisonOperation::Less" },
		{ "LessOrEqual.Name", "EDQSIntComparisonOperation::LessOrEqual" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
		{ "NotEqual.Name", "EDQSIntComparisonOperation::NotEqual" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDQSIntComparisonOperation::Equal", (int64)EDQSIntComparisonOperation::Equal },
		{ "EDQSIntComparisonOperation::NotEqual", (int64)EDQSIntComparisonOperation::NotEqual },
		{ "EDQSIntComparisonOperation::Greater", (int64)EDQSIntComparisonOperation::Greater },
		{ "EDQSIntComparisonOperation::GreaterOrEqual", (int64)EDQSIntComparisonOperation::GreaterOrEqual },
		{ "EDQSIntComparisonOperation::Less", (int64)EDQSIntComparisonOperation::Less },
		{ "EDQSIntComparisonOperation::LessOrEqual", (int64)EDQSIntComparisonOperation::LessOrEqual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DQSRuntime_EDQSIntComparisonOperation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	"EDQSIntComparisonOperation",
	"EDQSIntComparisonOperation",
	Z_Construct_UEnum_DQSRuntime_EDQSIntComparisonOperation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSIntComparisonOperation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSIntComparisonOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DQSRuntime_EDQSIntComparisonOperation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DQSRuntime_EDQSIntComparisonOperation()
{
	if (!Z_Registration_Info_UEnum_EDQSIntComparisonOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDQSIntComparisonOperation.InnerSingleton, Z_Construct_UEnum_DQSRuntime_EDQSIntComparisonOperation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDQSIntComparisonOperation.InnerSingleton;
}
// ********** End Enum EDQSIntComparisonOperation **************************************************

// ********** Begin Class UDQSCondition Function DescribeCondition *********************************
struct DQSCondition_eventDescribeCondition_Parms
{
	FText ReturnValue;
};
static FName NAME_UDQSCondition_DescribeCondition = FName(TEXT("DescribeCondition"));
FText UDQSCondition::DescribeCondition() const
{
	UFunction* Func = FindFunctionChecked(NAME_UDQSCondition_DescribeCondition);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DQSCondition_eventDescribeCondition_Parms Parms;
		const_cast<UDQSCondition*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UDQSCondition*>(this)->DescribeCondition_Implementation();
	}
}
struct Z_Construct_UFunction_UDQSCondition_DescribeCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDQSCondition_DescribeCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSCondition_eventDescribeCondition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSCondition_DescribeCondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSCondition_DescribeCondition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSCondition_DescribeCondition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSCondition_DescribeCondition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSCondition, nullptr, "DescribeCondition", Z_Construct_UFunction_UDQSCondition_DescribeCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSCondition_DescribeCondition_Statics::PropPointers), sizeof(DQSCondition_eventDescribeCondition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSCondition_DescribeCondition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSCondition_DescribeCondition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DQSCondition_eventDescribeCondition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSCondition_DescribeCondition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSCondition_DescribeCondition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSCondition::execDescribeCondition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->DescribeCondition_Implementation();
	P_NATIVE_END;
}
// ********** End Class UDQSCondition Function DescribeCondition ***********************************

// ********** Begin Class UDQSCondition Function Evaluate ******************************************
struct DQSCondition_eventEvaluate_Parms
{
	UDialogQuestSubsystem* Subsystem;
	UObject* Context;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DQSCondition_eventEvaluate_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UDQSCondition_Evaluate = FName(TEXT("Evaluate"));
bool UDQSCondition::Evaluate(UDialogQuestSubsystem* Subsystem, UObject* Context) const
{
	UFunction* Func = FindFunctionChecked(NAME_UDQSCondition_Evaluate);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		DQSCondition_eventEvaluate_Parms Parms;
		Parms.Subsystem=Subsystem;
		Parms.Context=Context;
		const_cast<UDQSCondition*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UDQSCondition*>(this)->Evaluate_Implementation(Subsystem, Context);
	}
}
struct Z_Construct_UFunction_UDQSCondition_Evaluate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Subsystem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::NewProp_Subsystem = { "Subsystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSCondition_eventEvaluate_Parms, Subsystem), Z_Construct_UClass_UDialogQuestSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSCondition_eventEvaluate_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DQSCondition_eventEvaluate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DQSCondition_eventEvaluate_Parms), &Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::NewProp_Subsystem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSCondition, nullptr, "Evaluate", Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::PropPointers), sizeof(DQSCondition_eventEvaluate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DQSCondition_eventEvaluate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSCondition_Evaluate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSCondition_Evaluate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSCondition::execEvaluate)
{
	P_GET_OBJECT(UDialogQuestSubsystem,Z_Param_Subsystem);
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Evaluate_Implementation(Z_Param_Subsystem,Z_Param_Context);
	P_NATIVE_END;
}
// ********** End Class UDQSCondition Function Evaluate ********************************************

// ********** Begin Class UDQSCondition ************************************************************
void UDQSCondition::StaticRegisterNativesUDQSCondition()
{
	UClass* Class = UDQSCondition::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DescribeCondition", &UDQSCondition::execDescribeCondition },
		{ "Evaluate", &UDQSCondition::execEvaluate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSCondition;
UClass* UDQSCondition::GetPrivateStaticClass()
{
	using TClass = UDQSCondition;
	if (!Z_Registration_Info_UClass_UDQSCondition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSCondition"),
			Z_Registration_Info_UClass_UDQSCondition.InnerSingleton,
			StaticRegisterNativesUDQSCondition,
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
	return Z_Registration_Info_UClass_UDQSCondition.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSCondition_NoRegister()
{
	return UDQSCondition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSCondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDQSCondition_DescribeCondition, "DescribeCondition" }, // 172545024
		{ &Z_Construct_UFunction_UDQSCondition_Evaluate, "Evaluate" }, // 956252107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSCondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDQSCondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSCondition_Statics::ClassParams = {
	&UDQSCondition::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSCondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSCondition()
{
	if (!Z_Registration_Info_UClass_UDQSCondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSCondition.OuterSingleton, Z_Construct_UClass_UDQSCondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSCondition.OuterSingleton;
}
UDQSCondition::UDQSCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSCondition);
UDQSCondition::~UDQSCondition() {}
// ********** End Class UDQSCondition **************************************************************

// ********** Begin Class UDQSCondition_HasTag *****************************************************
void UDQSCondition_HasTag::StaticRegisterNativesUDQSCondition_HasTag()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSCondition_HasTag;
UClass* UDQSCondition_HasTag::GetPrivateStaticClass()
{
	using TClass = UDQSCondition_HasTag;
	if (!Z_Registration_Info_UClass_UDQSCondition_HasTag.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSCondition_HasTag"),
			Z_Registration_Info_UClass_UDQSCondition_HasTag.InnerSingleton,
			StaticRegisterNativesUDQSCondition_HasTag,
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
	return Z_Registration_Info_UClass_UDQSCondition_HasTag.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSCondition_HasTag_NoRegister()
{
	return UDQSCondition_HasTag::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSCondition_HasTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSCondition.h" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertResult_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_bInvertResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSCondition_HasTag>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSCondition_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSCondition_HasTag, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
void Z_Construct_UClass_UDQSCondition_HasTag_Statics::NewProp_bInvertResult_SetBit(void* Obj)
{
	((UDQSCondition_HasTag*)Obj)->bInvertResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDQSCondition_HasTag_Statics::NewProp_bInvertResult = { "bInvertResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDQSCondition_HasTag), &Z_Construct_UClass_UDQSCondition_HasTag_Statics::NewProp_bInvertResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertResult_MetaData), NewProp_bInvertResult_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSCondition_HasTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_HasTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_HasTag_Statics::NewProp_bInvertResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_HasTag_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSCondition_HasTag_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDQSCondition,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_HasTag_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSCondition_HasTag_Statics::ClassParams = {
	&UDQSCondition_HasTag::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDQSCondition_HasTag_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_HasTag_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_HasTag_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSCondition_HasTag_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSCondition_HasTag()
{
	if (!Z_Registration_Info_UClass_UDQSCondition_HasTag.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSCondition_HasTag.OuterSingleton, Z_Construct_UClass_UDQSCondition_HasTag_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSCondition_HasTag.OuterSingleton;
}
UDQSCondition_HasTag::UDQSCondition_HasTag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSCondition_HasTag);
UDQSCondition_HasTag::~UDQSCondition_HasTag() {}
// ********** End Class UDQSCondition_HasTag *******************************************************

// ********** Begin Class UDQSCondition_BoolVariable ***********************************************
void UDQSCondition_BoolVariable::StaticRegisterNativesUDQSCondition_BoolVariable()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSCondition_BoolVariable;
UClass* UDQSCondition_BoolVariable::GetPrivateStaticClass()
{
	using TClass = UDQSCondition_BoolVariable;
	if (!Z_Registration_Info_UClass_UDQSCondition_BoolVariable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSCondition_BoolVariable"),
			Z_Registration_Info_UClass_UDQSCondition_BoolVariable.InnerSingleton,
			StaticRegisterNativesUDQSCondition_BoolVariable,
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
	return Z_Registration_Info_UClass_UDQSCondition_BoolVariable.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSCondition_BoolVariable_NoRegister()
{
	return UDQSCondition_BoolVariable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSCondition_BoolVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSCondition.h" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableKey_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scope_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScopedOwnerId_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "EditCondition", "Scope != EDQSStateScope::Global" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExpectedValue_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTreatMissingAsFalse_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Scope_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Scope;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScopedOwnerId;
	static void NewProp_bExpectedValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpectedValue;
	static void NewProp_bTreatMissingAsFalse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTreatMissingAsFalse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSCondition_BoolVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_VariableKey = { "VariableKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSCondition_BoolVariable, VariableKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableKey_MetaData), NewProp_VariableKey_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_Scope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_Scope = { "Scope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSCondition_BoolVariable, Scope), Z_Construct_UEnum_DQSRuntime_EDQSStateScope, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scope_MetaData), NewProp_Scope_MetaData) }; // 909860648
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_ScopedOwnerId = { "ScopedOwnerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSCondition_BoolVariable, ScopedOwnerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScopedOwnerId_MetaData), NewProp_ScopedOwnerId_MetaData) };
void Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_bExpectedValue_SetBit(void* Obj)
{
	((UDQSCondition_BoolVariable*)Obj)->bExpectedValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_bExpectedValue = { "bExpectedValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDQSCondition_BoolVariable), &Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_bExpectedValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExpectedValue_MetaData), NewProp_bExpectedValue_MetaData) };
void Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_bTreatMissingAsFalse_SetBit(void* Obj)
{
	((UDQSCondition_BoolVariable*)Obj)->bTreatMissingAsFalse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_bTreatMissingAsFalse = { "bTreatMissingAsFalse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDQSCondition_BoolVariable), &Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_bTreatMissingAsFalse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTreatMissingAsFalse_MetaData), NewProp_bTreatMissingAsFalse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_VariableKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_Scope_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_Scope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_ScopedOwnerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_bExpectedValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::NewProp_bTreatMissingAsFalse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDQSCondition,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::ClassParams = {
	&UDQSCondition_BoolVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSCondition_BoolVariable()
{
	if (!Z_Registration_Info_UClass_UDQSCondition_BoolVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSCondition_BoolVariable.OuterSingleton, Z_Construct_UClass_UDQSCondition_BoolVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSCondition_BoolVariable.OuterSingleton;
}
UDQSCondition_BoolVariable::UDQSCondition_BoolVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSCondition_BoolVariable);
UDQSCondition_BoolVariable::~UDQSCondition_BoolVariable() {}
// ********** End Class UDQSCondition_BoolVariable *************************************************

// ********** Begin Class UDQSCondition_IntVariable ************************************************
void UDQSCondition_IntVariable::StaticRegisterNativesUDQSCondition_IntVariable()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSCondition_IntVariable;
UClass* UDQSCondition_IntVariable::GetPrivateStaticClass()
{
	using TClass = UDQSCondition_IntVariable;
	if (!Z_Registration_Info_UClass_UDQSCondition_IntVariable.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSCondition_IntVariable"),
			Z_Registration_Info_UClass_UDQSCondition_IntVariable.InnerSingleton,
			StaticRegisterNativesUDQSCondition_IntVariable,
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
	return Z_Registration_Info_UClass_UDQSCondition_IntVariable.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSCondition_IntVariable_NoRegister()
{
	return UDQSCondition_IntVariable::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSCondition_IntVariable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSCondition.h" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableKey_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scope_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScopedOwnerId_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "EditCondition", "Scope != EDQSStateScope::Global" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompareValue_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTreatMissingAsZero_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableKey;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Scope_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Scope;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScopedOwnerId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompareValue;
	static void NewProp_bTreatMissingAsZero_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTreatMissingAsZero;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSCondition_IntVariable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_VariableKey = { "VariableKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSCondition_IntVariable, VariableKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableKey_MetaData), NewProp_VariableKey_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_Scope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_Scope = { "Scope", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSCondition_IntVariable, Scope), Z_Construct_UEnum_DQSRuntime_EDQSStateScope, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scope_MetaData), NewProp_Scope_MetaData) }; // 909860648
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_ScopedOwnerId = { "ScopedOwnerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSCondition_IntVariable, ScopedOwnerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScopedOwnerId_MetaData), NewProp_ScopedOwnerId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSCondition_IntVariable, Operation), Z_Construct_UEnum_DQSRuntime_EDQSIntComparisonOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 1114947690
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_CompareValue = { "CompareValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSCondition_IntVariable, CompareValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompareValue_MetaData), NewProp_CompareValue_MetaData) };
void Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_bTreatMissingAsZero_SetBit(void* Obj)
{
	((UDQSCondition_IntVariable*)Obj)->bTreatMissingAsZero = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_bTreatMissingAsZero = { "bTreatMissingAsZero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDQSCondition_IntVariable), &Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_bTreatMissingAsZero_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTreatMissingAsZero_MetaData), NewProp_bTreatMissingAsZero_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSCondition_IntVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_VariableKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_Scope_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_Scope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_ScopedOwnerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_CompareValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_IntVariable_Statics::NewProp_bTreatMissingAsZero,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_IntVariable_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSCondition_IntVariable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDQSCondition,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_IntVariable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSCondition_IntVariable_Statics::ClassParams = {
	&UDQSCondition_IntVariable::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDQSCondition_IntVariable_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_IntVariable_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_IntVariable_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSCondition_IntVariable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSCondition_IntVariable()
{
	if (!Z_Registration_Info_UClass_UDQSCondition_IntVariable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSCondition_IntVariable.OuterSingleton, Z_Construct_UClass_UDQSCondition_IntVariable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSCondition_IntVariable.OuterSingleton;
}
UDQSCondition_IntVariable::UDQSCondition_IntVariable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSCondition_IntVariable);
UDQSCondition_IntVariable::~UDQSCondition_IntVariable() {}
// ********** End Class UDQSCondition_IntVariable **************************************************

// ********** Begin Class UDQSCondition_QuestStatus ************************************************
void UDQSCondition_QuestStatus::StaticRegisterNativesUDQSCondition_QuestStatus()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSCondition_QuestStatus;
UClass* UDQSCondition_QuestStatus::GetPrivateStaticClass()
{
	using TClass = UDQSCondition_QuestStatus;
	if (!Z_Registration_Info_UClass_UDQSCondition_QuestStatus.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSCondition_QuestStatus"),
			Z_Registration_Info_UClass_UDQSCondition_QuestStatus.InnerSingleton,
			StaticRegisterNativesUDQSCondition_QuestStatus,
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
	return Z_Registration_Info_UClass_UDQSCondition_QuestStatus.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSCondition_QuestStatus_NoRegister()
{
	return UDQSCondition_QuestStatus::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSCondition_QuestStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSCondition.h" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestId_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequiredStatus_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertResult_MetaData[] = {
		{ "Category", "Dialog Quest System|Condition" },
		{ "ModuleRelativePath", "Public/DQSCondition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RequiredStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RequiredStatus;
	static void NewProp_bInvertResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSCondition_QuestStatus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSCondition_QuestStatus, QuestId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestId_MetaData), NewProp_QuestId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::NewProp_RequiredStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::NewProp_RequiredStatus = { "RequiredStatus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSCondition_QuestStatus, RequiredStatus), Z_Construct_UEnum_DQSRuntime_EDQSQuestStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequiredStatus_MetaData), NewProp_RequiredStatus_MetaData) }; // 1243048749
void Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::NewProp_bInvertResult_SetBit(void* Obj)
{
	((UDQSCondition_QuestStatus*)Obj)->bInvertResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::NewProp_bInvertResult = { "bInvertResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDQSCondition_QuestStatus), &Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::NewProp_bInvertResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertResult_MetaData), NewProp_bInvertResult_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::NewProp_RequiredStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::NewProp_RequiredStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::NewProp_bInvertResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDQSCondition,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::ClassParams = {
	&UDQSCondition_QuestStatus::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSCondition_QuestStatus()
{
	if (!Z_Registration_Info_UClass_UDQSCondition_QuestStatus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSCondition_QuestStatus.OuterSingleton, Z_Construct_UClass_UDQSCondition_QuestStatus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSCondition_QuestStatus.OuterSingleton;
}
UDQSCondition_QuestStatus::UDQSCondition_QuestStatus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSCondition_QuestStatus);
UDQSCondition_QuestStatus::~UDQSCondition_QuestStatus() {}
// ********** End Class UDQSCondition_QuestStatus **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h__Script_DQSRuntime_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDQSIntComparisonOperation_StaticEnum, TEXT("EDQSIntComparisonOperation"), &Z_Registration_Info_UEnum_EDQSIntComparisonOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1114947690U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSCondition, UDQSCondition::StaticClass, TEXT("UDQSCondition"), &Z_Registration_Info_UClass_UDQSCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSCondition), 2847073393U) },
		{ Z_Construct_UClass_UDQSCondition_HasTag, UDQSCondition_HasTag::StaticClass, TEXT("UDQSCondition_HasTag"), &Z_Registration_Info_UClass_UDQSCondition_HasTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSCondition_HasTag), 4102757712U) },
		{ Z_Construct_UClass_UDQSCondition_BoolVariable, UDQSCondition_BoolVariable::StaticClass, TEXT("UDQSCondition_BoolVariable"), &Z_Registration_Info_UClass_UDQSCondition_BoolVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSCondition_BoolVariable), 2543639223U) },
		{ Z_Construct_UClass_UDQSCondition_IntVariable, UDQSCondition_IntVariable::StaticClass, TEXT("UDQSCondition_IntVariable"), &Z_Registration_Info_UClass_UDQSCondition_IntVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSCondition_IntVariable), 3925435161U) },
		{ Z_Construct_UClass_UDQSCondition_QuestStatus, UDQSCondition_QuestStatus::StaticClass, TEXT("UDQSCondition_QuestStatus"), &Z_Registration_Info_UClass_UDQSCondition_QuestStatus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSCondition_QuestStatus), 478967201U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h__Script_DQSRuntime_634975560(TEXT("/Script/DQSRuntime"),
	Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h__Script_DQSRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h__Script_DQSRuntime_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h__Script_DQSRuntime_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h__Script_DQSRuntime_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
