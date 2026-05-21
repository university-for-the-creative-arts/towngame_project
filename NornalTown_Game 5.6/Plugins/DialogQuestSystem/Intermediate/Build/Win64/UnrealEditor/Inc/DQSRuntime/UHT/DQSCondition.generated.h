// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DQSCondition.h"

#ifdef DQSRUNTIME_DQSCondition_generated_h
#error "DQSCondition.generated.h already included, missing '#pragma once' in DQSCondition.h"
#endif
#define DQSRUNTIME_DQSCondition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UDialogQuestSubsystem;
class UObject;

// ********** Begin Class UDQSCondition ************************************************************
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDescribeCondition); \
	DECLARE_FUNCTION(execEvaluate);


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_24_CALLBACK_WRAPPERS
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_NoRegister();

#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDQSCondition(); \
	friend struct Z_Construct_UClass_UDQSCondition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_NoRegister(); \
public: \
	DECLARE_CLASS2(UDQSCondition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DQSRuntime"), Z_Construct_UClass_UDQSCondition_NoRegister) \
	DECLARE_SERIALIZER(UDQSCondition)


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDQSCondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDQSCondition(UDQSCondition&&) = delete; \
	UDQSCondition(const UDQSCondition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDQSCondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDQSCondition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDQSCondition) \
	NO_API virtual ~UDQSCondition();


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_21_PROLOG
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_24_CALLBACK_WRAPPERS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDQSCondition;

// ********** End Class UDQSCondition **************************************************************

// ********** Begin Class UDQSCondition_HasTag *****************************************************
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_HasTag_NoRegister();

#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDQSCondition_HasTag(); \
	friend struct Z_Construct_UClass_UDQSCondition_HasTag_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_HasTag_NoRegister(); \
public: \
	DECLARE_CLASS2(UDQSCondition_HasTag, UDQSCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DQSRuntime"), Z_Construct_UClass_UDQSCondition_HasTag_NoRegister) \
	DECLARE_SERIALIZER(UDQSCondition_HasTag)


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDQSCondition_HasTag(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDQSCondition_HasTag(UDQSCondition_HasTag&&) = delete; \
	UDQSCondition_HasTag(const UDQSCondition_HasTag&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDQSCondition_HasTag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDQSCondition_HasTag); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDQSCondition_HasTag) \
	NO_API virtual ~UDQSCondition_HasTag();


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_38_PROLOG
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_41_INCLASS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDQSCondition_HasTag;

// ********** End Class UDQSCondition_HasTag *******************************************************

// ********** Begin Class UDQSCondition_BoolVariable ***********************************************
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_BoolVariable_NoRegister();

#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDQSCondition_BoolVariable(); \
	friend struct Z_Construct_UClass_UDQSCondition_BoolVariable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_BoolVariable_NoRegister(); \
public: \
	DECLARE_CLASS2(UDQSCondition_BoolVariable, UDQSCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DQSRuntime"), Z_Construct_UClass_UDQSCondition_BoolVariable_NoRegister) \
	DECLARE_SERIALIZER(UDQSCondition_BoolVariable)


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDQSCondition_BoolVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDQSCondition_BoolVariable(UDQSCondition_BoolVariable&&) = delete; \
	UDQSCondition_BoolVariable(const UDQSCondition_BoolVariable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDQSCondition_BoolVariable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDQSCondition_BoolVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDQSCondition_BoolVariable) \
	NO_API virtual ~UDQSCondition_BoolVariable();


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_54_PROLOG
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_57_INCLASS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDQSCondition_BoolVariable;

// ********** End Class UDQSCondition_BoolVariable *************************************************

// ********** Begin Class UDQSCondition_IntVariable ************************************************
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_IntVariable_NoRegister();

#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDQSCondition_IntVariable(); \
	friend struct Z_Construct_UClass_UDQSCondition_IntVariable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_IntVariable_NoRegister(); \
public: \
	DECLARE_CLASS2(UDQSCondition_IntVariable, UDQSCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DQSRuntime"), Z_Construct_UClass_UDQSCondition_IntVariable_NoRegister) \
	DECLARE_SERIALIZER(UDQSCondition_IntVariable)


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDQSCondition_IntVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDQSCondition_IntVariable(UDQSCondition_IntVariable&&) = delete; \
	UDQSCondition_IntVariable(const UDQSCondition_IntVariable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDQSCondition_IntVariable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDQSCondition_IntVariable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDQSCondition_IntVariable) \
	NO_API virtual ~UDQSCondition_IntVariable();


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_79_PROLOG
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_82_INCLASS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDQSCondition_IntVariable;

// ********** End Class UDQSCondition_IntVariable **************************************************

// ********** Begin Class UDQSCondition_QuestStatus ************************************************
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_QuestStatus_NoRegister();

#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDQSCondition_QuestStatus(); \
	friend struct Z_Construct_UClass_UDQSCondition_QuestStatus_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSCondition_QuestStatus_NoRegister(); \
public: \
	DECLARE_CLASS2(UDQSCondition_QuestStatus, UDQSCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DQSRuntime"), Z_Construct_UClass_UDQSCondition_QuestStatus_NoRegister) \
	DECLARE_SERIALIZER(UDQSCondition_QuestStatus)


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_110_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDQSCondition_QuestStatus(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDQSCondition_QuestStatus(UDQSCondition_QuestStatus&&) = delete; \
	UDQSCondition_QuestStatus(const UDQSCondition_QuestStatus&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDQSCondition_QuestStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDQSCondition_QuestStatus); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDQSCondition_QuestStatus) \
	NO_API virtual ~UDQSCondition_QuestStatus();


#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_107_PROLOG
#define FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_110_INCLASS_NO_PURE_DECLS \
	FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDQSCondition_QuestStatus;

// ********** End Class UDQSCondition_QuestStatus **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Student_Documents_GitHub_TownGame_Project_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSCondition_h

// ********** Begin Enum EDQSIntComparisonOperation ************************************************
#define FOREACH_ENUM_EDQSINTCOMPARISONOPERATION(op) \
	op(EDQSIntComparisonOperation::Equal) \
	op(EDQSIntComparisonOperation::NotEqual) \
	op(EDQSIntComparisonOperation::Greater) \
	op(EDQSIntComparisonOperation::GreaterOrEqual) \
	op(EDQSIntComparisonOperation::Less) \
	op(EDQSIntComparisonOperation::LessOrEqual) 

enum class EDQSIntComparisonOperation : uint8;
template<> struct TIsUEnumClass<EDQSIntComparisonOperation> { enum { Value = true }; };
template<> DQSRUNTIME_API UEnum* StaticEnum<EDQSIntComparisonOperation>();
// ********** End Enum EDQSIntComparisonOperation **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
