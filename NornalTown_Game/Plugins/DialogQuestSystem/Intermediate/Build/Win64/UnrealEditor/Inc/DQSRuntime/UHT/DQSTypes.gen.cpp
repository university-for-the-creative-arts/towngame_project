// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSTypes.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSTypes() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogueGraphAsset_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSAction_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSSpeakerStyleAsset_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UQuestGraphAsset_NoRegister();
DQSRUNTIME_API UEnum* Z_Construct_UEnum_DQSRuntime_EDQSDialogueNodeType();
DQSRUNTIME_API UEnum* Z_Construct_UEnum_DQSRuntime_EDQSQuestNodeType();
DQSRUNTIME_API UEnum* Z_Construct_UEnum_DQSRuntime_EDQSQuestOperation();
DQSRUNTIME_API UEnum* Z_Construct_UEnum_DQSRuntime_EDQSQuestStatus();
DQSRUNTIME_API UEnum* Z_Construct_UEnum_DQSRuntime_EDQSStateScope();
DQSRUNTIME_API UEnum* Z_Construct_UEnum_DQSRuntime_EDQSValueType();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSActiveDialogueLine();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSDialogueChoice();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSDialogueChoicePayload();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSDialogueNode();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSDialogueSessionState();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSGraphMetadata();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSQuestHook();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSQuestNode();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSQuestRuntimeState();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSQuestStatusUpdate();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSSaveSnapshot();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSSpeakerDefinition();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSVariableValue();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_DQSRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EDQSValueType *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDQSValueType;
static UEnum* EDQSValueType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDQSValueType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDQSValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DQSRuntime_EDQSValueType, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("EDQSValueType"));
	}
	return Z_Registration_Info_UEnum_EDQSValueType.OuterSingleton;
}
template<> DQSRUNTIME_API UEnum* StaticEnum<EDQSValueType>()
{
	return EDQSValueType_StaticEnum();
}
struct Z_Construct_UEnum_DQSRuntime_EDQSValueType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.Name", "EDQSValueType::Bool" },
		{ "Float.Name", "EDQSValueType::Float" },
		{ "Int.Name", "EDQSValueType::Int" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
		{ "Name.Name", "EDQSValueType::Name" },
		{ "None.Name", "EDQSValueType::None" },
		{ "String.Name", "EDQSValueType::String" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDQSValueType::None", (int64)EDQSValueType::None },
		{ "EDQSValueType::Bool", (int64)EDQSValueType::Bool },
		{ "EDQSValueType::Int", (int64)EDQSValueType::Int },
		{ "EDQSValueType::Float", (int64)EDQSValueType::Float },
		{ "EDQSValueType::Name", (int64)EDQSValueType::Name },
		{ "EDQSValueType::String", (int64)EDQSValueType::String },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DQSRuntime_EDQSValueType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	"EDQSValueType",
	"EDQSValueType",
	Z_Construct_UEnum_DQSRuntime_EDQSValueType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSValueType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSValueType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DQSRuntime_EDQSValueType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DQSRuntime_EDQSValueType()
{
	if (!Z_Registration_Info_UEnum_EDQSValueType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDQSValueType.InnerSingleton, Z_Construct_UEnum_DQSRuntime_EDQSValueType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDQSValueType.InnerSingleton;
}
// ********** End Enum EDQSValueType ***************************************************************

// ********** Begin Enum EDQSStateScope ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDQSStateScope;
static UEnum* EDQSStateScope_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDQSStateScope.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDQSStateScope.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DQSRuntime_EDQSStateScope, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("EDQSStateScope"));
	}
	return Z_Registration_Info_UEnum_EDQSStateScope.OuterSingleton;
}
template<> DQSRUNTIME_API UEnum* StaticEnum<EDQSStateScope>()
{
	return EDQSStateScope_StaticEnum();
}
struct Z_Construct_UEnum_DQSRuntime_EDQSStateScope_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DialogueSession.Name", "EDQSStateScope::DialogueSession" },
		{ "Global.Name", "EDQSStateScope::Global" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
		{ "Quest.Name", "EDQSStateScope::Quest" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDQSStateScope::Global", (int64)EDQSStateScope::Global },
		{ "EDQSStateScope::Quest", (int64)EDQSStateScope::Quest },
		{ "EDQSStateScope::DialogueSession", (int64)EDQSStateScope::DialogueSession },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DQSRuntime_EDQSStateScope_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	"EDQSStateScope",
	"EDQSStateScope",
	Z_Construct_UEnum_DQSRuntime_EDQSStateScope_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSStateScope_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSStateScope_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DQSRuntime_EDQSStateScope_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DQSRuntime_EDQSStateScope()
{
	if (!Z_Registration_Info_UEnum_EDQSStateScope.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDQSStateScope.InnerSingleton, Z_Construct_UEnum_DQSRuntime_EDQSStateScope_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDQSStateScope.InnerSingleton;
}
// ********** End Enum EDQSStateScope **************************************************************

// ********** Begin Enum EDQSDialogueNodeType ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDQSDialogueNodeType;
static UEnum* EDQSDialogueNodeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDQSDialogueNodeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDQSDialogueNodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DQSRuntime_EDQSDialogueNodeType, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("EDQSDialogueNodeType"));
	}
	return Z_Registration_Info_UEnum_EDQSDialogueNodeType.OuterSingleton;
}
template<> DQSRUNTIME_API UEnum* StaticEnum<EDQSDialogueNodeType>()
{
	return EDQSDialogueNodeType_StaticEnum();
}
struct Z_Construct_UEnum_DQSRuntime_EDQSDialogueNodeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Action.DisplayName", "Set Condition" },
		{ "Action.Name", "EDQSDialogueNodeType::Action" },
		{ "BlueprintType", "true" },
		{ "Choice.Name", "EDQSDialogueNodeType::Choice" },
		{ "Condition.DisplayName", "Condition (Legacy)" },
		{ "Condition.Name", "EDQSDialogueNodeType::Condition" },
		{ "ConditionedStart.DisplayName", "Conditioned Branch" },
		{ "ConditionedStart.Name", "EDQSDialogueNodeType::ConditionedStart" },
		{ "End.Name", "EDQSDialogueNodeType::End" },
		{ "Entry.Name", "EDQSDialogueNodeType::Entry" },
		{ "Jump.Name", "EDQSDialogueNodeType::Jump" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
		{ "QuestHook.Name", "EDQSDialogueNodeType::QuestHook" },
		{ "Speech.Name", "EDQSDialogueNodeType::Speech" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDQSDialogueNodeType::Entry", (int64)EDQSDialogueNodeType::Entry },
		{ "EDQSDialogueNodeType::Speech", (int64)EDQSDialogueNodeType::Speech },
		{ "EDQSDialogueNodeType::Choice", (int64)EDQSDialogueNodeType::Choice },
		{ "EDQSDialogueNodeType::Condition", (int64)EDQSDialogueNodeType::Condition },
		{ "EDQSDialogueNodeType::Action", (int64)EDQSDialogueNodeType::Action },
		{ "EDQSDialogueNodeType::QuestHook", (int64)EDQSDialogueNodeType::QuestHook },
		{ "EDQSDialogueNodeType::Jump", (int64)EDQSDialogueNodeType::Jump },
		{ "EDQSDialogueNodeType::End", (int64)EDQSDialogueNodeType::End },
		{ "EDQSDialogueNodeType::ConditionedStart", (int64)EDQSDialogueNodeType::ConditionedStart },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DQSRuntime_EDQSDialogueNodeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	"EDQSDialogueNodeType",
	"EDQSDialogueNodeType",
	Z_Construct_UEnum_DQSRuntime_EDQSDialogueNodeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSDialogueNodeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSDialogueNodeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DQSRuntime_EDQSDialogueNodeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DQSRuntime_EDQSDialogueNodeType()
{
	if (!Z_Registration_Info_UEnum_EDQSDialogueNodeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDQSDialogueNodeType.InnerSingleton, Z_Construct_UEnum_DQSRuntime_EDQSDialogueNodeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDQSDialogueNodeType.InnerSingleton;
}
// ********** End Enum EDQSDialogueNodeType ********************************************************

// ********** Begin Enum EDQSQuestNodeType *********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDQSQuestNodeType;
static UEnum* EDQSQuestNodeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDQSQuestNodeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDQSQuestNodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DQSRuntime_EDQSQuestNodeType, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("EDQSQuestNodeType"));
	}
	return Z_Registration_Info_UEnum_EDQSQuestNodeType.OuterSingleton;
}
template<> DQSRUNTIME_API UEnum* StaticEnum<EDQSQuestNodeType>()
{
	return EDQSQuestNodeType_StaticEnum();
}
struct Z_Construct_UEnum_DQSRuntime_EDQSQuestNodeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Branch.Name", "EDQSQuestNodeType::Branch" },
		{ "Complete.Name", "EDQSQuestNodeType::Complete" },
		{ "Condition.Name", "EDQSQuestNodeType::Condition" },
		{ "Fail.Name", "EDQSQuestNodeType::Fail" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
		{ "Objective.Name", "EDQSQuestNodeType::Objective" },
		{ "Reward.Name", "EDQSQuestNodeType::Reward" },
		{ "Start.Name", "EDQSQuestNodeType::Start" },
		{ "Subquest.Name", "EDQSQuestNodeType::Subquest" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDQSQuestNodeType::Start", (int64)EDQSQuestNodeType::Start },
		{ "EDQSQuestNodeType::Objective", (int64)EDQSQuestNodeType::Objective },
		{ "EDQSQuestNodeType::Condition", (int64)EDQSQuestNodeType::Condition },
		{ "EDQSQuestNodeType::Branch", (int64)EDQSQuestNodeType::Branch },
		{ "EDQSQuestNodeType::Reward", (int64)EDQSQuestNodeType::Reward },
		{ "EDQSQuestNodeType::Fail", (int64)EDQSQuestNodeType::Fail },
		{ "EDQSQuestNodeType::Complete", (int64)EDQSQuestNodeType::Complete },
		{ "EDQSQuestNodeType::Subquest", (int64)EDQSQuestNodeType::Subquest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DQSRuntime_EDQSQuestNodeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	"EDQSQuestNodeType",
	"EDQSQuestNodeType",
	Z_Construct_UEnum_DQSRuntime_EDQSQuestNodeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSQuestNodeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSQuestNodeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DQSRuntime_EDQSQuestNodeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DQSRuntime_EDQSQuestNodeType()
{
	if (!Z_Registration_Info_UEnum_EDQSQuestNodeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDQSQuestNodeType.InnerSingleton, Z_Construct_UEnum_DQSRuntime_EDQSQuestNodeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDQSQuestNodeType.InnerSingleton;
}
// ********** End Enum EDQSQuestNodeType ***********************************************************

// ********** Begin Enum EDQSQuestStatus ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDQSQuestStatus;
static UEnum* EDQSQuestStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDQSQuestStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDQSQuestStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DQSRuntime_EDQSQuestStatus, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("EDQSQuestStatus"));
	}
	return Z_Registration_Info_UEnum_EDQSQuestStatus.OuterSingleton;
}
template<> DQSRUNTIME_API UEnum* StaticEnum<EDQSQuestStatus>()
{
	return EDQSQuestStatus_StaticEnum();
}
struct Z_Construct_UEnum_DQSRuntime_EDQSQuestStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.Name", "EDQSQuestStatus::Active" },
		{ "Available.Name", "EDQSQuestStatus::Available" },
		{ "BlueprintType", "true" },
		{ "Completed.Name", "EDQSQuestStatus::Completed" },
		{ "Failed.Name", "EDQSQuestStatus::Failed" },
		{ "Inactive.Name", "EDQSQuestStatus::Inactive" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDQSQuestStatus::Inactive", (int64)EDQSQuestStatus::Inactive },
		{ "EDQSQuestStatus::Available", (int64)EDQSQuestStatus::Available },
		{ "EDQSQuestStatus::Active", (int64)EDQSQuestStatus::Active },
		{ "EDQSQuestStatus::Completed", (int64)EDQSQuestStatus::Completed },
		{ "EDQSQuestStatus::Failed", (int64)EDQSQuestStatus::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DQSRuntime_EDQSQuestStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	"EDQSQuestStatus",
	"EDQSQuestStatus",
	Z_Construct_UEnum_DQSRuntime_EDQSQuestStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSQuestStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSQuestStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DQSRuntime_EDQSQuestStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DQSRuntime_EDQSQuestStatus()
{
	if (!Z_Registration_Info_UEnum_EDQSQuestStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDQSQuestStatus.InnerSingleton, Z_Construct_UEnum_DQSRuntime_EDQSQuestStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDQSQuestStatus.InnerSingleton;
}
// ********** End Enum EDQSQuestStatus *************************************************************

// ********** Begin Enum EDQSQuestOperation ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDQSQuestOperation;
static UEnum* EDQSQuestOperation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDQSQuestOperation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDQSQuestOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DQSRuntime_EDQSQuestOperation, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("EDQSQuestOperation"));
	}
	return Z_Registration_Info_UEnum_EDQSQuestOperation.OuterSingleton;
}
template<> DQSRUNTIME_API UEnum* StaticEnum<EDQSQuestOperation>()
{
	return EDQSQuestOperation_StaticEnum();
}
struct Z_Construct_UEnum_DQSRuntime_EDQSQuestOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AdvanceObjective.Name", "EDQSQuestOperation::AdvanceObjective" },
		{ "BlueprintType", "true" },
		{ "CompleteQuest.Name", "EDQSQuestOperation::CompleteQuest" },
		{ "FailQuest.Name", "EDQSQuestOperation::FailQuest" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
		{ "None.Name", "EDQSQuestOperation::None" },
		{ "StartQuest.Name", "EDQSQuestOperation::StartQuest" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDQSQuestOperation::None", (int64)EDQSQuestOperation::None },
		{ "EDQSQuestOperation::StartQuest", (int64)EDQSQuestOperation::StartQuest },
		{ "EDQSQuestOperation::AdvanceObjective", (int64)EDQSQuestOperation::AdvanceObjective },
		{ "EDQSQuestOperation::CompleteQuest", (int64)EDQSQuestOperation::CompleteQuest },
		{ "EDQSQuestOperation::FailQuest", (int64)EDQSQuestOperation::FailQuest },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DQSRuntime_EDQSQuestOperation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	"EDQSQuestOperation",
	"EDQSQuestOperation",
	Z_Construct_UEnum_DQSRuntime_EDQSQuestOperation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSQuestOperation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DQSRuntime_EDQSQuestOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DQSRuntime_EDQSQuestOperation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DQSRuntime_EDQSQuestOperation()
{
	if (!Z_Registration_Info_UEnum_EDQSQuestOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDQSQuestOperation.InnerSingleton, Z_Construct_UEnum_DQSRuntime_EDQSQuestOperation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDQSQuestOperation.InnerSingleton;
}
// ********** End Enum EDQSQuestOperation **********************************************************

// ********** Begin ScriptStruct FDQSVariableValue *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDQSVariableValue;
class UScriptStruct* FDQSVariableValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSVariableValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDQSVariableValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDQSVariableValue, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("DQSVariableValue"));
	}
	return Z_Registration_Info_UScriptStruct_FDQSVariableValue.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDQSVariableValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolValue_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntValue_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameValue_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static void NewProp_BoolValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameValue;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDQSVariableValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSVariableValue, Type), Z_Construct_UEnum_DQSRuntime_EDQSValueType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1691549452
void Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_BoolValue_SetBit(void* Obj)
{
	((FDQSVariableValue*)Obj)->BoolValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDQSVariableValue), &Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolValue_MetaData), NewProp_BoolValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSVariableValue, IntValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntValue_MetaData), NewProp_IntValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSVariableValue, FloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatValue_MetaData), NewProp_FloatValue_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_NameValue = { "NameValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSVariableValue, NameValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameValue_MetaData), NewProp_NameValue_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSVariableValue, StringValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StringValue_MetaData), NewProp_StringValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDQSVariableValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_BoolValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_IntValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_FloatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_NameValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewProp_StringValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSVariableValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDQSVariableValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	&NewStructOps,
	"DQSVariableValue",
	Z_Construct_UScriptStruct_FDQSVariableValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSVariableValue_Statics::PropPointers),
	sizeof(FDQSVariableValue),
	alignof(FDQSVariableValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSVariableValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDQSVariableValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDQSVariableValue()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSVariableValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDQSVariableValue.InnerSingleton, Z_Construct_UScriptStruct_FDQSVariableValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDQSVariableValue.InnerSingleton;
}
// ********** End ScriptStruct FDQSVariableValue ***************************************************

