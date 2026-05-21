// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSBlueprintLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogQuestSubsystem_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogueGraphAsset_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSBlueprintLibrary();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSBlueprintLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_DQSRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDQSBlueprintLibrary Function GetDialogQuestSubsystem ********************
struct Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem_Statics
{
	struct DQSBlueprintLibrary_eventGetDialogQuestSubsystem_Parms
	{
		UObject* WorldContextObject;
		UDialogQuestSubsystem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSBlueprintLibrary_eventGetDialogQuestSubsystem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSBlueprintLibrary_eventGetDialogQuestSubsystem_Parms, ReturnValue), Z_Construct_UClass_UDialogQuestSubsystem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSBlueprintLibrary, nullptr, "GetDialogQuestSubsystem", Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem_Statics::DQSBlueprintLibrary_eventGetDialogQuestSubsystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem_Statics::DQSBlueprintLibrary_eventGetDialogQuestSubsystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSBlueprintLibrary::execGetDialogQuestSubsystem)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogQuestSubsystem**)Z_Param__Result=UDQSBlueprintLibrary::GetDialogQuestSubsystem(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// ********** End Class UDQSBlueprintLibrary Function GetDialogQuestSubsystem **********************

// ********** Begin Class UDQSBlueprintLibrary Function ResolveDialogueFromProvider ****************
struct Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider_Statics
{
	struct DQSBlueprintLibrary_eventResolveDialogueFromProvider_Parms
	{
		UObject* DialogueProvider;
		UDialogueGraphAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueProvider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider_Statics::NewProp_DialogueProvider = { "DialogueProvider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSBlueprintLibrary_eventResolveDialogueFromProvider_Parms, DialogueProvider), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSBlueprintLibrary_eventResolveDialogueFromProvider_Parms, ReturnValue), Z_Construct_UClass_UDialogueGraphAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider_Statics::NewProp_DialogueProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSBlueprintLibrary, nullptr, "ResolveDialogueFromProvider", Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider_Statics::DQSBlueprintLibrary_eventResolveDialogueFromProvider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider_Statics::DQSBlueprintLibrary_eventResolveDialogueFromProvider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSBlueprintLibrary::execResolveDialogueFromProvider)
{
	P_GET_OBJECT(UObject,Z_Param_DialogueProvider);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDialogueGraphAsset**)Z_Param__Result=UDQSBlueprintLibrary::ResolveDialogueFromProvider(Z_Param_DialogueProvider);
	P_NATIVE_END;
}
// ********** End Class UDQSBlueprintLibrary Function ResolveDialogueFromProvider ******************

// ********** Begin Class UDQSBlueprintLibrary Function StartDialogueFromProvider ******************
struct Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics
{
	struct DQSBlueprintLibrary_eventStartDialogueFromProvider_Parms
	{
		UObject* WorldContextObject;
		UObject* DialogueProvider;
		UObject* Context;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueProvider;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSBlueprintLibrary_eventStartDialogueFromProvider_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::NewProp_DialogueProvider = { "DialogueProvider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSBlueprintLibrary_eventStartDialogueFromProvider_Parms, DialogueProvider), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSBlueprintLibrary_eventStartDialogueFromProvider_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DQSBlueprintLibrary_eventStartDialogueFromProvider_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DQSBlueprintLibrary_eventStartDialogueFromProvider_Parms), &Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::NewProp_DialogueProvider,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSBlueprintLibrary, nullptr, "StartDialogueFromProvider", Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::DQSBlueprintLibrary_eventStartDialogueFromProvider_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::DQSBlueprintLibrary_eventStartDialogueFromProvider_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSBlueprintLibrary::execStartDialogueFromProvider)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UObject,Z_Param_DialogueProvider);
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDQSBlueprintLibrary::StartDialogueFromProvider(Z_Param_WorldContextObject,Z_Param_DialogueProvider,Z_Param_Context);
	P_NATIVE_END;
}
// ********** End Class UDQSBlueprintLibrary Function StartDialogueFromProvider ********************

// ********** Begin Class UDQSBlueprintLibrary *****************************************************
void UDQSBlueprintLibrary::StaticRegisterNativesUDQSBlueprintLibrary()
{
	UClass* Class = UDQSBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDialogQuestSubsystem", &UDQSBlueprintLibrary::execGetDialogQuestSubsystem },
		{ "ResolveDialogueFromProvider", &UDQSBlueprintLibrary::execResolveDialogueFromProvider },
		{ "StartDialogueFromProvider", &UDQSBlueprintLibrary::execStartDialogueFromProvider },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSBlueprintLibrary;
UClass* UDQSBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UDQSBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UDQSBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSBlueprintLibrary"),
			Z_Registration_Info_UClass_UDQSBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUDQSBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UDQSBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSBlueprintLibrary_NoRegister()
{
	return UDQSBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DQSBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/DQSBlueprintLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDQSBlueprintLibrary_GetDialogQuestSubsystem, "GetDialogQuestSubsystem" }, // 1722386026
		{ &Z_Construct_UFunction_UDQSBlueprintLibrary_ResolveDialogueFromProvider, "ResolveDialogueFromProvider" }, // 2077654751
		{ &Z_Construct_UFunction_UDQSBlueprintLibrary_StartDialogueFromProvider, "StartDialogueFromProvider" }, // 3325790533
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDQSBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSBlueprintLibrary_Statics::ClassParams = {
	&UDQSBlueprintLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UDQSBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UDQSBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSBlueprintLibrary.OuterSingleton;
}
UDQSBlueprintLibrary::UDQSBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSBlueprintLibrary);
UDQSBlueprintLibrary::~UDQSBlueprintLibrary() {}
// ********** End Class UDQSBlueprintLibrary *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSBlueprintLibrary_h__Script_DQSRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSBlueprintLibrary, UDQSBlueprintLibrary::StaticClass, TEXT("UDQSBlueprintLibrary"), &Z_Registration_Info_UClass_UDQSBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSBlueprintLibrary), 399095107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSBlueprintLibrary_h__Script_DQSRuntime_2890298438(TEXT("/Script/DQSRuntime"),
	Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSBlueprintLibrary_h__Script_DQSRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSBlueprintLibrary_h__Script_DQSRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
