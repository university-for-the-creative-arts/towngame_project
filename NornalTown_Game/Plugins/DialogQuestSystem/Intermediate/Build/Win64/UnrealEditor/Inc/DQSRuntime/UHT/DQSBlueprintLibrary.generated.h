// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DQSBlueprintLibrary.h"

#ifdef DQSRUNTIME_DQSBlueprintLibrary_generated_h
#error "DQSBlueprintLibrary.generated.h already included, missing '#pragma once' in DQSBlueprintLibrary.h"
#endif
#define DQSRUNTIME_DQSBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UDialogQuestSubsystem;
class UDialogueGraphAsset;
class UObject;

// ********** Begin Class UDQSBlueprintLibrary *****************************************************
#define FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResolveDialogueFromProvider); \
	DECLARE_FUNCTION(execStartDialogueFromProvider); \
	DECLARE_FUNCTION(execGetDialogQuestSubsystem);


DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSBlueprintLibrary_NoRegister();

#define FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDQSBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDQSBlueprintLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSBlueprintLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UDQSBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DQSRuntime"), Z_Construct_UClass_UDQSBlueprintLibrary_NoRegister) \
	DECLARE_SERIALIZER(UDQSBlueprintLibrary)


#define FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDQSBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDQSBlueprintLibrary(UDQSBlueprintLibrary&&) = delete; \
	UDQSBlueprintLibrary(const UDQSBlueprintLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDQSBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDQSBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDQSBlueprintLibrary) \
	NO_API virtual ~UDQSBlueprintLibrary();


#define FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSBlueprintLibrary_h_10_PROLOG
#define FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSBlueprintLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSBlueprintLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSBlueprintLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSBlueprintLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDQSBlueprintLibrary;

// ********** End Class UDQSBlueprintLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSBlueprintLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