// ********** Begin ScriptStruct FDQSGraphMetadata *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDQSGraphMetadata;
class UScriptStruct* FDQSGraphMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSGraphMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDQSGraphMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDQSGraphMetadata, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("DQSGraphMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_FDQSGraphMetadata.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AuthorNotes_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastValidationSucceeded_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastValidationSummary_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GraphId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FTextPropertyParams NewProp_AuthorNotes;
	static void NewProp_bLastValidationSucceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastValidationSucceeded;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LastValidationSummary;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDQSGraphMetadata>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_GraphId = { "GraphId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSGraphMetadata, GraphId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphId_MetaData), NewProp_GraphId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSGraphMetadata, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSGraphMetadata, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSGraphMetadata, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) }; // 2104890724
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_AuthorNotes = { "AuthorNotes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSGraphMetadata, AuthorNotes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AuthorNotes_MetaData), NewProp_AuthorNotes_MetaData) };
void Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_bLastValidationSucceeded_SetBit(void* Obj)
{
	((FDQSGraphMetadata*)Obj)->bLastValidationSucceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_bLastValidationSucceeded = { "bLastValidationSucceeded", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDQSGraphMetadata), &Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_bLastValidationSucceeded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastValidationSucceeded_MetaData), NewProp_bLastValidationSucceeded_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_LastValidationSummary = { "LastValidationSummary", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSGraphMetadata, LastValidationSummary), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastValidationSummary_MetaData), NewProp_LastValidationSummary_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_GraphId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_AuthorNotes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_bLastValidationSucceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewProp_LastValidationSummary,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	&NewStructOps,
	"DQSGraphMetadata",
	Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::PropPointers),
	sizeof(FDQSGraphMetadata),
	alignof(FDQSGraphMetadata),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDQSGraphMetadata()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSGraphMetadata.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDQSGraphMetadata.InnerSingleton, Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDQSGraphMetadata.InnerSingleton;
}
// ********** End ScriptStruct FDQSGraphMetadata ***************************************************

