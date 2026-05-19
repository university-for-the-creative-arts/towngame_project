// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSInterfaces.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSInterfaces() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogueGraphAsset_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSDialogueEventReceiverInterface();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSDialogueEventReceiverInterface_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSDialogueProviderInterface();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSDialogueProviderInterface_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSEventSourceInterface();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSEventSourceInterface_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DQSRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UDQSDialogueProviderInterface Function GetDialogueAsset **************
struct DQSDialogueProviderInterface_eventGetDialogueAsset_Parms
{
	UDialogueGraphAsset* ReturnValue;

	/** Constructor, initializes return property only **/
	DQSDialogueProviderInterface_eventGetDialogueAsset_Parms()
		: ReturnValue(NULL)
	{
	}
};
UDialogueGraphAsset* IDQSDialogueProviderInterface::GetDialogueAsset() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueAsset instead.");
	DQSDialogueProviderInterface_eventGetDialogueAsset_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDQSDialogueProviderInterface_GetDialogueAsset = FName(TEXT("GetDialogueAsset"));
UDialogueGraphAsset* IDQSDialogueProviderInterface::Execute_GetDialogueAsset(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDQSDialogueProviderInterface::StaticClass()));
	DQSDialogueProviderInterface_eventGetDialogueAsset_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDQSDialogueProviderInterface_GetDialogueAsset);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDQSDialogueProviderInterface*)(O->GetNativeInterfaceAddress(UDQSDialogueProviderInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueAsset_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDQSDialogueProviderInterface_GetDialogueAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSInterfaces.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSDialogueProviderInterface_GetDialogueAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueProviderInterface_eventGetDialogueAsset_Parms, ReturnValue), Z_Construct_UClass_UDialogueGraphAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueProviderInterface_GetDialogueAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueProviderInterface_GetDialogueAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueProviderInterface_GetDialogueAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueProviderInterface_GetDialogueAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueProviderInterface, nullptr, "GetDialogueAsset", Z_Construct_UFunction_UDQSDialogueProviderInterface_GetDialogueAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueProviderInterface_GetDialogueAsset_Statics::PropPointers), sizeof(DQSDialogueProviderInterface_eventGetDialogueAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueProviderInterface_GetDialogueAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueProviderInterface_GetDialogueAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DQSDialogueProviderInterface_eventGetDialogueAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueProviderInterface_GetDialogueAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueProviderInterface_GetDialogueAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDQSDialogueProviderInterface::execGetDialogueAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogueGraphAsset**)Z_Param__Result=P_THIS->GetDialogueAsset_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDQSDialogueProviderInterface Function GetDialogueAsset ****************

