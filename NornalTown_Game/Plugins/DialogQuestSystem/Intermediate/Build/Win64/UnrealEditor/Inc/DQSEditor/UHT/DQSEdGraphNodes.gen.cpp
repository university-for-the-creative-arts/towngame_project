// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSEdGraphNodes.h"
#include "DQSTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSEdGraphNodes() {}

// ********** Begin Cross Module References ********************************************************
DQSEDITOR_API UClass* Z_Construct_UClass_UDQSDialogueEdGraph();
DQSEDITOR_API UClass* Z_Construct_UClass_UDQSDialogueEdGraph_NoRegister();
DQSEDITOR_API UClass* Z_Construct_UClass_UDQSDialogueEdGraphNode();
DQSEDITOR_API UClass* Z_Construct_UClass_UDQSDialogueEdGraphNode_NoRegister();
DQSEDITOR_API UClass* Z_Construct_UClass_UDQSDialogueGraphSchema();
DQSEDITOR_API UClass* Z_Construct_UClass_UDQSDialogueGraphSchema_NoRegister();
DQSEDITOR_API UClass* Z_Construct_UClass_UDQSQuestEdGraph();
DQSEDITOR_API UClass* Z_Construct_UClass_UDQSQuestEdGraph_NoRegister();
DQSEDITOR_API UClass* Z_Construct_UClass_UDQSQuestEdGraphNode();
DQSEDITOR_API UClass* Z_Construct_UClass_UDQSQuestEdGraphNode_NoRegister();
DQSEDITOR_API UClass* Z_Construct_UClass_UDQSQuestGraphSchema();
DQSEDITOR_API UClass* Z_Construct_UClass_UDQSQuestGraphSchema_NoRegister();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSDialogueNode();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSQuestNode();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
UPackage* Z_Construct_UPackage__Script_DQSEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDQSDialogueEdGraph ******************************************************
void UDQSDialogueEdGraph::StaticRegisterNativesUDQSDialogueEdGraph()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSDialogueEdGraph;
UClass* UDQSDialogueEdGraph::GetPrivateStaticClass()
{
	using TClass = UDQSDialogueEdGraph;
	if (!Z_Registration_Info_UClass_UDQSDialogueEdGraph.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSDialogueEdGraph"),
			Z_Registration_Info_UClass_UDQSDialogueEdGraph.InnerSingleton,
			StaticRegisterNativesUDQSDialogueEdGraph,
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
	return Z_Registration_Info_UClass_UDQSDialogueEdGraph.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSDialogueEdGraph_NoRegister()
{
	return UDQSDialogueEdGraph::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSDialogueEdGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DQSEdGraphNodes.h" },
		{ "ModuleRelativePath", "Public/DQSEdGraphNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSDialogueEdGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDQSDialogueEdGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueEdGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSDialogueEdGraph_Statics::ClassParams = {
	&UDQSDialogueEdGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueEdGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSDialogueEdGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSDialogueEdGraph()
{
	if (!Z_Registration_Info_UClass_UDQSDialogueEdGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSDialogueEdGraph.OuterSingleton, Z_Construct_UClass_UDQSDialogueEdGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSDialogueEdGraph.OuterSingleton;
}
UDQSDialogueEdGraph::UDQSDialogueEdGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSDialogueEdGraph);
UDQSDialogueEdGraph::~UDQSDialogueEdGraph() {}
// ********** End Class UDQSDialogueEdGraph ********************************************************

// ********** Begin Class UDQSQuestEdGraph *********************************************************
void UDQSQuestEdGraph::StaticRegisterNativesUDQSQuestEdGraph()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSQuestEdGraph;
UClass* UDQSQuestEdGraph::GetPrivateStaticClass()
{
	using TClass = UDQSQuestEdGraph;
	if (!Z_Registration_Info_UClass_UDQSQuestEdGraph.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSQuestEdGraph"),
			Z_Registration_Info_UClass_UDQSQuestEdGraph.InnerSingleton,
			StaticRegisterNativesUDQSQuestEdGraph,
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
	return Z_Registration_Info_UClass_UDQSQuestEdGraph.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSQuestEdGraph_NoRegister()
{
	return UDQSQuestEdGraph::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSQuestEdGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DQSEdGraphNodes.h" },
		{ "ModuleRelativePath", "Public/DQSEdGraphNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSQuestEdGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDQSQuestEdGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestEdGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSQuestEdGraph_Statics::ClassParams = {
	&UDQSQuestEdGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestEdGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSQuestEdGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSQuestEdGraph()
{
	if (!Z_Registration_Info_UClass_UDQSQuestEdGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSQuestEdGraph.OuterSingleton, Z_Construct_UClass_UDQSQuestEdGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSQuestEdGraph.OuterSingleton;
}
UDQSQuestEdGraph::UDQSQuestEdGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSQuestEdGraph);
UDQSQuestEdGraph::~UDQSQuestEdGraph() {}
// ********** End Class UDQSQuestEdGraph ***********************************************************

// ********** Begin Class UDQSDialogueEdGraphNode **************************************************
void UDQSDialogueEdGraphNode::StaticRegisterNativesUDQSDialogueEdGraphNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSDialogueEdGraphNode;
UClass* UDQSDialogueEdGraphNode::GetPrivateStaticClass()
{
	using TClass = UDQSDialogueEdGraphNode;
	if (!Z_Registration_Info_UClass_UDQSDialogueEdGraphNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSDialogueEdGraphNode"),
			Z_Registration_Info_UClass_UDQSDialogueEdGraphNode.InnerSingleton,
			StaticRegisterNativesUDQSDialogueEdGraphNode,
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
	return Z_Registration_Info_UClass_UDQSDialogueEdGraphNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSDialogueEdGraphNode_NoRegister()
{
	return UDQSDialogueEdGraphNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSDialogueEdGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DQSEdGraphNodes.h" },
		{ "ModuleRelativePath", "Public/DQSEdGraphNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSEdGraphNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSDialogueEdGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSDialogueEdGraphNode_Statics::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSDialogueEdGraphNode, NodeData), Z_Construct_UScriptStruct_FDQSDialogueNode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeData_MetaData), NewProp_NodeData_MetaData) }; // 3916723728
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSDialogueEdGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSDialogueEdGraphNode_Statics::NewProp_NodeData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueEdGraphNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSDialogueEdGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueEdGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSDialogueEdGraphNode_Statics::ClassParams = {
	&UDQSDialogueEdGraphNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDQSDialogueEdGraphNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueEdGraphNode_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueEdGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSDialogueEdGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSDialogueEdGraphNode()
{
	if (!Z_Registration_Info_UClass_UDQSDialogueEdGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSDialogueEdGraphNode.OuterSingleton, Z_Construct_UClass_UDQSDialogueEdGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSDialogueEdGraphNode.OuterSingleton;
}
UDQSDialogueEdGraphNode::UDQSDialogueEdGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSDialogueEdGraphNode);
UDQSDialogueEdGraphNode::~UDQSDialogueEdGraphNode() {}
// ********** End Class UDQSDialogueEdGraphNode ****************************************************

// ********** Begin Class UDQSQuestEdGraphNode *****************************************************
void UDQSQuestEdGraphNode::StaticRegisterNativesUDQSQuestEdGraphNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSQuestEdGraphNode;
UClass* UDQSQuestEdGraphNode::GetPrivateStaticClass()
{
	using TClass = UDQSQuestEdGraphNode;
	if (!Z_Registration_Info_UClass_UDQSQuestEdGraphNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSQuestEdGraphNode"),
			Z_Registration_Info_UClass_UDQSQuestEdGraphNode.InnerSingleton,
			StaticRegisterNativesUDQSQuestEdGraphNode,
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
	return Z_Registration_Info_UClass_UDQSQuestEdGraphNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSQuestEdGraphNode_NoRegister()
{
	return UDQSQuestEdGraphNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSQuestEdGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DQSEdGraphNodes.h" },
		{ "ModuleRelativePath", "Public/DQSEdGraphNodes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSEdGraphNodes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSQuestEdGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSQuestEdGraphNode_Statics::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSQuestEdGraphNode, NodeData), Z_Construct_UScriptStruct_FDQSQuestNode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeData_MetaData), NewProp_NodeData_MetaData) }; // 1456320014
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSQuestEdGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSQuestEdGraphNode_Statics::NewProp_NodeData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestEdGraphNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSQuestEdGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestEdGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSQuestEdGraphNode_Statics::ClassParams = {
	&UDQSQuestEdGraphNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDQSQuestEdGraphNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestEdGraphNode_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestEdGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSQuestEdGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSQuestEdGraphNode()
{
	if (!Z_Registration_Info_UClass_UDQSQuestEdGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSQuestEdGraphNode.OuterSingleton, Z_Construct_UClass_UDQSQuestEdGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSQuestEdGraphNode.OuterSingleton;
}
UDQSQuestEdGraphNode::UDQSQuestEdGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSQuestEdGraphNode);
UDQSQuestEdGraphNode::~UDQSQuestEdGraphNode() {}
// ********** End Class UDQSQuestEdGraphNode *******************************************************

// ********** Begin Class UDQSDialogueGraphSchema **************************************************
void UDQSDialogueGraphSchema::StaticRegisterNativesUDQSDialogueGraphSchema()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSDialogueGraphSchema;
UClass* UDQSDialogueGraphSchema::GetPrivateStaticClass()
{
	using TClass = UDQSDialogueGraphSchema;
	if (!Z_Registration_Info_UClass_UDQSDialogueGraphSchema.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSDialogueGraphSchema"),
			Z_Registration_Info_UClass_UDQSDialogueGraphSchema.InnerSingleton,
			StaticRegisterNativesUDQSDialogueGraphSchema,
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
	return Z_Registration_Info_UClass_UDQSDialogueGraphSchema.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSDialogueGraphSchema_NoRegister()
{
	return UDQSDialogueGraphSchema::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSDialogueGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DQSEdGraphNodes.h" },
		{ "ModuleRelativePath", "Public/DQSEdGraphNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSDialogueGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDQSDialogueGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSDialogueGraphSchema_Statics::ClassParams = {
	&UDQSDialogueGraphSchema::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSDialogueGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSDialogueGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSDialogueGraphSchema()
{
	if (!Z_Registration_Info_UClass_UDQSDialogueGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSDialogueGraphSchema.OuterSingleton, Z_Construct_UClass_UDQSDialogueGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSDialogueGraphSchema.OuterSingleton;
}
UDQSDialogueGraphSchema::UDQSDialogueGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSDialogueGraphSchema);
UDQSDialogueGraphSchema::~UDQSDialogueGraphSchema() {}
// ********** End Class UDQSDialogueGraphSchema ****************************************************

// ********** Begin Class UDQSQuestGraphSchema *****************************************************
void UDQSQuestGraphSchema::StaticRegisterNativesUDQSQuestGraphSchema()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSQuestGraphSchema;
UClass* UDQSQuestGraphSchema::GetPrivateStaticClass()
{
	using TClass = UDQSQuestGraphSchema;
	if (!Z_Registration_Info_UClass_UDQSQuestGraphSchema.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSQuestGraphSchema"),
			Z_Registration_Info_UClass_UDQSQuestGraphSchema.InnerSingleton,
			StaticRegisterNativesUDQSQuestGraphSchema,
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
	return Z_Registration_Info_UClass_UDQSQuestGraphSchema.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSQuestGraphSchema_NoRegister()
{
	return UDQSQuestGraphSchema::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSQuestGraphSchema_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DQSEdGraphNodes.h" },
		{ "ModuleRelativePath", "Public/DQSEdGraphNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSQuestGraphSchema>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDQSQuestGraphSchema_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestGraphSchema_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSQuestGraphSchema_Statics::ClassParams = {
	&UDQSQuestGraphSchema::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestGraphSchema_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSQuestGraphSchema_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSQuestGraphSchema()
{
	if (!Z_Registration_Info_UClass_UDQSQuestGraphSchema.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSQuestGraphSchema.OuterSingleton, Z_Construct_UClass_UDQSQuestGraphSchema_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSQuestGraphSchema.OuterSingleton;
}
UDQSQuestGraphSchema::UDQSQuestGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSQuestGraphSchema);
UDQSQuestGraphSchema::~UDQSQuestGraphSchema() {}
// ********** End Class UDQSQuestGraphSchema *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSEditor_Public_DQSEdGraphNodes_h__Script_DQSEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSDialogueEdGraph, UDQSDialogueEdGraph::StaticClass, TEXT("UDQSDialogueEdGraph"), &Z_Registration_Info_UClass_UDQSDialogueEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSDialogueEdGraph), 2389447939U) },
		{ Z_Construct_UClass_UDQSQuestEdGraph, UDQSQuestEdGraph::StaticClass, TEXT("UDQSQuestEdGraph"), &Z_Registration_Info_UClass_UDQSQuestEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSQuestEdGraph), 1900326142U) },
		{ Z_Construct_UClass_UDQSDialogueEdGraphNode, UDQSDialogueEdGraphNode::StaticClass, TEXT("UDQSDialogueEdGraphNode"), &Z_Registration_Info_UClass_UDQSDialogueEdGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSDialogueEdGraphNode), 3906467726U) },
		{ Z_Construct_UClass_UDQSQuestEdGraphNode, UDQSQuestEdGraphNode::StaticClass, TEXT("UDQSQuestEdGraphNode"), &Z_Registration_Info_UClass_UDQSQuestEdGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSQuestEdGraphNode), 2172294123U) },
		{ Z_Construct_UClass_UDQSDialogueGraphSchema, UDQSDialogueGraphSchema::StaticClass, TEXT("UDQSDialogueGraphSchema"), &Z_Registration_Info_UClass_UDQSDialogueGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSDialogueGraphSchema), 2075100888U) },
		{ Z_Construct_UClass_UDQSQuestGraphSchema, UDQSQuestGraphSchema::StaticClass, TEXT("UDQSQuestGraphSchema"), &Z_Registration_Info_UClass_UDQSQuestGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSQuestGraphSchema), 3744852946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSEditor_Public_DQSEdGraphNodes_h__Script_DQSEditor_3824141730(TEXT("/Script/DQSEditor"),
	Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSEditor_Public_DQSEdGraphNodes_h__Script_DQSEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSEditor_Public_DQSEdGraphNodes_h__Script_DQSEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