// ********** Begin ScriptStruct FDQSSpeakerDefinition *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDQSSpeakerDefinition;
class UScriptStruct* FDQSSpeakerDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSSpeakerDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDQSSpeakerDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDQSSpeakerDefinition, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("DQSSpeakerDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_FDQSSpeakerDefinition.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Portrait_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerStyle_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Portrait;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SpeakerStyle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDQSSpeakerDefinition>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::NewProp_SpeakerId = { "SpeakerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSSpeakerDefinition, SpeakerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerId_MetaData), NewProp_SpeakerId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSSpeakerDefinition, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::NewProp_Portrait = { "Portrait", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSSpeakerDefinition, Portrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Portrait_MetaData), NewProp_Portrait_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::NewProp_SpeakerStyle = { "SpeakerStyle", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSSpeakerDefinition, SpeakerStyle), Z_Construct_UClass_UDQSSpeakerStyleAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerStyle_MetaData), NewProp_SpeakerStyle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::NewProp_SpeakerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::NewProp_Portrait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::NewProp_SpeakerStyle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	&NewStructOps,
	"DQSSpeakerDefinition",
	Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::PropPointers),
	sizeof(FDQSSpeakerDefinition),
	alignof(FDQSSpeakerDefinition),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDQSSpeakerDefinition()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSSpeakerDefinition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDQSSpeakerDefinition.InnerSingleton, Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDQSSpeakerDefinition.InnerSingleton;
}
// ********** End ScriptStruct FDQSSpeakerDefinition ***********************************************