// ********** Begin Interface UDQSDialogueProviderInterface ****************************************
void UDQSDialogueProviderInterface::StaticRegisterNativesUDQSDialogueProviderInterface()
{
	UClass* Class = UDQSDialogueProviderInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDialogueAsset", &IDQSDialogueProviderInterface::execGetDialogueAsset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSDialogueProviderInterface;
UClass* UDQSDialogueProviderInterface::GetPrivateStaticClass()
{
	using TClass = UDQSDialogueProviderInterface;
	if (!Z_Registration_Info_UClass_UDQSDialogueProviderInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSDialogueProviderInterface"),
			Z_Registration_Info_UClass_UDQSDialogueProviderInterface.InnerSingleton,
			StaticRegisterNativesUDQSDialogueProviderInterface,
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
	return Z_Registration_Info_UClass_UDQSDialogueProviderInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSDialogueProviderInterface_NoRegister()
{
	return UDQSDialogueProviderInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSDialogueProviderInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSInterfaces.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDQSDialogueProviderInterface_GetDialogueAsset, "GetDialogueAsset" }, // 3665689807
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDQSDialogueProviderInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDQSDialogueProviderInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueProviderInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSDialogueProviderInterface_Statics::ClassParams = {
	&UDQSDialogueProviderInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueProviderInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSDialogueProviderInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSDialogueProviderInterface()
{
	if (!Z_Registration_Info_UClass_UDQSDialogueProviderInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSDialogueProviderInterface.OuterSingleton, Z_Construct_UClass_UDQSDialogueProviderInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSDialogueProviderInterface.OuterSingleton;
}
UDQSDialogueProviderInterface::UDQSDialogueProviderInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSDialogueProviderInterface);
// ********** End Interface UDQSDialogueProviderInterface ******************************************

// ********** Begin Interface UDQSEventSourceInterface Function GetDialogQuestEventDelta ***********
struct DQSEventSourceInterface_eventGetDialogQuestEventDelta_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	DQSEventSourceInterface_eventGetDialogQuestEventDelta_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IDQSEventSourceInterface::GetDialogQuestEventDelta() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogQuestEventDelta instead.");
	DQSEventSourceInterface_eventGetDialogQuestEventDelta_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDQSEventSourceInterface_GetDialogQuestEventDelta = FName(TEXT("GetDialogQuestEventDelta"));
int32 IDQSEventSourceInterface::Execute_GetDialogQuestEventDelta(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDQSEventSourceInterface::StaticClass()));
	DQSEventSourceInterface_eventGetDialogQuestEventDelta_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDQSEventSourceInterface_GetDialogQuestEventDelta);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDQSEventSourceInterface*)(O->GetNativeInterfaceAddress(UDQSEventSourceInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogQuestEventDelta_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventDelta_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSInterfaces.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSEventSourceInterface_eventGetDialogQuestEventDelta_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventDelta_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventDelta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventDelta_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSEventSourceInterface, nullptr, "GetDialogQuestEventDelta", Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventDelta_Statics::PropPointers), sizeof(DQSEventSourceInterface_eventGetDialogQuestEventDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventDelta_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DQSEventSourceInterface_eventGetDialogQuestEventDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventDelta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventDelta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDQSEventSourceInterface::execGetDialogQuestEventDelta)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDialogQuestEventDelta_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDQSEventSourceInterface Function GetDialogQuestEventDelta *************

// ********** Begin Interface UDQSEventSourceInterface Function GetDialogQuestEventTag *************
struct DQSEventSourceInterface_eventGetDialogQuestEventTag_Parms
{
	FGameplayTag ReturnValue;
};
FGameplayTag IDQSEventSourceInterface::GetDialogQuestEventTag() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogQuestEventTag instead.");
	DQSEventSourceInterface_eventGetDialogQuestEventTag_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UDQSEventSourceInterface_GetDialogQuestEventTag = FName(TEXT("GetDialogQuestEventTag"));
FGameplayTag IDQSEventSourceInterface::Execute_GetDialogQuestEventTag(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDQSEventSourceInterface::StaticClass()));
	DQSEventSourceInterface_eventGetDialogQuestEventTag_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDQSEventSourceInterface_GetDialogQuestEventTag);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IDQSEventSourceInterface*)(O->GetNativeInterfaceAddress(UDQSEventSourceInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogQuestEventTag_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSInterfaces.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSEventSourceInterface_eventGetDialogQuestEventTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSEventSourceInterface, nullptr, "GetDialogQuestEventTag", Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventTag_Statics::PropPointers), sizeof(DQSEventSourceInterface_eventGetDialogQuestEventTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DQSEventSourceInterface_eventGetDialogQuestEventTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDQSEventSourceInterface::execGetDialogQuestEventTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetDialogQuestEventTag_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UDQSEventSourceInterface Function GetDialogQuestEventTag ***************

// ********** Begin Interface UDQSEventSourceInterface *********************************************
void UDQSEventSourceInterface::StaticRegisterNativesUDQSEventSourceInterface()
{
	UClass* Class = UDQSEventSourceInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDialogQuestEventDelta", &IDQSEventSourceInterface::execGetDialogQuestEventDelta },
		{ "GetDialogQuestEventTag", &IDQSEventSourceInterface::execGetDialogQuestEventTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSEventSourceInterface;
UClass* UDQSEventSourceInterface::GetPrivateStaticClass()
{
	using TClass = UDQSEventSourceInterface;
	if (!Z_Registration_Info_UClass_UDQSEventSourceInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSEventSourceInterface"),
			Z_Registration_Info_UClass_UDQSEventSourceInterface.InnerSingleton,
			StaticRegisterNativesUDQSEventSourceInterface,
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
	return Z_Registration_Info_UClass_UDQSEventSourceInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSEventSourceInterface_NoRegister()
{
	return UDQSEventSourceInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSEventSourceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSInterfaces.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventDelta, "GetDialogQuestEventDelta" }, // 1402889958
		{ &Z_Construct_UFunction_UDQSEventSourceInterface_GetDialogQuestEventTag, "GetDialogQuestEventTag" }, // 2552359302
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDQSEventSourceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDQSEventSourceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSEventSourceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSEventSourceInterface_Statics::ClassParams = {
	&UDQSEventSourceInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSEventSourceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSEventSourceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSEventSourceInterface()
{
	if (!Z_Registration_Info_UClass_UDQSEventSourceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSEventSourceInterface.OuterSingleton, Z_Construct_UClass_UDQSEventSourceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSEventSourceInterface.OuterSingleton;
}
UDQSEventSourceInterface::UDQSEventSourceInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSEventSourceInterface);
// ********** End Interface UDQSEventSourceInterface ***********************************************

// ********** Begin Interface UDQSDialogueEventReceiverInterface Function ReceiveDQSDialogueEvent **
struct DQSDialogueEventReceiverInterface_eventReceiveDQSDialogueEvent_Parms
{
	FGameplayTag EventTag;
	FName EventName;
	UObject* Context;
};
void IDQSDialogueEventReceiverInterface::ReceiveDQSDialogueEvent(FGameplayTag EventTag, FName EventName, UObject* Context)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ReceiveDQSDialogueEvent instead.");
}
static FName NAME_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent = FName(TEXT("ReceiveDQSDialogueEvent"));
void IDQSDialogueEventReceiverInterface::Execute_ReceiveDQSDialogueEvent(UObject* O, FGameplayTag EventTag, FName EventName, UObject* Context)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDQSDialogueEventReceiverInterface::StaticClass()));
	DQSDialogueEventReceiverInterface_eventReceiveDQSDialogueEvent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent);
	if (Func)
	{
		Parms.EventTag=EventTag;
		Parms.EventName=EventName;
		Parms.Context=Context;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IDQSDialogueEventReceiverInterface*)(O->GetNativeInterfaceAddress(UDQSDialogueEventReceiverInterface::StaticClass())))
	{
		I->ReceiveDQSDialogueEvent_Implementation(EventTag,EventName,Context);
	}
}
struct Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSInterfaces.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueEventReceiverInterface_eventReceiveDQSDialogueEvent_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueEventReceiverInterface_eventReceiveDQSDialogueEvent_Parms, EventName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueEventReceiverInterface_eventReceiveDQSDialogueEvent_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueEventReceiverInterface, nullptr, "ReceiveDQSDialogueEvent", Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent_Statics::PropPointers), sizeof(DQSDialogueEventReceiverInterface_eventReceiveDQSDialogueEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DQSDialogueEventReceiverInterface_eventReceiveDQSDialogueEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IDQSDialogueEventReceiverInterface::execReceiveDQSDialogueEvent)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveDQSDialogueEvent_Implementation(Z_Param_EventTag,Z_Param_EventName,Z_Param_Context);
	P_NATIVE_END;
}
// ********** End Interface UDQSDialogueEventReceiverInterface Function ReceiveDQSDialogueEvent ****

