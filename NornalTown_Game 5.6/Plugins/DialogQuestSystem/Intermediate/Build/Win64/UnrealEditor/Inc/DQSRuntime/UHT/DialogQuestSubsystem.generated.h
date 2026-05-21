// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogQuestSubsystem.h"

#ifdef DQSRUNTIME_DialogQuestSubsystem_generated_h
#error "DialogQuestSubsystem.generated.h already included, missing '#pragma once' in DialogQuestSubsystem.h"
#endif
#define DQSRUNTIME_DialogQuestSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UDialogueGraphAsset;
class UObject;
class UQuestGraphAsset;
enum class EDQSStateScope : uint8;
struct FDQSActiveDialogueLine;
struct FDQSQuestRuntimeState;
struct FDQSQuestStatusUpdate;
struct FDQSVariableValue;
struct FGameplayTag;

// ********** Begin Delegate FDQSDialogueLineUpdatedSignature **************************************
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h_14_DELEGATE \
DQSRUNTIME_API void FDQSDialogueLineUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& DQSDialogueLineUpdatedSignature, FDQSActiveDialogueLine const& ActiveLine);


// ********** End Delegate FDQSDialogueLineUpdatedSignature ****************************************

// ********** Begin Delegate FDQSDialogueEndedSignature ********************************************
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h_15_DELEGATE \
DQSRUNTIME_API void FDQSDialogueEndedSignature_DelegateWrapper(const FMulticastScriptDelegate& DQSDialogueEndedSignature);


// ********** End Delegate FDQSDialogueEndedSignature **********************************************

// ********** Begin Delegate FDQSQuestUpdatedSignature *********************************************
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h_16_DELEGATE \
DQSRUNTIME_API void FDQSQuestUpdatedSignature_DelegateWrapper(const FMulticastScriptDelegate& DQSQuestUpdatedSignature, FDQSQuestStatusUpdate const& Update);


// ********** End Delegate FDQSQuestUpdatedSignature ***********************************************

// ********** Begin Delegate FDQSDialogueEventTriggeredSignature ***********************************
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h_17_DELEGATE \
DQSRUNTIME_API void FDQSDialogueEventTriggeredSignature_DelegateWrapper(const FMulticastScriptDelegate& DQSDialogueEventTriggeredSignature, FGameplayTag EventTag, FName EventName, UObject* Context);


// ********** End Delegate FDQSDialogueEventTriggeredSignature *************************************

// ********** Begin Class UDialogQuestSubsystem ****************************************************
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetQuestState); \
	DECLARE_FUNCTION(execGetAllQuestStates); \
	DECLARE_FUNCTION(execGetCurrentDialogueLine); \
	DECLARE_FUNCTION(execIsDialogueActive); \
	DECLARE_FUNCTION(execLoadDialogQuestState); \
	DECLARE_FUNCTION(execSaveDialogQuestState); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execRemoveTag); \
	DECLARE_FUNCTION(execAddTag); \
	DECLARE_FUNCTION(execGetVariable); \
	DECLARE_FUNCTION(execSetVariable); \
	DECLARE_FUNCTION(execTriggerDialogueEvent); \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execFailQuest); \
	DECLARE_FUNCTION(execAdvanceQuestObjective); \
	DECLARE_FUNCTION(execStartQuest); \
	DECLARE_FUNCTION(execEndDialogue); \
	DECLARE_FUNCTION(execChooseDialogueOption); \
	DECLARE_FUNCTION(execContinueDialogue); \
	DECLARE_FUNCTION(execStartDialogue);


DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogQuestSubsystem_NoRegister();

#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogQuestSubsystem(); \
	friend struct Z_Construct_UClass_UDialogQuestSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DQSRUNTIME_API UClass* Z_Construct_UClass_UDialogQuestSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UDialogQuestSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DQSRuntime"), Z_Construct_UClass_UDialogQuestSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UDialogQuestSubsystem)


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDialogQuestSubsystem(UDialogQuestSubsystem&&) = delete; \
	UDialogQuestSubsystem(const UDialogQuestSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogQuestSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogQuestSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDialogQuestSubsystem) \
	NO_API virtual ~UDialogQuestSubsystem();


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h_19_PROLOG
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDialogQuestSubsystem;

// ********** End Class UDialogQuestSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DialogQuestSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