// ********** Begin ScriptStruct FDQSDialoguePresentationOverride **********************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDQSDialoguePresentationOverride;
class UScriptStruct* FDQSDialoguePresentationOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSDialoguePresentationOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDQSDialoguePresentationOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("DQSDialoguePresentationOverride"));
	}
	return Z_Registration_Info_UScriptStruct_FDQSDialoguePresentationOverride.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PortraitOverride_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerStyleOverride_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHidePortrait_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PortraitOverride;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SpeakerStyleOverride;
	static void NewProp_bHidePortrait_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidePortrait;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDQSDialoguePresentationOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::NewProp_PortraitOverride = { "PortraitOverride", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialoguePresentationOverride, PortraitOverride), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PortraitOverride_MetaData), NewProp_PortraitOverride_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::NewProp_SpeakerStyleOverride = { "SpeakerStyleOverride", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialoguePresentationOverride, SpeakerStyleOverride), Z_Construct_UClass_UDQSSpeakerStyleAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerStyleOverride_MetaData), NewProp_SpeakerStyleOverride_MetaData) };
void Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::NewProp_bHidePortrait_SetBit(void* Obj)
{
	((FDQSDialoguePresentationOverride*)Obj)->bHidePortrait = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::NewProp_bHidePortrait = { "bHidePortrait", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDQSDialoguePresentationOverride), &Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::NewProp_bHidePortrait_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHidePortrait_MetaData), NewProp_bHidePortrait_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::NewProp_PortraitOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::NewProp_SpeakerStyleOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::NewProp_bHidePortrait,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	&NewStructOps,
	"DQSDialoguePresentationOverride",
	Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::PropPointers),
	sizeof(FDQSDialoguePresentationOverride),
	alignof(FDQSDialoguePresentationOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSDialoguePresentationOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDQSDialoguePresentationOverride.InnerSingleton, Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDQSDialoguePresentationOverride.InnerSingleton;
}
// ********** End ScriptStruct FDQSDialoguePresentationOverride ************************************

// ********** Begin ScriptStruct FDQSQuestHook *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDQSQuestHook;
class UScriptStruct* FDQSQuestHook::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSQuestHook.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDQSQuestHook.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDQSQuestHook, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("DQSQuestHook"));
	}
	return Z_Registration_Info_UScriptStruct_FDQSQuestHook.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDQSQuestHook_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestAsset_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveTag_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_QuestAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectiveTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDQSQuestHook>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDQSQuestHook_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDQSQuestHook_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestHook, Operation), Z_Construct_UEnum_DQSRuntime_EDQSQuestOperation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operation_MetaData), NewProp_Operation_MetaData) }; // 3930676919
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDQSQuestHook_Statics::NewProp_QuestAsset = { "QuestAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestHook, QuestAsset), Z_Construct_UClass_UQuestGraphAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestAsset_MetaData), NewProp_QuestAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSQuestHook_Statics::NewProp_ObjectiveTag = { "ObjectiveTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestHook, ObjectiveTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveTag_MetaData), NewProp_ObjectiveTag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDQSQuestHook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestHook_Statics::NewProp_Operation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestHook_Statics::NewProp_Operation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestHook_Statics::NewProp_QuestAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestHook_Statics::NewProp_ObjectiveTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSQuestHook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDQSQuestHook_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	&NewStructOps,
	"DQSQuestHook",
	Z_Construct_UScriptStruct_FDQSQuestHook_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSQuestHook_Statics::PropPointers),
	sizeof(FDQSQuestHook),
	alignof(FDQSQuestHook),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSQuestHook_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDQSQuestHook_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDQSQuestHook()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSQuestHook.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDQSQuestHook.InnerSingleton, Z_Construct_UScriptStruct_FDQSQuestHook_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDQSQuestHook.InnerSingleton;
}
// ********** End ScriptStruct FDQSQuestHook *******************************************************

// ********** Begin ScriptStruct FDQSDialogueChoice ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDQSDialogueChoice;
class UScriptStruct* FDQSDialogueChoice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSDialogueChoice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDQSDialogueChoice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDQSDialogueChoice, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("DQSDialogueChoice"));
	}
	return Z_Registration_Info_UScriptStruct_FDQSDialogueChoice.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChoiceId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetNodeId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_Inner_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Conditioned Branch nodes instead of per-choice conditions." },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Conditioned Branch nodes instead of per-choice conditions." },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Set Condition nodes instead of per-choice actions." },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use Set Condition nodes instead of per-choice actions." },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureReason_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChoiceId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetNodeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Conditions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FTextPropertyParams NewProp_FailureReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDQSDialogueChoice>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_ChoiceId = { "ChoiceId", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueChoice, ChoiceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChoiceId_MetaData), NewProp_ChoiceId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueChoice, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_TargetNodeId = { "TargetNodeId", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueChoice, TargetNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetNodeId_MetaData), NewProp_TargetNodeId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDQSCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conditions_Inner_MetaData), NewProp_Conditions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x011404800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueChoice, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conditions_MetaData), NewProp_Conditions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDQSAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_Inner_MetaData), NewProp_Actions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x011404800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueChoice, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_FailureReason = { "FailureReason", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueChoice, FailureReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureReason_MetaData), NewProp_FailureReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_ChoiceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_TargetNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_Conditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_Conditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewProp_FailureReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	&NewStructOps,
	"DQSDialogueChoice",
	Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::PropPointers),
	sizeof(FDQSDialogueChoice),
	alignof(FDQSDialogueChoice),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDQSDialogueChoice()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSDialogueChoice.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDQSDialogueChoice.InnerSingleton, Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDQSDialogueChoice.InnerSingleton;
}
// ********** End ScriptStruct FDQSDialogueChoice **************************************************

