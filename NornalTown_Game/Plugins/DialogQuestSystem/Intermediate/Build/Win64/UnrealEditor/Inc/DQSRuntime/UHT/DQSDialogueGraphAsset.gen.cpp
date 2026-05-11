// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSDialogueGraphAsset.h"
#include "DQSTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSDialogueGraphAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogueGraphAsset();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogueGraphAsset_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSSpeakerStyleAsset_NoRegister();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSDialogueNode();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSGraphMetadata();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSSpeakerDefinition();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_DQSRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDialogueGraphAsset Function ResolveSpeakerName **************************
struct Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName_Statics
{
	struct DialogueGraphAsset_eventResolveSpeakerName_Parms
	{
		FName SpeakerId;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueGraphAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName_Statics::NewProp_SpeakerId = { "SpeakerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueGraphAsset_eventResolveSpeakerName_Parms, SpeakerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueGraphAsset_eventResolveSpeakerName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName_Statics::NewProp_SpeakerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueGraphAsset, nullptr, "ResolveSpeakerName", Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName_Statics::DialogueGraphAsset_eventResolveSpeakerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName_Statics::DialogueGraphAsset_eventResolveSpeakerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueGraphAsset::execResolveSpeakerName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SpeakerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->ResolveSpeakerName(Z_Param_SpeakerId);
	P_NATIVE_END;
}
// ********** End Class UDialogueGraphAsset Function ResolveSpeakerName ****************************

// ********** Begin Class UDialogueGraphAsset Function ResolveSpeakerPortrait **********************
struct Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait_Statics
{
	struct DialogueGraphAsset_eventResolveSpeakerPortrait_Parms
	{
		FName SpeakerId;
		TSoftObjectPtr<UTexture2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueGraphAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerId;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait_Statics::NewProp_SpeakerId = { "SpeakerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueGraphAsset_eventResolveSpeakerPortrait_Parms, SpeakerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueGraphAsset_eventResolveSpeakerPortrait_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait_Statics::NewProp_SpeakerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueGraphAsset, nullptr, "ResolveSpeakerPortrait", Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait_Statics::DialogueGraphAsset_eventResolveSpeakerPortrait_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait_Statics::DialogueGraphAsset_eventResolveSpeakerPortrait_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueGraphAsset::execResolveSpeakerPortrait)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SpeakerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UTexture2D>*)Z_Param__Result=P_THIS->ResolveSpeakerPortrait(Z_Param_SpeakerId);
	P_NATIVE_END;
}
// ********** End Class UDialogueGraphAsset Function ResolveSpeakerPortrait ************************

// ********** Begin Class UDialogueGraphAsset Function ResolveSpeakerStyle *************************
struct Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle_Statics
{
	struct DialogueGraphAsset_eventResolveSpeakerStyle_Parms
	{
		FName SpeakerId;
		TSoftObjectPtr<UDQSSpeakerStyleAsset> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueGraphAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerId;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle_Statics::NewProp_SpeakerId = { "SpeakerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueGraphAsset_eventResolveSpeakerStyle_Parms, SpeakerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueGraphAsset_eventResolveSpeakerStyle_Parms, ReturnValue), Z_Construct_UClass_UDQSSpeakerStyleAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle_Statics::NewProp_SpeakerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogueGraphAsset, nullptr, "ResolveSpeakerStyle", Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle_Statics::DialogueGraphAsset_eventResolveSpeakerStyle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle_Statics::DialogueGraphAsset_eventResolveSpeakerStyle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogueGraphAsset::execResolveSpeakerStyle)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SpeakerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UDQSSpeakerStyleAsset>*)Z_Param__Result=P_THIS->ResolveSpeakerStyle(Z_Param_SpeakerId);
	P_NATIVE_END;
}
// ********** End Class UDialogueGraphAsset Function ResolveSpeakerStyle ***************************

// ********** Begin Class UDialogueGraphAsset ******************************************************
void UDialogueGraphAsset::StaticRegisterNativesUDialogueGraphAsset()
{
	UClass* Class = UDialogueGraphAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResolveSpeakerName", &UDialogueGraphAsset::execResolveSpeakerName },
		{ "ResolveSpeakerPortrait", &UDialogueGraphAsset::execResolveSpeakerPortrait },
		{ "ResolveSpeakerStyle", &UDialogueGraphAsset::execResolveSpeakerStyle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueGraphAsset;
UClass* UDialogueGraphAsset::GetPrivateStaticClass()
{
	using TClass = UDialogueGraphAsset;
	if (!Z_Registration_Info_UClass_UDialogueGraphAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DialogueGraphAsset"),
			Z_Registration_Info_UClass_UDialogueGraphAsset.InnerSingleton,
			StaticRegisterNativesUDialogueGraphAsset,
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
	return Z_Registration_Info_UClass_UDialogueGraphAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UDialogueGraphAsset_NoRegister()
{
	return UDialogueGraphAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDialogueGraphAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSDialogueGraphAsset.h" },
		{ "ModuleRelativePath", "Public/DQSDialogueGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speakers_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryNodeId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowResume_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSDialogueGraphAsset.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/DQSDialogueGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSimpleEditorMode_MetaData[] = {
		{ "Category", "Dialog Quest System|Editor" },
		{ "ModuleRelativePath", "Public/DQSDialogueGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowGuidedHelp_MetaData[] = {
		{ "Category", "Dialog Quest System|Editor" },
		{ "ModuleRelativePath", "Public/DQSDialogueGraphAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Speakers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Speakers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryNodeId;
	static void NewProp_bAllowResume_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowResume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorGraph;
	static void NewProp_bUseSimpleEditorMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSimpleEditorMode;
	static void NewProp_bShowGuidedHelp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGuidedHelp;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerName, "ResolveSpeakerName" }, // 1409647404
		{ &Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerPortrait, "ResolveSpeakerPortrait" }, // 1135409892
		{ &Z_Construct_UFunction_UDialogueGraphAsset_ResolveSpeakerStyle, "ResolveSpeakerStyle" }, // 1834032524
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueGraphAsset, Metadata), Z_Construct_UScriptStruct_FDQSGraphMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) }; // 1763288121
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_Speakers_Inner = { "Speakers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDQSSpeakerDefinition, METADATA_PARAMS(0, nullptr) }; // 3042381743
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_Speakers = { "Speakers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueGraphAsset, Speakers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speakers_MetaData), NewProp_Speakers_MetaData) }; // 3042381743
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_EntryNodeId = { "EntryNodeId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueGraphAsset, EntryNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryNodeId_MetaData), NewProp_EntryNodeId_MetaData) };
void Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_bAllowResume_SetBit(void* Obj)
{
	((UDialogueGraphAsset*)Obj)->bAllowResume = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_bAllowResume = { "bAllowResume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogueGraphAsset), &Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_bAllowResume_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowResume_MetaData), NewProp_bAllowResume_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDQSDialogueNode, METADATA_PARAMS(0, nullptr) }; // 3916723728
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueGraphAsset, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) }; // 3916723728
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_EditorGraph = { "EditorGraph", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueGraphAsset, EditorGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorGraph_MetaData), NewProp_EditorGraph_MetaData) };
void Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_bUseSimpleEditorMode_SetBit(void* Obj)
{
	((UDialogueGraphAsset*)Obj)->bUseSimpleEditorMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_bUseSimpleEditorMode = { "bUseSimpleEditorMode", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogueGraphAsset), &Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_bUseSimpleEditorMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSimpleEditorMode_MetaData), NewProp_bUseSimpleEditorMode_MetaData) };
void Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_bShowGuidedHelp_SetBit(void* Obj)
{
	((UDialogueGraphAsset*)Obj)->bShowGuidedHelp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_bShowGuidedHelp = { "bShowGuidedHelp", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogueGraphAsset), &Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_bShowGuidedHelp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowGuidedHelp_MetaData), NewProp_bShowGuidedHelp_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueGraphAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_Speakers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_Speakers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_EntryNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_bAllowResume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_Nodes,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_EditorGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_bUseSimpleEditorMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueGraphAsset_Statics::NewProp_bShowGuidedHelp,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogueGraphAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraphAsset_Statics::ClassParams = {
	&UDialogueGraphAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogueGraphAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphAsset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueGraphAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueGraphAsset()
{
	if (!Z_Registration_Info_UClass_UDialogueGraphAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraphAsset.OuterSingleton, Z_Construct_UClass_UDialogueGraphAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueGraphAsset.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraphAsset);
UDialogueGraphAsset::~UDialogueGraphAsset() {}
// ********** End Class UDialogueGraphAsset ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSDialogueGraphAsset_h__Script_DQSRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraphAsset, UDialogueGraphAsset::StaticClass, TEXT("UDialogueGraphAsset"), &Z_Registration_Info_UClass_UDialogueGraphAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraphAsset), 855907211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSDialogueGraphAsset_h__Script_DQSRuntime_3404936833(TEXT("/Script/DQSRuntime"),
	Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSDialogueGraphAsset_h__Script_DQSRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSDialogueGraphAsset_h__Script_DQSRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
