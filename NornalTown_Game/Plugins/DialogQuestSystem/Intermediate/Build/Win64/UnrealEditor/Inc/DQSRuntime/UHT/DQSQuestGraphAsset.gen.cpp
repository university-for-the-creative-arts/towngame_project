// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSQuestGraphAsset.h"
#include "DQSTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSQuestGraphAsset() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DQSRUNTIME_API UClass* Z_Construct_UClass_UQuestGraphAsset();
DQSRUNTIME_API UClass* Z_Construct_UClass_UQuestGraphAsset_NoRegister();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSGraphMetadata();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSQuestNode();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
UPackage* Z_Construct_UPackage__Script_DQSRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UQuestGraphAsset *********************************************************
void UQuestGraphAsset::StaticRegisterNativesUQuestGraphAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQuestGraphAsset;
UClass* UQuestGraphAsset::GetPrivateStaticClass()
{
	using TClass = UQuestGraphAsset;
	if (!Z_Registration_Info_UClass_UQuestGraphAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QuestGraphAsset"),
			Z_Registration_Info_UClass_UQuestGraphAsset.InnerSingleton,
			StaticRegisterNativesUQuestGraphAsset,
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
	return Z_Registration_Info_UClass_UQuestGraphAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UQuestGraphAsset_NoRegister()
{
	return UQuestGraphAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQuestGraphAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSQuestGraphAsset.h" },
		{ "ModuleRelativePath", "Public/DQSQuestGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSQuestGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntryNodeId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSQuestGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSQuestGraphAsset.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/DQSQuestGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSimpleEditorMode_MetaData[] = {
		{ "Category", "Dialog Quest System|Editor" },
		{ "ModuleRelativePath", "Public/DQSQuestGraphAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowGuidedHelp_MetaData[] = {
		{ "Category", "Dialog Quest System|Editor" },
		{ "ModuleRelativePath", "Public/DQSQuestGraphAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntryNodeId;
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
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGraphAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestGraphAsset, Metadata), Z_Construct_UScriptStruct_FDQSGraphMetadata, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) }; // 1763288121
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_EntryNodeId = { "EntryNodeId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestGraphAsset, EntryNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntryNodeId_MetaData), NewProp_EntryNodeId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDQSQuestNode, METADATA_PARAMS(0, nullptr) }; // 1456320014
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestGraphAsset, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) }; // 1456320014
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_EditorGraph = { "EditorGraph", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuestGraphAsset, EditorGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorGraph_MetaData), NewProp_EditorGraph_MetaData) };
void Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_bUseSimpleEditorMode_SetBit(void* Obj)
{
	((UQuestGraphAsset*)Obj)->bUseSimpleEditorMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_bUseSimpleEditorMode = { "bUseSimpleEditorMode", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestGraphAsset), &Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_bUseSimpleEditorMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSimpleEditorMode_MetaData), NewProp_bUseSimpleEditorMode_MetaData) };
void Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_bShowGuidedHelp_SetBit(void* Obj)
{
	((UQuestGraphAsset*)Obj)->bShowGuidedHelp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_bShowGuidedHelp = { "bShowGuidedHelp", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UQuestGraphAsset), &Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_bShowGuidedHelp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowGuidedHelp_MetaData), NewProp_bShowGuidedHelp_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestGraphAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_EntryNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_Nodes,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_EditorGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_bUseSimpleEditorMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestGraphAsset_Statics::NewProp_bShowGuidedHelp,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UQuestGraphAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestGraphAsset_Statics::ClassParams = {
	&UQuestGraphAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UQuestGraphAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphAsset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestGraphAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestGraphAsset()
{
	if (!Z_Registration_Info_UClass_UQuestGraphAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestGraphAsset.OuterSingleton, Z_Construct_UClass_UQuestGraphAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestGraphAsset.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGraphAsset);
UQuestGraphAsset::~UQuestGraphAsset() {}
// ********** End Class UQuestGraphAsset ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sasha_OneDrive_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSQuestGraphAsset_h__Script_DQSRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuestGraphAsset, UQuestGraphAsset::StaticClass, TEXT("UQuestGraphAsset"), &Z_Registration_Info_UClass_UQuestGraphAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestGraphAsset), 2436240920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sasha_OneDrive_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSQuestGraphAsset_h__Script_DQSRuntime_1338641364(TEXT("/Script/DQSRuntime"),
	Z_CompiledInDeferFile_FID_Users_sasha_OneDrive_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSQuestGraphAsset_h__Script_DQSRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sasha_OneDrive_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSQuestGraphAsset_h__Script_DQSRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