// ********** Begin Interface UDQSDialogueEventReceiverInterface ***********************************
void UDQSDialogueEventReceiverInterface::StaticRegisterNativesUDQSDialogueEventReceiverInterface()
{
	UClass* Class = UDQSDialogueEventReceiverInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReceiveDQSDialogueEvent", &IDQSDialogueEventReceiverInterface::execReceiveDQSDialogueEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSDialogueEventReceiverInterface;
UClass* UDQSDialogueEventReceiverInterface::GetPrivateStaticClass()
{
	using TClass = UDQSDialogueEventReceiverInterface;
	if (!Z_Registration_Info_UClass_UDQSDialogueEventReceiverInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSDialogueEventReceiverInterface"),
			Z_Registration_Info_UClass_UDQSDialogueEventReceiverInterface.InnerSingleton,
			StaticRegisterNativesUDQSDialogueEventReceiverInterface,
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
	return Z_Registration_Info_UClass_UDQSDialogueEventReceiverInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSDialogueEventReceiverInterface_NoRegister()
{
	return UDQSDialogueEventReceiverInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSDialogueEventReceiverInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSInterfaces.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDQSDialogueEventReceiverInterface_ReceiveDQSDialogueEvent, "ReceiveDQSDialogueEvent" }, // 2735933147
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDQSDialogueEventReceiverInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDQSDialogueEventReceiverInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueEventReceiverInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSDialogueEventReceiverInterface_Statics::ClassParams = {
	&UDQSDialogueEventReceiverInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueEventReceiverInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSDialogueEventReceiverInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSDialogueEventReceiverInterface()
{
	if (!Z_Registration_Info_UClass_UDQSDialogueEventReceiverInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSDialogueEventReceiverInterface.OuterSingleton, Z_Construct_UClass_UDQSDialogueEventReceiverInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSDialogueEventReceiverInterface.OuterSingleton;
}
UDQSDialogueEventReceiverInterface::UDQSDialogueEventReceiverInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSDialogueEventReceiverInterface);
// ********** End Interface UDQSDialogueEventReceiverInterface *************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h__Script_DQSRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSDialogueProviderInterface, UDQSDialogueProviderInterface::StaticClass, TEXT("UDQSDialogueProviderInterface"), &Z_Registration_Info_UClass_UDQSDialogueProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSDialogueProviderInterface), 3116118450U) },
		{ Z_Construct_UClass_UDQSEventSourceInterface, UDQSEventSourceInterface::StaticClass, TEXT("UDQSEventSourceInterface"), &Z_Registration_Info_UClass_UDQSEventSourceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSEventSourceInterface), 1585463467U) },
		{ Z_Construct_UClass_UDQSDialogueEventReceiverInterface, UDQSDialogueEventReceiverInterface::StaticClass, TEXT("UDQSDialogueEventReceiverInterface"), &Z_Registration_Info_UClass_UDQSDialogueEventReceiverInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSDialogueEventReceiverInterface), 2922171534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h__Script_DQSRuntime_3067076714(TEXT("/Script/DQSRuntime"),
	Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h__Script_DQSRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h__Script_DQSRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
