// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DQSDialogueWidgetBase.h"

#ifdef DQSUI_DQSDialogueWidgetBase_generated_h
#error "DQSDialogueWidgetBase.generated.h already included, missing '#pragma once' in DQSDialogueWidgetBase.h"
#endif
#define DQSUI_DQSDialogueWidgetBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UDQSSpeakerStyleAsset;
class UDQSUIThemeAsset;
class UTexture2D;
enum class ESlateVisibility : uint8;

// ********** Begin Class UDQSDialogueWidgetBase ***************************************************
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleViewModelStateChanged); \
	DECLARE_FUNCTION(execGetChoice2Visibility); \
	DECLARE_FUNCTION(execGetChoice1Visibility); \
	DECLARE_FUNCTION(execIsChoice2Enabled); \
	DECLARE_FUNCTION(execIsChoice1Enabled); \
	DECLARE_FUNCTION(execGetChoice2Text); \
	DECLARE_FUNCTION(execGetChoice1Text); \
	DECLARE_FUNCTION(execGetResolvedTheme); \
	DECLARE_FUNCTION(execGetSpeakerStyle); \
	DECLARE_FUNCTION(execGetSpeakerPortrait); \
	DECLARE_FUNCTION(execGetPortraitVisibility); \
	DECLARE_FUNCTION(execGetResponsesSectionVisibility); \
	DECLARE_FUNCTION(execGetChoiceButtonVisibility); \
	DECLARE_FUNCTION(execGetChoiceDisabledReason); \
	DECLARE_FUNCTION(execIsChoiceEnabled); \
	DECLARE_FUNCTION(execGetChoiceText); \
	DECLARE_FUNCTION(execGetChoiceCount); \
	DECLARE_FUNCTION(execIsContinueButtonEnabled); \
	DECLARE_FUNCTION(execGetContinueButtonVisibility); \
	DECLARE_FUNCTION(execGetDialogueRootVisibility); \
	DECLARE_FUNCTION(execGetDialogueBodyText); \
	DECLARE_FUNCTION(execGetSpeakerNameText); \
	DECLARE_FUNCTION(execChooseDialogueOption); \
	DECLARE_FUNCTION(execContinueDialogue);


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueWidgetBase_h_15_CALLBACK_WRAPPERS
DQSUI_API UClass* Z_Construct_UClass_UDQSDialogueWidgetBase_NoRegister();

#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDQSDialogueWidgetBase(); \
	friend struct Z_Construct_UClass_UDQSDialogueWidgetBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DQSUI_API UClass* Z_Construct_UClass_UDQSDialogueWidgetBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UDQSDialogueWidgetBase, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DQSUI"), Z_Construct_UClass_UDQSDialogueWidgetBase_NoRegister) \
	DECLARE_SERIALIZER(UDQSDialogueWidgetBase)


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDQSDialogueWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDQSDialogueWidgetBase(UDQSDialogueWidgetBase&&) = delete; \
	UDQSDialogueWidgetBase(const UDQSDialogueWidgetBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDQSDialogueWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDQSDialogueWidgetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDQSDialogueWidgetBase) \
	NO_API virtual ~UDQSDialogueWidgetBase();


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueWidgetBase_h_12_PROLOG
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueWidgetBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueWidgetBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueWidgetBase_h_15_CALLBACK_WRAPPERS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueWidgetBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueWidgetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDQSDialogueWidgetBase;

// ********** End Class UDQSDialogueWidgetBase *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSDialogueWidgetBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
