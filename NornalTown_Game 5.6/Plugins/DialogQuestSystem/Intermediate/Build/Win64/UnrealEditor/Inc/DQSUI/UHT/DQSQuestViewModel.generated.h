// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DQSQuestViewModel.h"

#ifdef DQSUI_DQSQuestViewModel_generated_h
#error "DQSQuestViewModel.generated.h already included, missing '#pragma once' in DQSQuestViewModel.h"
#endif
#define DQSUI_DQSQuestViewModel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

 struct FDQSQuestRuntimeState;
class UObject;
struct FDQSQuestStatusUpdate;

// ********** Begin Delegate FDQSQuestViewModelChangedSignature ************************************
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestViewModel_h_10_DELEGATE \
DQSUI_API void FDQSQuestViewModelChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& DQSQuestViewModelChangedSignature);


// ********** End Delegate FDQSQuestViewModelChangedSignature **************************************

// ********** Begin Class UDQSQuestViewModel *******************************************************
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestViewModel_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleQuestUpdated); \
	DECLARE_FUNCTION(execGetQuestStates); \
	DECLARE_FUNCTION(execGetLatestUpdate); \
	DECLARE_FUNCTION(execInitializeFromWorldContext);


DQSUI_API UClass* Z_Construct_UClass_UDQSQuestViewModel_NoRegister();

#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestViewModel_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDQSQuestViewModel(); \
	friend struct Z_Construct_UClass_UDQSQuestViewModel_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DQSUI_API UClass* Z_Construct_UClass_UDQSQuestViewModel_NoRegister(); \
public: \
	DECLARE_CLASS2(UDQSQuestViewModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DQSUI"), Z_Construct_UClass_UDQSQuestViewModel_NoRegister) \
	DECLARE_SERIALIZER(UDQSQuestViewModel)


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestViewModel_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDQSQuestViewModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDQSQuestViewModel(UDQSQuestViewModel&&) = delete; \
	UDQSQuestViewModel(const UDQSQuestViewModel&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDQSQuestViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDQSQuestViewModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDQSQuestViewModel) \
	NO_API virtual ~UDQSQuestViewModel();


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestViewModel_h_12_PROLOG
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestViewModel_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestViewModel_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestViewModel_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestViewModel_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDQSQuestViewModel;

// ********** End Class UDQSQuestViewModel *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestViewModel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