// ********** Begin ScriptStruct FDQSDialogueNode **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDQSDialogueNode;
class UScriptStruct* FDQSDialogueNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSDialogueNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDQSDialogueNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDQSDialogueNode, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("DQSDialogueNode"));
	}
	return Z_Registration_Info_UScriptStruct_FDQSDialogueNode.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDQSDialogueNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeType_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresentationTags_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceSound_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Presentation_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextNodeId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlternateNodeId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpTargetNodeId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Choices_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_Inner_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestHook_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NodeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NodeType;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresentationTags;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_VoiceSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Presentation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextNodeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlternateNodeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_JumpTargetNodeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Choices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Choices;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Conditions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestHook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDQSDialogueNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueNode, NodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_NodeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_NodeType = { "NodeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueNode, NodeType), Z_Construct_UEnum_DQSRuntime_EDQSDialogueNodeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeType_MetaData), NewProp_NodeType_MetaData) }; // 4024036
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueNode, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_SpeakerId = { "SpeakerId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueNode, SpeakerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerId_MetaData), NewProp_SpeakerId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueNode, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_PresentationTags = { "PresentationTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueNode, PresentationTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresentationTags_MetaData), NewProp_PresentationTags_MetaData) }; // 2104890724
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_VoiceSound = { "VoiceSound", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueNode, VoiceSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceSound_MetaData), NewProp_VoiceSound_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Presentation = { "Presentation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueNode, Presentation), Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Presentation_MetaData), NewProp_Presentation_MetaData) }; // 1575407994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_NextNodeId = { "NextNodeId", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueNode, NextNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextNodeId_MetaData), NewProp_NextNodeId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_AlternateNodeId = { "AlternateNodeId", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueNode, AlternateNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlternateNodeId_MetaData), NewProp_AlternateNodeId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_JumpTargetNodeId = { "JumpTargetNodeId", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueNode, JumpTargetNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpTargetNodeId_MetaData), NewProp_JumpTargetNodeId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Choices_Inner = { "Choices", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDQSDialogueChoice, METADATA_PARAMS(0, nullptr) }; // 1040280651
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueNode, Choices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Choices_MetaData), NewProp_Choices_MetaData) }; // 1040280651
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDQSCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conditions_Inner_MetaData), NewProp_Conditions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x011400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueNode, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conditions_MetaData), NewProp_Conditions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDQSAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_Inner_MetaData), NewProp_Actions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x011400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueNode, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_QuestHook = { "QuestHook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueNode, QuestHook), Z_Construct_UScriptStruct_FDQSQuestHook, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestHook_MetaData), NewProp_QuestHook_MetaData) }; // 23456547
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_NodeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_NodeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_SpeakerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_PresentationTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_VoiceSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Presentation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_NextNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_AlternateNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_JumpTargetNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Choices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Choices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Conditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Conditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewProp_QuestHook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	&NewStructOps,
	"DQSDialogueNode",
	Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::PropPointers),
	sizeof(FDQSDialogueNode),
	alignof(FDQSDialogueNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDQSDialogueNode()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSDialogueNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDQSDialogueNode.InnerSingleton, Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDQSDialogueNode.InnerSingleton;
}
// ********** End ScriptStruct FDQSDialogueNode ****************************************************

// ********** Begin ScriptStruct FDQSQuestNode *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDQSQuestNode;
class UScriptStruct* FDQSQuestNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSQuestNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDQSQuestNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDQSQuestNode, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("DQSQuestNode"));
	}
	return Z_Registration_Info_UScriptStruct_FDQSQuestNode.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDQSQuestNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeType_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
		{ "MultiLine", "TRUE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveTag_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCount_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextNodeId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlternateNodeId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubquestAsset_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_Inner_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NodeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NodeType;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectiveTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NextNodeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AlternateNodeId;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SubquestAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Conditions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDQSQuestNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestNode, NodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_NodeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_NodeType = { "NodeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestNode, NodeType), Z_Construct_UEnum_DQSRuntime_EDQSQuestNodeType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeType_MetaData), NewProp_NodeType_MetaData) }; // 1228226857
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestNode, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestNode, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_ObjectiveTag = { "ObjectiveTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestNode, ObjectiveTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveTag_MetaData), NewProp_ObjectiveTag_MetaData) }; // 133831994
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_TargetCount = { "TargetCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestNode, TargetCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCount_MetaData), NewProp_TargetCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_NextNodeId = { "NextNodeId", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestNode, NextNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextNodeId_MetaData), NewProp_NextNodeId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_AlternateNodeId = { "AlternateNodeId", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestNode, AlternateNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlternateNodeId_MetaData), NewProp_AlternateNodeId_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_SubquestAsset = { "SubquestAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestNode, SubquestAsset), Z_Construct_UClass_UQuestGraphAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubquestAsset_MetaData), NewProp_SubquestAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDQSCondition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conditions_Inner_MetaData), NewProp_Conditions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x011400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestNode, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Conditions_MetaData), NewProp_Conditions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDQSAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_Inner_MetaData), NewProp_Actions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x011400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestNode, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDQSQuestNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_NodeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_NodeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_ObjectiveTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_TargetCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_NextNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_AlternateNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_SubquestAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_Conditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_Conditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewProp_Actions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSQuestNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDQSQuestNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	&NewStructOps,
	"DQSQuestNode",
	Z_Construct_UScriptStruct_FDQSQuestNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSQuestNode_Statics::PropPointers),
	sizeof(FDQSQuestNode),
	alignof(FDQSQuestNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSQuestNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDQSQuestNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDQSQuestNode()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSQuestNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDQSQuestNode.InnerSingleton, Z_Construct_UScriptStruct_FDQSQuestNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDQSQuestNode.InnerSingleton;
}
// ********** End ScriptStruct FDQSQuestNode *******************************************************

