// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSDialogueParticipantComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSDialogueParticipantComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogueGraphAsset_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSDialogueParticipantComponent();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSDialogueParticipantComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DQSRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDQSDialogueParticipantComponent Function ResolveContext *****************
struct Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext_Statics
{
	struct DQSDialogueParticipantComponent_eventResolveContext_Parms
	{
		UObject* OverrideContext;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueParticipantComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext_Statics::NewProp_OverrideContext = { "OverrideContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueParticipantComponent_eventResolveContext_Parms, OverrideContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueParticipantComponent_eventResolveContext_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext_Statics::NewProp_OverrideContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueParticipantComponent, nullptr, "ResolveContext", Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext_Statics::DQSDialogueParticipantComponent_eventResolveContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext_Statics::DQSDialogueParticipantComponent_eventResolveContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueParticipantComponent::execResolveContext)
{
	P_GET_OBJECT(UObject,Z_Param_OverrideContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->ResolveContext(Z_Param_OverrideContext);
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueParticipantComponent Function ResolveContext *******************

// ********** Begin Class UDQSDialogueParticipantComponent Function StartDialogue ******************
struct Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics
{
	struct DQSDialogueParticipantComponent_eventStartDialogue_Parms
	{
		UObject* WorldContextObject;
		UObject* OverrideContext;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueParticipantComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideContext;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueParticipantComponent_eventStartDialogue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::NewProp_OverrideContext = { "OverrideContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSDialogueParticipantComponent_eventStartDialogue_Parms, OverrideContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DQSDialogueParticipantComponent_eventStartDialogue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DQSDialogueParticipantComponent_eventStartDialogue_Parms), &Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::NewProp_OverrideContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSDialogueParticipantComponent, nullptr, "StartDialogue", Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::DQSDialogueParticipantComponent_eventStartDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::DQSDialogueParticipantComponent_eventStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSDialogueParticipantComponent::execStartDialogue)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UObject,Z_Param_OverrideContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartDialogue(Z_Param_WorldContextObject,Z_Param_OverrideContext);
	P_NATIVE_END;
}
// ********** End Class UDQSDialogueParticipantComponent Function StartDialogue ********************

// ********** Begin Class UDQSDialogueParticipantComponent *****************************************
void UDQSDialogueParticipantComponent::StaticRegisterNativesUDQSDialogueParticipantComponent()
{
	UClass* Class = UDQSDialogueParticipantComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResolveContext", &UDQSDialogueParticipantComponent::execResolveContext },
		{ "StartDialogue", &UDQSDialogueParticipantComponent::execStartDialogue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSDialogueParticipantComponent;
UClass* UDQSDialogueParticipantComponent::GetPrivateStaticClass()
{
	using TClass = UDQSDialogueParticipantComponent;
	if (!Z_Registration_Info_UClass_UDQSDialogueParticipantComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSDialogueParticipantComponent"),
			Z_Registration_Info_UClass_UDQSDialogueParticipantComponent.InnerSingleton,
			StaticRegisterNativesUDQSDialogueParticipantComponent,
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
	return Z_Registration_Info_UClass_UDQSDialogueParticipantComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSDialogueParticipantComponent_NoRegister()
{
	return UDQSDialogueParticipantComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "DialogQuestSystem" },
		{ "IncludePath", "DQSDialogueParticipantComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DQSDialogueParticipantComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueAsset_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueParticipantComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseOwnerAsContext_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueParticipantComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueAsset;
	static void NewProp_bUseOwnerAsContext_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOwnerAsContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDQSDialogueParticipantComponent_ResolveContext, "ResolveContext" }, // 1170048194
		{ &Z_Construct_UFunction_UDQSDialogueParticipantComponent_StartDialogue, "StartDialogue" }, // 1437501142
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSDialogueParticipantComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::NewProp_DialogueAsset = { "DialogueAsset", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDialogueParticipantComponent, DialogueAsset), Z_Construct_UClass_UDialogueGraphAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueAsset_MetaData), NewProp_DialogueAsset_MetaData) };
void Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::NewProp_bUseOwnerAsContext_SetBit(void* Obj)
{
	((UDQSDialogueParticipantComponent*)Obj)->bUseOwnerAsContext = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::NewProp_bUseOwnerAsContext = { "bUseOwnerAsContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDQSDialogueParticipantComponent), &Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::NewProp_bUseOwnerAsContext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseOwnerAsContext_MetaData), NewProp_bUseOwnerAsContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::NewProp_DialogueAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::NewProp_bUseOwnerAsContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::ClassParams = {
	&UDQSDialogueParticipantComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSDialogueParticipantComponent()
{
	if (!Z_Registration_Info_UClass_UDQSDialogueParticipantComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSDialogueParticipantComponent.OuterSingleton, Z_Construct_UClass_UDQSDialogueParticipantComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSDialogueParticipantComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSDialogueParticipantComponent);
UDQSDialogueParticipantComponent::~UDQSDialogueParticipantComponent() {}
// ********** End Class UDQSDialogueParticipantComponent *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSDialogueParticipantComponent_h__Script_DQSRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSDialogueParticipantComponent, UDQSDialogueParticipantComponent::StaticClass, TEXT("UDQSDialogueParticipantComponent"), &Z_Registration_Info_UClass_UDQSDialogueParticipantComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSDialogueParticipantComponent), 2040955579U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSDialogueParticipantComponent_h__Script_DQSRuntime_654956223(TEXT("/Script/DQSRuntime"),
	Z_CompiledInDeferFile_FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSDialogueParticipantComponent_h__Script_DQSRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSDialogueParticipantComponent_h__Script_DQSRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
