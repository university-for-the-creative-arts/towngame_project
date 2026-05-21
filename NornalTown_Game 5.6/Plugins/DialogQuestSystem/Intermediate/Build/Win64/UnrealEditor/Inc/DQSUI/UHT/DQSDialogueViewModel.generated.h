// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DQSDialogueViewModel.h"

#ifdef DQSUI_DQSDialogueViewModel_generated_h
#error "DQSDialogueViewModel.generated.h already included, missing '#pragma once' in DQSDialogueViewModel.h"
#endif
#define DQSUI_DQSDialogueViewModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
struct FDQSActiveDialogueLine;

// ********** Begin Delegate FDQSDialogueViewModelChangedSignature *********************************
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueViewModel_h_10_DELEGATE \
DQSUI_API void FDQSDialogueViewModelChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& DQSDialogueViewModelChangedSignature);


// ********** End Delegate FDQSDialogueViewModelChangedSignature ***********************************

// ********** Begin Class UDQSDialogueViewModel ****************************************************
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueViewModel_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleDialogueEnded); \
	DECLARE_FUNCTION(execHandleDialogueUpdated); \
	DECLARE_FUNCTION(execGetCurrentLine); \
	DECLARE_FUNCTION(execIsDialogueActive); \
	DECLARE_FUNCTION(execInitializeFromWorldContext);


DQSUI_API UClass* Z_Construct_UClass_UDQSDialogueViewModel_NoRegister();

#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueViewModel_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDQSDialogueViewModel(); \
	friend struct Z_Construct_UClass_UDQSDialogueViewModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DQSUI_API UClass* Z_Construct_UClass_UDQSDialogueViewModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UDQSDialogueViewModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DQSUI"), Z_Construct_UClass_UDQSDialogueViewModel_NoRegister) \
	DECLARE_SERIALIZER(UDQSDialogueViewModel)


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueViewModel_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDQSDialogueViewModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDQSDialogueViewModel(UDQSDialogueViewModel&&) = delete; \
	UDQSDialogueViewModel(const UDQSDialogueViewModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDQSDialogueViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDQSDialogueViewModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDQSDialogueViewModel) \
	NO_API virtual ~UDQSDialogueViewModel();


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueViewModel_h_12_PROLOG
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueViewModel_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueViewModel_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueViewModel_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueViewModel_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDQSDialogueViewModel;

// ********** End Class UDQSDialogueViewModel ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueViewModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