// ********** Begin ScriptStruct FDQSDialogueChoicePayload *****************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDQSDialogueChoicePayload;
class UScriptStruct* FDQSDialogueChoicePayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSDialogueChoicePayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDQSDialogueChoicePayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDQSDialogueChoicePayload, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("DQSDialogueChoicePayload"));
	}
	return Z_Registration_Info_UScriptStruct_FDQSDialogueChoicePayload.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAvailable_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledReason_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static void NewProp_bIsAvailable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAvailable;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisabledReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDQSDialogueChoicePayload>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueChoicePayload, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
void Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::NewProp_bIsAvailable_SetBit(void* Obj)
{
	((FDQSDialogueChoicePayload*)Obj)->bIsAvailable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::NewProp_bIsAvailable = { "bIsAvailable", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDQSDialogueChoicePayload), &Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::NewProp_bIsAvailable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAvailable_MetaData), NewProp_bIsAvailable_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::NewProp_DisabledReason = { "DisabledReason", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueChoicePayload, DisabledReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledReason_MetaData), NewProp_DisabledReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::NewProp_bIsAvailable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::NewProp_DisabledReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	&NewStructOps,
	"DQSDialogueChoicePayload",
	Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::PropPointers),
	sizeof(FDQSDialogueChoicePayload),
	alignof(FDQSDialogueChoicePayload),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDQSDialogueChoicePayload()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSDialogueChoicePayload.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDQSDialogueChoicePayload.InnerSingleton, Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDQSDialogueChoicePayload.InnerSingleton;
}
// ********** End ScriptStruct FDQSDialogueChoicePayload *******************************************

// ********** Begin ScriptStruct FDQSActiveDialogueLine ********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDQSActiveDialogueLine;
class UScriptStruct* FDQSActiveDialogueLine::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSActiveDialogueLine.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDQSActiveDialogueLine.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDQSActiveDialogueLine, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("DQSActiveDialogueLine"));
	}
	return Z_Registration_Info_UScriptStruct_FDQSActiveDialogueLine.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerName_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Portrait_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerStyle_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PresentationTags_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Presentation_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Choices_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanContinue_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SpeakerId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SpeakerName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Portrait;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SpeakerStyle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PresentationTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Presentation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Choices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Choices;
	static void NewProp_bCanContinue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanContinue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDQSActiveDialogueLine>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_DialogueId = { "DialogueId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSActiveDialogueLine, DialogueId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueId_MetaData), NewProp_DialogueId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSActiveDialogueLine, NodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_SpeakerId = { "SpeakerId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSActiveDialogueLine, SpeakerId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerId_MetaData), NewProp_SpeakerId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_SpeakerName = { "SpeakerName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSActiveDialogueLine, SpeakerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerName_MetaData), NewProp_SpeakerName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSActiveDialogueLine, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_Portrait = { "Portrait", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSActiveDialogueLine, Portrait), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Portrait_MetaData), NewProp_Portrait_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_SpeakerStyle = { "SpeakerStyle", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSActiveDialogueLine, SpeakerStyle), Z_Construct_UClass_UDQSSpeakerStyleAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeakerStyle_MetaData), NewProp_SpeakerStyle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_PresentationTags = { "PresentationTags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSActiveDialogueLine, PresentationTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PresentationTags_MetaData), NewProp_PresentationTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_Presentation = { "Presentation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSActiveDialogueLine, Presentation), Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Presentation_MetaData), NewProp_Presentation_MetaData) }; // 1575407994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_Choices_Inner = { "Choices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDQSDialogueChoicePayload, METADATA_PARAMS(0, nullptr) }; // 3150922485
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_Choices = { "Choices", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSActiveDialogueLine, Choices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Choices_MetaData), NewProp_Choices_MetaData) }; // 3150922485
void Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_bCanContinue_SetBit(void* Obj)
{
	((FDQSActiveDialogueLine*)Obj)->bCanContinue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_bCanContinue = { "bCanContinue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDQSActiveDialogueLine), &Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_bCanContinue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanContinue_MetaData), NewProp_bCanContinue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_DialogueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_SpeakerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_SpeakerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_Portrait,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_SpeakerStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_PresentationTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_Presentation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_Choices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_Choices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewProp_bCanContinue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	&NewStructOps,
	"DQSActiveDialogueLine",
	Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::PropPointers),
	sizeof(FDQSActiveDialogueLine),
	alignof(FDQSActiveDialogueLine),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDQSActiveDialogueLine()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSActiveDialogueLine.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDQSActiveDialogueLine.InnerSingleton, Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDQSActiveDialogueLine.InnerSingleton;
}
// ********** End ScriptStruct FDQSActiveDialogueLine **********************************************

