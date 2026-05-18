// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DQSQuestTrackerWidgetBase.h"

#ifdef DQSUI_DQSQuestTrackerWidgetBase_generated_h
#error "DQSQuestTrackerWidgetBase.generated.h already included, missing '#pragma once' in DQSQuestTrackerWidgetBase.h"
#endif
#define DQSUI_DQSQuestTrackerWidgetBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UDQSUIThemeAsset;

// ********** Begin Delegate FDQSQuestWidgetStateChangedSignature **********************************
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h_9_DELEGATE \
DQSUI_API void FDQSQuestWidgetStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& DQSQuestWidgetStateChangedSignature);


// ********** End Delegate FDQSQuestWidgetStateChangedSignature ************************************

// ********** Begin Class UDQSQuestTrackerWidgetBase ***********************************************
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleQuestViewModelStateChanged); \
	DECLARE_FUNCTION(execGetResolvedTheme);


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h_14_CALLBACK_WRAPPERS
DQSUI_API UClass* Z_Construct_UClass_UDQSQuestTrackerWidgetBase_NoRegister();

#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDQSQuestTrackerWidgetBase(); \
	friend struct Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DQSUI_API UClass* Z_Construct_UClass_UDQSQuestTrackerWidgetBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UDQSQuestTrackerWidgetBase, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DQSUI"), Z_Construct_UClass_UDQSQuestTrackerWidgetBase_NoRegister) \
	DECLARE_SERIALIZER(UDQSQuestTrackerWidgetBase)


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDQSQuestTrackerWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDQSQuestTrackerWidgetBase(UDQSQuestTrackerWidgetBase&&) = delete; \
	UDQSQuestTrackerWidgetBase(const UDQSQuestTrackerWidgetBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDQSQuestTrackerWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDQSQuestTrackerWidgetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDQSQuestTrackerWidgetBase) \
	NO_API virtual ~UDQSQuestTrackerWidgetBase();


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h_11_PROLOG
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h_14_CALLBACK_WRAPPERS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDQSQuestTrackerWidgetBase;

// ********** End Class UDQSQuestTrackerWidgetBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
