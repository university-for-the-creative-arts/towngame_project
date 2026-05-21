// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DialogQuestSubsystem.h"
#include "DQSTypes.h"
#include "Engine/GameInstance.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDialogQuestSubsystem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogQuestSubsystem();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogQuestSubsystem_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogueGraphAsset_NoRegister();
DQSRUNTIME_API UClass* Z_Construct_UClass_UQuestGraphAsset_NoRegister();
DQSRUNTIME_API UEnum* Z_Construct_UEnum_DQSRuntime_EDQSStateScope();
DQSRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEndedSignature__DelegateSignature();
DQSRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature();
DQSRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature();
DQSRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSActiveDialogueLine();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSDialogueSessionState();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSQuestRuntimeState();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSQuestStatusUpdate();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSVariableValue();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_DQSRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FDQSDialogueLineUpdatedSignature **************************************
struct Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature_Statics
{
	struct _Script_DQSRuntime_eventDQSDialogueLineUpdatedSignature_Parms
	{
		FDQSActiveDialogueLine ActiveLine;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveLine_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveLine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature_Statics::NewProp_ActiveLine = { "ActiveLine", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DQSRuntime_eventDQSDialogueLineUpdatedSignature_Parms, ActiveLine), Z_Construct_UScriptStruct_FDQSActiveDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveLine_MetaData), NewProp_ActiveLine_MetaData) }; // 3038726987
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature_Statics::NewProp_ActiveLine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DQSRuntime, nullptr, "DQSDialogueLineUpdatedSignature__DelegateSignature", Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature_Statics::_Script_DQSRuntime_eventDQSDialogueLineUpdatedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature_Statics::_Script_DQSRuntime_eventDQSDialogueLineUpdatedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDQSDialogueLineUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& DQSDialogueLineUpdatedSignature, FDQSActiveDialogueLine const& ActiveLine)
{
	struct _Script_DQSRuntime_eventDQSDialogueLineUpdatedSignature_Parms
	{
		FDQSActiveDialogueLine ActiveLine;
	};
	_Script_DQSRuntime_eventDQSDialogueLineUpdatedSignature_Parms Parms;
	Parms.ActiveLine=ActiveLine;
	DQSDialogueLineUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FDQSDialogueLineUpdatedSignature ****************************************

// ********** Begin Delegate FDQSDialogueEndedSignature ********************************************
struct Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEndedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEndedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DQSRuntime, nullptr, "DQSDialogueEndedSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEndedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEndedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEndedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEndedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDQSDialogueEndedSignature_DelegateWrapper(const FMulticastScriptDelegate& DQSDialogueEndedSignature)
{
	DQSDialogueEndedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FDQSDialogueEndedSignature **********************************************

// ********** Begin Delegate FDQSQuestUpdatedSignature *********************************************
struct Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature_Statics
{
	struct _Script_DQSRuntime_eventDQSQuestUpdatedSignature_Parms
	{
		FDQSQuestStatusUpdate Update;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Update_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Update;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature_Statics::NewProp_Update = { "Update", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DQSRuntime_eventDQSQuestUpdatedSignature_Parms, Update), Z_Construct_UScriptStruct_FDQSQuestStatusUpdate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Update_MetaData), NewProp_Update_MetaData) }; // 2096365403
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature_Statics::NewProp_Update,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DQSRuntime, nullptr, "DQSQuestUpdatedSignature__DelegateSignature", Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature_Statics::_Script_DQSRuntime_eventDQSQuestUpdatedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature_Statics::_Script_DQSRuntime_eventDQSQuestUpdatedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDQSQuestUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& DQSQuestUpdatedSignature, FDQSQuestStatusUpdate const& Update)
{
	struct _Script_DQSRuntime_eventDQSQuestUpdatedSignature_Parms
	{
		FDQSQuestStatusUpdate Update;
	};
	_Script_DQSRuntime_eventDQSQuestUpdatedSignature_Parms Parms;
	Parms.Update=Update;
	DQSQuestUpdatedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FDQSQuestUpdatedSignature ***********************************************

// ********** Begin Delegate FDQSDialogueEventTriggeredSignature ***********************************
struct Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics
{
	struct _Script_DQSRuntime_eventDQSDialogueEventTriggeredSignature_Parms
	{
		FGameplayTag EventTag;
		FName EventName;
		UObject* Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DQSRuntime_eventDQSDialogueEventTriggeredSignature_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DQSRuntime_eventDQSDialogueEventTriggeredSignature_Parms, EventName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_DQSRuntime_eventDQSDialogueEventTriggeredSignature_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DQSRuntime, nullptr, "DQSDialogueEventTriggeredSignature__DelegateSignature", Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::_Script_DQSRuntime_eventDQSDialogueEventTriggeredSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::_Script_DQSRuntime_eventDQSDialogueEventTriggeredSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDQSDialogueEventTriggeredSignature_DelegateWrapper(const FMulticastScriptDelegate& DQSDialogueEventTriggeredSignature, FGameplayTag EventTag, FName EventName, UObject* Context)
{
	struct _Script_DQSRuntime_eventDQSDialogueEventTriggeredSignature_Parms
	{
		FGameplayTag EventTag;
		FName EventName;
		UObject* Context;
	};
	_Script_DQSRuntime_eventDQSDialogueEventTriggeredSignature_Parms Parms;
	Parms.EventTag=EventTag;
	Parms.EventName=EventName;
	Parms.Context=Context;
	DQSDialogueEventTriggeredSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FDQSDialogueEventTriggeredSignature *************************************

// ********** Begin Class UDialogQuestSubsystem Function AddTag ************************************
struct Z_Construct_UFunction_UDialogQuestSubsystem_AddTag_Statics
{
	struct DialogQuestSubsystem_eventAddTag_Parms
	{
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_AddTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventAddTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_AddTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_AddTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_AddTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_AddTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "AddTag", Z_Construct_UFunction_UDialogQuestSubsystem_AddTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_AddTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_AddTag_Statics::DialogQuestSubsystem_eventAddTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_AddTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_AddTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_AddTag_Statics::DialogQuestSubsystem_eventAddTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_AddTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_AddTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execAddTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTag(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function AddTag **************************************

// ********** Begin Class UDialogQuestSubsystem Function AdvanceQuestObjective *********************
struct Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics
{
	struct DialogQuestSubsystem_eventAdvanceQuestObjective_Parms
	{
		FName QuestId;
		FGameplayTag ObjectiveTag;
		int32 Delta;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "CPP_Default_Delta", "1" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectiveTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Delta;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventAdvanceQuestObjective_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::NewProp_ObjectiveTag = { "ObjectiveTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventAdvanceQuestObjective_Parms, ObjectiveTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventAdvanceQuestObjective_Parms, Delta), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogQuestSubsystem_eventAdvanceQuestObjective_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogQuestSubsystem_eventAdvanceQuestObjective_Parms), &Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::NewProp_ObjectiveTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "AdvanceQuestObjective", Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::DialogQuestSubsystem_eventAdvanceQuestObjective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::DialogQuestSubsystem_eventAdvanceQuestObjective_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execAdvanceQuestObjective)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestId);
	P_GET_STRUCT(FGameplayTag,Z_Param_ObjectiveTag);
	P_GET_PROPERTY(FIntProperty,Z_Param_Delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AdvanceQuestObjective(Z_Param_QuestId,Z_Param_ObjectiveTag,Z_Param_Delta);
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function AdvanceQuestObjective ***********************

// ********** Begin Class UDialogQuestSubsystem Function ChooseDialogueOption **********************
struct Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics
{
	struct DialogQuestSubsystem_eventChooseDialogueOption_Parms
	{
		int32 ChoiceIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChoiceIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::NewProp_ChoiceIndex = { "ChoiceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventChooseDialogueOption_Parms, ChoiceIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogQuestSubsystem_eventChooseDialogueOption_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogQuestSubsystem_eventChooseDialogueOption_Parms), &Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::NewProp_ChoiceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "ChooseDialogueOption", Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::DialogQuestSubsystem_eventChooseDialogueOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::DialogQuestSubsystem_eventChooseDialogueOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execChooseDialogueOption)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChoiceIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ChooseDialogueOption(Z_Param_ChoiceIndex);
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function ChooseDialogueOption ************************

// ********** Begin Class UDialogQuestSubsystem Function CompleteQuest *****************************
struct Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics
{
	struct DialogQuestSubsystem_eventCompleteQuest_Parms
	{
		FName QuestId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventCompleteQuest_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogQuestSubsystem_eventCompleteQuest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogQuestSubsystem_eventCompleteQuest_Parms), &Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "CompleteQuest", Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::DialogQuestSubsystem_eventCompleteQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::DialogQuestSubsystem_eventCompleteQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execCompleteQuest)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CompleteQuest(Z_Param_QuestId);
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function CompleteQuest *******************************

// ********** Begin Class UDialogQuestSubsystem Function ContinueDialogue **************************
struct Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue_Statics
{
	struct DialogQuestSubsystem_eventContinueDialogue_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogQuestSubsystem_eventContinueDialogue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogQuestSubsystem_eventContinueDialogue_Parms), &Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "ContinueDialogue", Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue_Statics::DialogQuestSubsystem_eventContinueDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue_Statics::DialogQuestSubsystem_eventContinueDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execContinueDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContinueDialogue();
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function ContinueDialogue ****************************

// ********** Begin Class UDialogQuestSubsystem Function EndDialogue *******************************
struct Z_Construct_UFunction_UDialogQuestSubsystem_EndDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_EndDialogue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "EndDialogue", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_EndDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_EndDialogue_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_EndDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_EndDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execEndDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndDialogue();
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function EndDialogue *********************************

// ********** Begin Class UDialogQuestSubsystem Function FailQuest *********************************
struct Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics
{
	struct DialogQuestSubsystem_eventFailQuest_Parms
	{
		FName QuestId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventFailQuest_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogQuestSubsystem_eventFailQuest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogQuestSubsystem_eventFailQuest_Parms), &Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "FailQuest", Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::DialogQuestSubsystem_eventFailQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::DialogQuestSubsystem_eventFailQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execFailQuest)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->FailQuest(Z_Param_QuestId);
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function FailQuest ***********************************

// ********** Begin Class UDialogQuestSubsystem Function GetAllQuestStates *************************
struct Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates_Statics
{
	struct DialogQuestSubsystem_eventGetAllQuestStates_Parms
	{
		TArray<FDQSQuestRuntimeState> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDQSQuestRuntimeState, METADATA_PARAMS(0, nullptr) }; // 1135250961
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventGetAllQuestStates_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1135250961
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "GetAllQuestStates", Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates_Statics::DialogQuestSubsystem_eventGetAllQuestStates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates_Statics::DialogQuestSubsystem_eventGetAllQuestStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execGetAllQuestStates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDQSQuestRuntimeState>*)Z_Param__Result=P_THIS->GetAllQuestStates();
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function GetAllQuestStates ***************************

// ********** Begin Class UDialogQuestSubsystem Function GetCurrentDialogueLine ********************
struct Z_Construct_UFunction_UDialogQuestSubsystem_GetCurrentDialogueLine_Statics
{
	struct DialogQuestSubsystem_eventGetCurrentDialogueLine_Parms
	{
		FDQSActiveDialogueLine ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_GetCurrentDialogueLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventGetCurrentDialogueLine_Parms, ReturnValue), Z_Construct_UScriptStruct_FDQSActiveDialogueLine, METADATA_PARAMS(0, nullptr) }; // 3038726987
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_GetCurrentDialogueLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_GetCurrentDialogueLine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_GetCurrentDialogueLine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_GetCurrentDialogueLine_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "GetCurrentDialogueLine", Z_Construct_UFunction_UDialogQuestSubsystem_GetCurrentDialogueLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_GetCurrentDialogueLine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_GetCurrentDialogueLine_Statics::DialogQuestSubsystem_eventGetCurrentDialogueLine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_GetCurrentDialogueLine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_GetCurrentDialogueLine_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_GetCurrentDialogueLine_Statics::DialogQuestSubsystem_eventGetCurrentDialogueLine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_GetCurrentDialogueLine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_GetCurrentDialogueLine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execGetCurrentDialogueLine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDQSActiveDialogueLine*)Z_Param__Result=P_THIS->GetCurrentDialogueLine();
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function GetCurrentDialogueLine **********************

// ********** Begin Class UDialogQuestSubsystem Function GetQuestState *****************************
struct Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics
{
	struct DialogQuestSubsystem_eventGetQuestState_Parms
	{
		FName QuestId;
		FDQSQuestRuntimeState OutQuestState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutQuestState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventGetQuestState_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::NewProp_OutQuestState = { "OutQuestState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventGetQuestState_Parms, OutQuestState), Z_Construct_UScriptStruct_FDQSQuestRuntimeState, METADATA_PARAMS(0, nullptr) }; // 1135250961
void Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogQuestSubsystem_eventGetQuestState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogQuestSubsystem_eventGetQuestState_Parms), &Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::NewProp_OutQuestState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "GetQuestState", Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::DialogQuestSubsystem_eventGetQuestState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::DialogQuestSubsystem_eventGetQuestState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execGetQuestState)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestId);
	P_GET_STRUCT_REF(FDQSQuestRuntimeState,Z_Param_Out_OutQuestState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetQuestState(Z_Param_QuestId,Z_Param_Out_OutQuestState);
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function GetQuestState *******************************

// ********** Begin Class UDialogQuestSubsystem Function GetVariable *******************************
struct Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics
{
	struct DialogQuestSubsystem_eventGetVariable_Parms
	{
		FName Key;
		FDQSVariableValue OutValue;
		EDQSStateScope Scope;
		FName ScopedOwnerId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "CPP_Default_Scope", "Global" },
		{ "CPP_Default_ScopedOwnerId", "None" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Scope_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Scope;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScopedOwnerId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventGetVariable_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventGetVariable_Parms, OutValue), Z_Construct_UScriptStruct_FDQSVariableValue, METADATA_PARAMS(0, nullptr) }; // 2378772934
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::NewProp_Scope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::NewProp_Scope = { "Scope", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventGetVariable_Parms, Scope), Z_Construct_UEnum_DQSRuntime_EDQSStateScope, METADATA_PARAMS(0, nullptr) }; // 909860648
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::NewProp_ScopedOwnerId = { "ScopedOwnerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventGetVariable_Parms, ScopedOwnerId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogQuestSubsystem_eventGetVariable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogQuestSubsystem_eventGetVariable_Parms), &Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::NewProp_Scope_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::NewProp_Scope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::NewProp_ScopedOwnerId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "GetVariable", Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::DialogQuestSubsystem_eventGetVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::DialogQuestSubsystem_eventGetVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execGetVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FDQSVariableValue,Z_Param_Out_OutValue);
	P_GET_ENUM(EDQSStateScope,Z_Param_Scope);
	P_GET_PROPERTY(FNameProperty,Z_Param_ScopedOwnerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetVariable(Z_Param_Key,Z_Param_Out_OutValue,EDQSStateScope(Z_Param_Scope),Z_Param_ScopedOwnerId);
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function GetVariable *********************************

// ********** Begin Class UDialogQuestSubsystem Function HasTag ************************************
struct Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics
{
	struct DialogQuestSubsystem_eventHasTag_Parms
	{
		FGameplayTag Tag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventHasTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
void Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogQuestSubsystem_eventHasTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogQuestSubsystem_eventHasTag_Parms), &Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "HasTag", Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::DialogQuestSubsystem_eventHasTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::DialogQuestSubsystem_eventHasTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_HasTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_HasTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execHasTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasTag(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function HasTag **************************************

// ********** Begin Class UDialogQuestSubsystem Function IsDialogueActive **************************
struct Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive_Statics
{
	struct DialogQuestSubsystem_eventIsDialogueActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogQuestSubsystem_eventIsDialogueActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogQuestSubsystem_eventIsDialogueActive_Parms), &Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "IsDialogueActive", Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive_Statics::DialogQuestSubsystem_eventIsDialogueActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive_Statics::DialogQuestSubsystem_eventIsDialogueActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execIsDialogueActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDialogueActive();
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function IsDialogueActive ****************************

// ********** Begin Class UDialogQuestSubsystem Function LoadDialogQuestState **********************
struct Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics
{
	struct DialogQuestSubsystem_eventLoadDialogQuestState_Parms
	{
		FString SlotName;
		int32 UserIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "CPP_Default_SlotName", "DialogQuestSystem" },
		{ "CPP_Default_UserIndex", "0" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventLoadDialogQuestState_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventLoadDialogQuestState_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogQuestSubsystem_eventLoadDialogQuestState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogQuestSubsystem_eventLoadDialogQuestState_Parms), &Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "LoadDialogQuestState", Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::DialogQuestSubsystem_eventLoadDialogQuestState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::DialogQuestSubsystem_eventLoadDialogQuestState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execLoadDialogQuestState)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadDialogQuestState(Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function LoadDialogQuestState ************************

// ********** Begin Class UDialogQuestSubsystem Function RemoveTag *********************************
struct Z_Construct_UFunction_UDialogQuestSubsystem_RemoveTag_Statics
{
	struct DialogQuestSubsystem_eventRemoveTag_Parms
	{
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_RemoveTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventRemoveTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_RemoveTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_RemoveTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_RemoveTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_RemoveTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "RemoveTag", Z_Construct_UFunction_UDialogQuestSubsystem_RemoveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_RemoveTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_RemoveTag_Statics::DialogQuestSubsystem_eventRemoveTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_RemoveTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_RemoveTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_RemoveTag_Statics::DialogQuestSubsystem_eventRemoveTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_RemoveTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_RemoveTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execRemoveTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTag(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function RemoveTag ***********************************

// ********** Begin Class UDialogQuestSubsystem Function SaveDialogQuestState **********************
struct Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics
{
	struct DialogQuestSubsystem_eventSaveDialogQuestState_Parms
	{
		FString SlotName;
		int32 UserIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "CPP_Default_SlotName", "DialogQuestSystem" },
		{ "CPP_Default_UserIndex", "0" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventSaveDialogQuestState_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventSaveDialogQuestState_Parms, UserIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogQuestSubsystem_eventSaveDialogQuestState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogQuestSubsystem_eventSaveDialogQuestState_Parms), &Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::NewProp_UserIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "SaveDialogQuestState", Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::DialogQuestSubsystem_eventSaveDialogQuestState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::DialogQuestSubsystem_eventSaveDialogQuestState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execSaveDialogQuestState)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveDialogQuestState(Z_Param_SlotName,Z_Param_UserIndex);
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function SaveDialogQuestState ************************

// ********** Begin Class UDialogQuestSubsystem Function SetVariable *******************************
struct Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics
{
	struct DialogQuestSubsystem_eventSetVariable_Parms
	{
		FName Key;
		FDQSVariableValue Value;
		EDQSStateScope Scope;
		FName ScopedOwnerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "CPP_Default_Scope", "Global" },
		{ "CPP_Default_ScopedOwnerId", "None" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Scope_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Scope;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ScopedOwnerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventSetVariable_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventSetVariable_Parms, Value), Z_Construct_UScriptStruct_FDQSVariableValue, METADATA_PARAMS(0, nullptr) }; // 2378772934
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::NewProp_Scope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::NewProp_Scope = { "Scope", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventSetVariable_Parms, Scope), Z_Construct_UEnum_DQSRuntime_EDQSStateScope, METADATA_PARAMS(0, nullptr) }; // 909860648
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::NewProp_ScopedOwnerId = { "ScopedOwnerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventSetVariable_Parms, ScopedOwnerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::NewProp_Scope_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::NewProp_Scope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::NewProp_ScopedOwnerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "SetVariable", Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::DialogQuestSubsystem_eventSetVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::DialogQuestSubsystem_eventSetVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execSetVariable)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_STRUCT(FDQSVariableValue,Z_Param_Value);
	P_GET_ENUM(EDQSStateScope,Z_Param_Scope);
	P_GET_PROPERTY(FNameProperty,Z_Param_ScopedOwnerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVariable(Z_Param_Key,Z_Param_Value,EDQSStateScope(Z_Param_Scope),Z_Param_ScopedOwnerId);
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function SetVariable *********************************

// ********** Begin Class UDialogQuestSubsystem Function StartDialogue *****************************
struct Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics
{
	struct DialogQuestSubsystem_eventStartDialogue_Parms
	{
		UDialogueGraphAsset* DialogueAsset;
		UObject* Context;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::NewProp_DialogueAsset = { "DialogueAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventStartDialogue_Parms, DialogueAsset), Z_Construct_UClass_UDialogueGraphAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventStartDialogue_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogQuestSubsystem_eventStartDialogue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogQuestSubsystem_eventStartDialogue_Parms), &Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::NewProp_DialogueAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "StartDialogue", Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::DialogQuestSubsystem_eventStartDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::DialogQuestSubsystem_eventStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execStartDialogue)
{
	P_GET_OBJECT(UDialogueGraphAsset,Z_Param_DialogueAsset);
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartDialogue(Z_Param_DialogueAsset,Z_Param_Context);
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function StartDialogue *******************************

// ********** Begin Class UDialogQuestSubsystem Function StartQuest ********************************
struct Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics
{
	struct DialogQuestSubsystem_eventStartQuest_Parms
	{
		UQuestGraphAsset* QuestAsset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestAsset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::NewProp_QuestAsset = { "QuestAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventStartQuest_Parms, QuestAsset), Z_Construct_UClass_UQuestGraphAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DialogQuestSubsystem_eventStartQuest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DialogQuestSubsystem_eventStartQuest_Parms), &Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::NewProp_QuestAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "StartQuest", Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::DialogQuestSubsystem_eventStartQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::DialogQuestSubsystem_eventStartQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execStartQuest)
{
	P_GET_OBJECT(UQuestGraphAsset,Z_Param_QuestAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartQuest(Z_Param_QuestAsset);
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function StartQuest **********************************

// ********** Begin Class UDialogQuestSubsystem Function TriggerDialogueEvent **********************
struct Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics
{
	struct DialogQuestSubsystem_eventTriggerDialogueEvent_Parms
	{
		FGameplayTag EventTag;
		FName EventName;
		UObject* Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::NewProp_EventTag = { "EventTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventTriggerDialogueEvent_Parms, EventTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 133831994
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventTriggerDialogueEvent_Parms, EventName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogQuestSubsystem_eventTriggerDialogueEvent_Parms, Context), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::NewProp_EventTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDialogQuestSubsystem, nullptr, "TriggerDialogueEvent", Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::DialogQuestSubsystem_eventTriggerDialogueEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::DialogQuestSubsystem_eventTriggerDialogueEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDialogQuestSubsystem::execTriggerDialogueEvent)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_EventTag);
	P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
	P_GET_OBJECT(UObject,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerDialogueEvent(Z_Param_EventTag,Z_Param_EventName,Z_Param_Context);
	P_NATIVE_END;
}
// ********** End Class UDialogQuestSubsystem Function TriggerDialogueEvent ************************

// ********** Begin Class UDialogQuestSubsystem ****************************************************
void UDialogQuestSubsystem::StaticRegisterNativesUDialogQuestSubsystem()
{
	UClass* Class = UDialogQuestSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTag", &UDialogQuestSubsystem::execAddTag },
		{ "AdvanceQuestObjective", &UDialogQuestSubsystem::execAdvanceQuestObjective },
		{ "ChooseDialogueOption", &UDialogQuestSubsystem::execChooseDialogueOption },
		{ "CompleteQuest", &UDialogQuestSubsystem::execCompleteQuest },
		{ "ContinueDialogue", &UDialogQuestSubsystem::execContinueDialogue },
		{ "EndDialogue", &UDialogQuestSubsystem::execEndDialogue },
		{ "FailQuest", &UDialogQuestSubsystem::execFailQuest },
		{ "GetAllQuestStates", &UDialogQuestSubsystem::execGetAllQuestStates },
		{ "GetCurrentDialogueLine", &UDialogQuestSubsystem::execGetCurrentDialogueLine },
		{ "GetQuestState", &UDialogQuestSubsystem::execGetQuestState },
		{ "GetVariable", &UDialogQuestSubsystem::execGetVariable },
		{ "HasTag", &UDialogQuestSubsystem::execHasTag },
		{ "IsDialogueActive", &UDialogQuestSubsystem::execIsDialogueActive },
		{ "LoadDialogQuestState", &UDialogQuestSubsystem::execLoadDialogQuestState },
		{ "RemoveTag", &UDialogQuestSubsystem::execRemoveTag },
		{ "SaveDialogQuestState", &UDialogQuestSubsystem::execSaveDialogQuestState },
		{ "SetVariable", &UDialogQuestSubsystem::execSetVariable },
		{ "StartDialogue", &UDialogQuestSubsystem::execStartDialogue },
		{ "StartQuest", &UDialogQuestSubsystem::execStartQuest },
		{ "TriggerDialogueEvent", &UDialogQuestSubsystem::execTriggerDialogueEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogQuestSubsystem;
UClass* UDialogQuestSubsystem::GetPrivateStaticClass()
{
	using TClass = UDialogQuestSubsystem;
	if (!Z_Registration_Info_UClass_UDialogQuestSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DialogQuestSubsystem"),
			Z_Registration_Info_UClass_UDialogQuestSubsystem.InnerSingleton,
			StaticRegisterNativesUDialogQuestSubsystem,
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
	return Z_Registration_Info_UClass_UDialogQuestSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UDialogQuestSubsystem_NoRegister()
{
	return UDialogQuestSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDialogQuestSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DialogQuestSubsystem.h" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueUpdated_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueEnded_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestUpdated_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueEventTriggered_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogueAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogueContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogueSession_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDialogueLine_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestStates_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalVariables_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTags_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialoguePlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDialogueInteractionModeApplied_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviousShowMouseCursor_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviousEnableClickEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviousEnableMouseOverEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviousIgnoreMoveInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviousIgnoreLookInput_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestoreGameAndUIInputMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/DialogQuestSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueEnded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueEventTriggered;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveDialogueAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveDialogueContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveDialogueSession;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentDialogueLine;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestStates_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_QuestStates;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalVariables_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GlobalVariables_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GlobalVariables;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalTags;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DialoguePlayerController;
	static void NewProp_bDialogueInteractionModeApplied_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDialogueInteractionModeApplied;
	static void NewProp_bPreviousShowMouseCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviousShowMouseCursor;
	static void NewProp_bPreviousEnableClickEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviousEnableClickEvents;
	static void NewProp_bPreviousEnableMouseOverEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviousEnableMouseOverEvents;
	static void NewProp_bPreviousIgnoreMoveInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviousIgnoreMoveInput;
	static void NewProp_bPreviousIgnoreLookInput_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviousIgnoreLookInput;
	static void NewProp_bRestoreGameAndUIInputMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreGameAndUIInputMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_AddTag, "AddTag" }, // 1733636006
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_AdvanceQuestObjective, "AdvanceQuestObjective" }, // 2518473174
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_ChooseDialogueOption, "ChooseDialogueOption" }, // 1742297101
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_CompleteQuest, "CompleteQuest" }, // 3631921164
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_ContinueDialogue, "ContinueDialogue" }, // 290174442
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_EndDialogue, "EndDialogue" }, // 4085433856
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_FailQuest, "FailQuest" }, // 1394559587
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_GetAllQuestStates, "GetAllQuestStates" }, // 1638041656
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_GetCurrentDialogueLine, "GetCurrentDialogueLine" }, // 1160643455
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_GetQuestState, "GetQuestState" }, // 1602242978
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_GetVariable, "GetVariable" }, // 2190105920
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_HasTag, "HasTag" }, // 2040367868
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_IsDialogueActive, "IsDialogueActive" }, // 1340005125
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_LoadDialogQuestState, "LoadDialogQuestState" }, // 978178899
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_RemoveTag, "RemoveTag" }, // 2387987129
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_SaveDialogQuestState, "SaveDialogQuestState" }, // 2117526883
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_SetVariable, "SetVariable" }, // 1940292035
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_StartDialogue, "StartDialogue" }, // 3749235170
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_StartQuest, "StartQuest" }, // 3829982827
		{ &Z_Construct_UFunction_UDialogQuestSubsystem_TriggerDialogueEvent, "TriggerDialogueEvent" }, // 386686637
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogQuestSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_OnDialogueUpdated = { "OnDialogueUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogQuestSubsystem, OnDialogueUpdated), Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueUpdated_MetaData), NewProp_OnDialogueUpdated_MetaData) }; // 3411494096
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_OnDialogueEnded = { "OnDialogueEnded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogQuestSubsystem, OnDialogueEnded), Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEndedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueEnded_MetaData), NewProp_OnDialogueEnded_MetaData) }; // 2334431980
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_OnQuestUpdated = { "OnQuestUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogQuestSubsystem, OnQuestUpdated), Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnQuestUpdated_MetaData), NewProp_OnQuestUpdated_MetaData) }; // 3177549851
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_OnDialogueEventTriggered = { "OnDialogueEventTriggered", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogQuestSubsystem, OnDialogueEventTriggered), Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueEventTriggered_MetaData), NewProp_OnDialogueEventTriggered_MetaData) }; // 2524815334
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_ActiveDialogueAsset = { "ActiveDialogueAsset", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogQuestSubsystem, ActiveDialogueAsset), Z_Construct_UClass_UDialogueGraphAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDialogueAsset_MetaData), NewProp_ActiveDialogueAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_ActiveDialogueContext = { "ActiveDialogueContext", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogQuestSubsystem, ActiveDialogueContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDialogueContext_MetaData), NewProp_ActiveDialogueContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_ActiveDialogueSession = { "ActiveDialogueSession", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogQuestSubsystem, ActiveDialogueSession), Z_Construct_UScriptStruct_FDQSDialogueSessionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDialogueSession_MetaData), NewProp_ActiveDialogueSession_MetaData) }; // 3814580495
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_CurrentDialogueLine = { "CurrentDialogueLine", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogQuestSubsystem, CurrentDialogueLine), Z_Construct_UScriptStruct_FDQSActiveDialogueLine, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentDialogueLine_MetaData), NewProp_CurrentDialogueLine_MetaData) }; // 3038726987
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_QuestStates_ValueProp = { "QuestStates", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDQSQuestRuntimeState, METADATA_PARAMS(0, nullptr) }; // 1135250961
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_QuestStates_Key_KeyProp = { "QuestStates_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_QuestStates = { "QuestStates", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogQuestSubsystem, QuestStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestStates_MetaData), NewProp_QuestStates_MetaData) }; // 1135250961
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_GlobalVariables_ValueProp = { "GlobalVariables", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDQSVariableValue, METADATA_PARAMS(0, nullptr) }; // 2378772934
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_GlobalVariables_Key_KeyProp = { "GlobalVariables_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_GlobalVariables = { "GlobalVariables", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogQuestSubsystem, GlobalVariables), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalVariables_MetaData), NewProp_GlobalVariables_MetaData) }; // 2378772934
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_GlobalTags = { "GlobalTags", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogQuestSubsystem, GlobalTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalTags_MetaData), NewProp_GlobalTags_MetaData) }; // 2104890724
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_DialoguePlayerController = { "DialoguePlayerController", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogQuestSubsystem, DialoguePlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialoguePlayerController_MetaData), NewProp_DialoguePlayerController_MetaData) };
void Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bDialogueInteractionModeApplied_SetBit(void* Obj)
{
	((UDialogQuestSubsystem*)Obj)->bDialogueInteractionModeApplied = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bDialogueInteractionModeApplied = { "bDialogueInteractionModeApplied", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogQuestSubsystem), &Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bDialogueInteractionModeApplied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDialogueInteractionModeApplied_MetaData), NewProp_bDialogueInteractionModeApplied_MetaData) };
void Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousShowMouseCursor_SetBit(void* Obj)
{
	((UDialogQuestSubsystem*)Obj)->bPreviousShowMouseCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousShowMouseCursor = { "bPreviousShowMouseCursor", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogQuestSubsystem), &Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousShowMouseCursor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviousShowMouseCursor_MetaData), NewProp_bPreviousShowMouseCursor_MetaData) };
void Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousEnableClickEvents_SetBit(void* Obj)
{
	((UDialogQuestSubsystem*)Obj)->bPreviousEnableClickEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousEnableClickEvents = { "bPreviousEnableClickEvents", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogQuestSubsystem), &Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousEnableClickEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviousEnableClickEvents_MetaData), NewProp_bPreviousEnableClickEvents_MetaData) };
void Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousEnableMouseOverEvents_SetBit(void* Obj)
{
	((UDialogQuestSubsystem*)Obj)->bPreviousEnableMouseOverEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousEnableMouseOverEvents = { "bPreviousEnableMouseOverEvents", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogQuestSubsystem), &Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousEnableMouseOverEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviousEnableMouseOverEvents_MetaData), NewProp_bPreviousEnableMouseOverEvents_MetaData) };
void Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousIgnoreMoveInput_SetBit(void* Obj)
{
	((UDialogQuestSubsystem*)Obj)->bPreviousIgnoreMoveInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousIgnoreMoveInput = { "bPreviousIgnoreMoveInput", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogQuestSubsystem), &Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousIgnoreMoveInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviousIgnoreMoveInput_MetaData), NewProp_bPreviousIgnoreMoveInput_MetaData) };
void Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousIgnoreLookInput_SetBit(void* Obj)
{
	((UDialogQuestSubsystem*)Obj)->bPreviousIgnoreLookInput = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousIgnoreLookInput = { "bPreviousIgnoreLookInput", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogQuestSubsystem), &Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousIgnoreLookInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviousIgnoreLookInput_MetaData), NewProp_bPreviousIgnoreLookInput_MetaData) };
void Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bRestoreGameAndUIInputMode_SetBit(void* Obj)
{
	((UDialogQuestSubsystem*)Obj)->bRestoreGameAndUIInputMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bRestoreGameAndUIInputMode = { "bRestoreGameAndUIInputMode", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDialogQuestSubsystem), &Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bRestoreGameAndUIInputMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestoreGameAndUIInputMode_MetaData), NewProp_bRestoreGameAndUIInputMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogQuestSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_OnDialogueUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_OnDialogueEnded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_OnQuestUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_OnDialogueEventTriggered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_ActiveDialogueAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_ActiveDialogueContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_ActiveDialogueSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_CurrentDialogueLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_QuestStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_QuestStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_QuestStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_GlobalVariables_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_GlobalVariables_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_GlobalVariables,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_GlobalTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_DialoguePlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bDialogueInteractionModeApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousShowMouseCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousEnableClickEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousEnableMouseOverEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousIgnoreMoveInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bPreviousIgnoreLookInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogQuestSubsystem_Statics::NewProp_bRestoreGameAndUIInputMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogQuestSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDialogQuestSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogQuestSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogQuestSubsystem_Statics::ClassParams = {
	&UDialogQuestSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDialogQuestSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDialogQuestSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogQuestSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogQuestSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogQuestSubsystem()
{
	if (!Z_Registration_Info_UClass_UDialogQuestSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogQuestSubsystem.OuterSingleton, Z_Construct_UClass_UDialogQuestSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogQuestSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogQuestSubsystem);
UDialogQuestSubsystem::~UDialogQuestSubsystem() {}
// ********** End Class UDialogQuestSubsystem ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h__Script_DQSRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogQuestSubsystem, UDialogQuestSubsystem::StaticClass, TEXT("UDialogQuestSubsystem"), &Z_Registration_Info_UClass_UDialogQuestSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogQuestSubsystem), 3976598549U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h__Script_DQSRuntime_1025834795(TEXT("/Script/DQSRuntime"),
	Z_CompiledInDeferFile_FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h__Script_DQSRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h__Script_DQSRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