// ********** Begin ScriptStruct FDQSDialogueSessionState ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDQSDialogueSessionState;
class UScriptStruct* FDQSDialogueSessionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSDialogueSessionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDQSDialogueSessionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDQSDialogueSessionState, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("DQSDialogueSessionState"));
	}
	return Z_Registration_Info_UScriptStruct_FDQSDialogueSessionState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueAsset_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNodeId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DialogueId;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DialogueAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentNodeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Variables_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Variables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDQSDialogueSessionState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((FDQSDialogueSessionState*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDQSDialogueSessionState), &Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_DialogueId = { "DialogueId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueSessionState, DialogueId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueId_MetaData), NewProp_DialogueId_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_DialogueAsset = { "DialogueAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueSessionState, DialogueAsset), Z_Construct_UClass_UDialogueGraphAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueAsset_MetaData), NewProp_DialogueAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_CurrentNodeId = { "CurrentNodeId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueSessionState, CurrentNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentNodeId_MetaData), NewProp_CurrentNodeId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_Variables_ValueProp = { "Variables", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDQSVariableValue, METADATA_PARAMS(0, nullptr) }; // 2378772934
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_Variables_Key_KeyProp = { "Variables_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSDialogueSessionState, Variables), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variables_MetaData), NewProp_Variables_MetaData) }; // 2378772934
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_bIsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_DialogueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_DialogueAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_CurrentNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_Variables_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_Variables_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewProp_Variables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	&NewStructOps,
	"DQSDialogueSessionState",
	Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::PropPointers),
	sizeof(FDQSDialogueSessionState),
	alignof(FDQSDialogueSessionState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDQSDialogueSessionState()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSDialogueSessionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDQSDialogueSessionState.InnerSingleton, Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDQSDialogueSessionState.InnerSingleton;
}
// ********** End ScriptStruct FDQSDialogueSessionState ********************************************

// ********** Begin ScriptStruct FDQSQuestRuntimeState *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDQSQuestRuntimeState;
class UScriptStruct* FDQSQuestRuntimeState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSQuestRuntimeState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDQSQuestRuntimeState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDQSQuestRuntimeState, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("DQSQuestRuntimeState"));
	}
	return Z_Registration_Info_UScriptStruct_FDQSQuestRuntimeState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestAsset_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveNodeId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveProgress_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_QuestAsset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveNodeId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectiveProgress_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectiveProgress_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectiveProgress;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Variables_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Variables;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDQSQuestRuntimeState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestRuntimeState, QuestId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestId_MetaData), NewProp_QuestId_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_QuestAsset = { "QuestAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestRuntimeState, QuestAsset), Z_Construct_UClass_UQuestGraphAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestAsset_MetaData), NewProp_QuestAsset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestRuntimeState, Status), Z_Construct_UEnum_DQSRuntime_EDQSQuestStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 1243048749
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_ActiveNodeId = { "ActiveNodeId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestRuntimeState, ActiveNodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveNodeId_MetaData), NewProp_ActiveNodeId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_ObjectiveProgress_ValueProp = { "ObjectiveProgress", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_ObjectiveProgress_Key_KeyProp = { "ObjectiveProgress_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_ObjectiveProgress = { "ObjectiveProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestRuntimeState, ObjectiveProgress), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveProgress_MetaData), NewProp_ObjectiveProgress_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_Variables_ValueProp = { "Variables", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDQSVariableValue, METADATA_PARAMS(0, nullptr) }; // 2378772934
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_Variables_Key_KeyProp = { "Variables_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestRuntimeState, Variables), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Variables_MetaData), NewProp_Variables_MetaData) }; // 2378772934
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_QuestAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_ActiveNodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_ObjectiveProgress_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_ObjectiveProgress_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_ObjectiveProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_Variables_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_Variables_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewProp_Variables,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	&NewStructOps,
	"DQSQuestRuntimeState",
	Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::PropPointers),
	sizeof(FDQSQuestRuntimeState),
	alignof(FDQSQuestRuntimeState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDQSQuestRuntimeState()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSQuestRuntimeState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDQSQuestRuntimeState.InnerSingleton, Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDQSQuestRuntimeState.InnerSingleton;
}
// ********** End ScriptStruct FDQSQuestRuntimeState ***********************************************

// ********** Begin ScriptStruct FDQSQuestStatusUpdate *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDQSQuestStatusUpdate;
class UScriptStruct* FDQSQuestStatusUpdate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSQuestStatusUpdate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDQSQuestStatusUpdate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDQSQuestStatusUpdate, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("DQSQuestStatusUpdate"));
	}
	return Z_Registration_Info_UScriptStruct_FDQSQuestStatusUpdate.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestId_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveTag_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCount_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetCount_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectiveTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TargetCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDQSQuestStatusUpdate>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestStatusUpdate, QuestId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestId_MetaData), NewProp_QuestId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestStatusUpdate, Status), Z_Construct_UEnum_DQSRuntime_EDQSQuestStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 1243048749
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestStatusUpdate, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestStatusUpdate, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_ObjectiveTag = { "ObjectiveTag", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestStatusUpdate, ObjectiveTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveTag_MetaData), NewProp_ObjectiveTag_MetaData) }; // 133831994
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_CurrentCount = { "CurrentCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestStatusUpdate, CurrentCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCount_MetaData), NewProp_CurrentCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_TargetCount = { "TargetCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSQuestStatusUpdate, TargetCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetCount_MetaData), NewProp_TargetCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_ObjectiveTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_CurrentCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewProp_TargetCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	&NewStructOps,
	"DQSQuestStatusUpdate",
	Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::PropPointers),
	sizeof(FDQSQuestStatusUpdate),
	alignof(FDQSQuestStatusUpdate),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDQSQuestStatusUpdate()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSQuestStatusUpdate.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDQSQuestStatusUpdate.InnerSingleton, Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDQSQuestStatusUpdate.InnerSingleton;
}
// ********** End ScriptStruct FDQSQuestStatusUpdate ***********************************************

// ********** Begin ScriptStruct FDQSSaveSnapshot **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FDQSSaveSnapshot;
class UScriptStruct* FDQSSaveSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSSaveSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FDQSSaveSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDQSSaveSnapshot, (UObject*)Z_Construct_UPackage__Script_DQSRuntime(), TEXT("DQSSaveSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_FDQSSaveSnapshot.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVariables_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTags_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestStates_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueSession_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalVariables_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GlobalVariables_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GlobalVariables;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestStates_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_QuestStates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueSession;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDQSSaveSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_GlobalVariables_ValueProp = { "GlobalVariables", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDQSVariableValue, METADATA_PARAMS(0, nullptr) }; // 2378772934
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_GlobalVariables_Key_KeyProp = { "GlobalVariables_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_GlobalVariables = { "GlobalVariables", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSSaveSnapshot, GlobalVariables), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalVariables_MetaData), NewProp_GlobalVariables_MetaData) }; // 2378772934
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_GlobalTags = { "GlobalTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSSaveSnapshot, GlobalTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalTags_MetaData), NewProp_GlobalTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_QuestStates_ValueProp = { "QuestStates", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDQSQuestRuntimeState, METADATA_PARAMS(0, nullptr) }; // 1135250961
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_QuestStates_Key_KeyProp = { "QuestStates_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_QuestStates = { "QuestStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSSaveSnapshot, QuestStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestStates_MetaData), NewProp_QuestStates_MetaData) }; // 1135250961
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_DialogueSession = { "DialogueSession", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDQSSaveSnapshot, DialogueSession), Z_Construct_UScriptStruct_FDQSDialogueSessionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueSession_MetaData), NewProp_DialogueSession_MetaData) }; // 3814580495
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_GlobalVariables_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_GlobalVariables_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_GlobalVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_GlobalTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_QuestStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_QuestStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_QuestStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewProp_DialogueSession,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
	nullptr,
	&NewStructOps,
	"DQSSaveSnapshot",
	Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::PropPointers),
	sizeof(FDQSSaveSnapshot),
	alignof(FDQSSaveSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDQSSaveSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_FDQSSaveSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FDQSSaveSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FDQSSaveSnapshot.InnerSingleton;
}
// ********** End ScriptStruct FDQSSaveSnapshot ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sasha_OneDrive_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSTypes_h__Script_DQSRuntime_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDQSValueType_StaticEnum, TEXT("EDQSValueType"), &Z_Registration_Info_UEnum_EDQSValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1691549452U) },
		{ EDQSStateScope_StaticEnum, TEXT("EDQSStateScope"), &Z_Registration_Info_UEnum_EDQSStateScope, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 909860648U) },
		{ EDQSDialogueNodeType_StaticEnum, TEXT("EDQSDialogueNodeType"), &Z_Registration_Info_UEnum_EDQSDialogueNodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4024036U) },
		{ EDQSQuestNodeType_StaticEnum, TEXT("EDQSQuestNodeType"), &Z_Registration_Info_UEnum_EDQSQuestNodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1228226857U) },
		{ EDQSQuestStatus_StaticEnum, TEXT("EDQSQuestStatus"), &Z_Registration_Info_UEnum_EDQSQuestStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1243048749U) },
		{ EDQSQuestOperation_StaticEnum, TEXT("EDQSQuestOperation"), &Z_Registration_Info_UEnum_EDQSQuestOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3930676919U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDQSVariableValue::StaticStruct, Z_Construct_UScriptStruct_FDQSVariableValue_Statics::NewStructOps, TEXT("DQSVariableValue"), &Z_Registration_Info_UScriptStruct_FDQSVariableValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDQSVariableValue), 2378772934U) },
		{ FDQSGraphMetadata::StaticStruct, Z_Construct_UScriptStruct_FDQSGraphMetadata_Statics::NewStructOps, TEXT("DQSGraphMetadata"), &Z_Registration_Info_UScriptStruct_FDQSGraphMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDQSGraphMetadata), 1763288121U) },
		{ FDQSSpeakerDefinition::StaticStruct, Z_Construct_UScriptStruct_FDQSSpeakerDefinition_Statics::NewStructOps, TEXT("DQSSpeakerDefinition"), &Z_Registration_Info_UScriptStruct_FDQSSpeakerDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDQSSpeakerDefinition), 3042381743U) },
		{ FDQSDialoguePresentationOverride::StaticStruct, Z_Construct_UScriptStruct_FDQSDialoguePresentationOverride_Statics::NewStructOps, TEXT("DQSDialoguePresentationOverride"), &Z_Registration_Info_UScriptStruct_FDQSDialoguePresentationOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDQSDialoguePresentationOverride), 1575407994U) },
		{ FDQSQuestHook::StaticStruct, Z_Construct_UScriptStruct_FDQSQuestHook_Statics::NewStructOps, TEXT("DQSQuestHook"), &Z_Registration_Info_UScriptStruct_FDQSQuestHook, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDQSQuestHook), 23456547U) },
		{ FDQSDialogueChoice::StaticStruct, Z_Construct_UScriptStruct_FDQSDialogueChoice_Statics::NewStructOps, TEXT("DQSDialogueChoice"), &Z_Registration_Info_UScriptStruct_FDQSDialogueChoice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDQSDialogueChoice), 1040280651U) },
		{ FDQSDialogueNode::StaticStruct, Z_Construct_UScriptStruct_FDQSDialogueNode_Statics::NewStructOps, TEXT("DQSDialogueNode"), &Z_Registration_Info_UScriptStruct_FDQSDialogueNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDQSDialogueNode), 3916723728U) },
		{ FDQSQuestNode::StaticStruct, Z_Construct_UScriptStruct_FDQSQuestNode_Statics::NewStructOps, TEXT("DQSQuestNode"), &Z_Registration_Info_UScriptStruct_FDQSQuestNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDQSQuestNode), 1456320014U) },
		{ FDQSDialogueChoicePayload::StaticStruct, Z_Construct_UScriptStruct_FDQSDialogueChoicePayload_Statics::NewStructOps, TEXT("DQSDialogueChoicePayload"), &Z_Registration_Info_UScriptStruct_FDQSDialogueChoicePayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDQSDialogueChoicePayload), 3150922485U) },
		{ FDQSActiveDialogueLine::StaticStruct, Z_Construct_UScriptStruct_FDQSActiveDialogueLine_Statics::NewStructOps, TEXT("DQSActiveDialogueLine"), &Z_Registration_Info_UScriptStruct_FDQSActiveDialogueLine, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDQSActiveDialogueLine), 3038726987U) },
		{ FDQSDialogueSessionState::StaticStruct, Z_Construct_UScriptStruct_FDQSDialogueSessionState_Statics::NewStructOps, TEXT("DQSDialogueSessionState"), &Z_Registration_Info_UScriptStruct_FDQSDialogueSessionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDQSDialogueSessionState), 3814580495U) },
		{ FDQSQuestRuntimeState::StaticStruct, Z_Construct_UScriptStruct_FDQSQuestRuntimeState_Statics::NewStructOps, TEXT("DQSQuestRuntimeState"), &Z_Registration_Info_UScriptStruct_FDQSQuestRuntimeState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDQSQuestRuntimeState), 1135250961U) },
		{ FDQSQuestStatusUpdate::StaticStruct, Z_Construct_UScriptStruct_FDQSQuestStatusUpdate_Statics::NewStructOps, TEXT("DQSQuestStatusUpdate"), &Z_Registration_Info_UScriptStruct_FDQSQuestStatusUpdate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDQSQuestStatusUpdate), 2096365403U) },
		{ FDQSSaveSnapshot::StaticStruct, Z_Construct_UScriptStruct_FDQSSaveSnapshot_Statics::NewStructOps, TEXT("DQSSaveSnapshot"), &Z_Registration_Info_UScriptStruct_FDQSSaveSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDQSSaveSnapshot), 1289688289U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sasha_OneDrive_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSTypes_h__Script_DQSRuntime_3030507511(TEXT("/Script/DQSRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_sasha_OneDrive_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSTypes_h__Script_DQSRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sasha_OneDrive_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSTypes_h__Script_DQSRuntime_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_sasha_OneDrive_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSTypes_h__Script_DQSRuntime_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sasha_OneDrive_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSTypes_h__Script_DQSRuntime_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
