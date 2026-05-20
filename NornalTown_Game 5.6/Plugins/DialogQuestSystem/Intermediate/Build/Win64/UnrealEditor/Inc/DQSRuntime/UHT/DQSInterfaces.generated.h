// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DQSInterfaces.h"

#ifdef DQSRUNTIME_DQSInterfaces_generated_h
#error "DQSInterfaces.generated.h already included, missing '#pragma once' in DQSInterfaces.h"
#endif
#define DQSRUNTIME_DQSInterfaces_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UDialogueGraphAsset;
class UObject;
struct FGameplayTag;

// ********** Begin Interface UDQSDialogueProviderInterface ****************************************
#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UDialogueGraphAsset* GetDialogueAsset_Implementation() const { return NULL; }; \
	DECLARE_FUNCTION(execGetDialogueAsset);


#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_13_CALLBACK_WRAPPERS
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSDialogueProviderInterface_NoRegister();

#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDQSDialogueProviderInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDQSDialogueProviderInterface(UDQSDialogueProviderInterface&&) = delete; \
	UDQSDialogueProviderInterface(const UDQSDialogueProviderInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDQSDialogueProviderInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDQSDialogueProviderInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDQSDialogueProviderInterface) \
	virtual ~UDQSDialogueProviderInterface() = default;


#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDQSDialogueProviderInterface(); \
	friend struct Z_Construct_UClass_UDQSDialogueProviderInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSDialogueProviderInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDQSDialogueProviderInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DQSRuntime"), Z_Construct_UClass_UDQSDialogueProviderInterface_NoRegister) \
	DECLARE_SERIALIZER(UDQSDialogueProviderInterface)


#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDQSDialogueProviderInterface() {} \
public: \
	typedef UDQSDialogueProviderInterface UClassType; \
	typedef IDQSDialogueProviderInterface ThisClass; \
	static UDialogueGraphAsset* Execute_GetDialogueAsset(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_10_PROLOG
#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_13_CALLBACK_WRAPPERS \
	FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDQSDialogueProviderInterface;

// ********** End Interface UDQSDialogueProviderInterface ******************************************

// ********** Begin Interface UDQSEventSourceInterface *********************************************
#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 GetDialogQuestEventDelta_Implementation() const { return 0; }; \
	virtual FGameplayTag GetDialogQuestEventTag_Implementation() const { return FGameplayTag(); }; \
	DECLARE_FUNCTION(execGetDialogQuestEventDelta); \
	DECLARE_FUNCTION(execGetDialogQuestEventTag);


#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_28_CALLBACK_WRAPPERS
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSEventSourceInterface_NoRegister();

#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDQSEventSourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDQSEventSourceInterface(UDQSEventSourceInterface&&) = delete; \
	UDQSEventSourceInterface(const UDQSEventSourceInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDQSEventSourceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDQSEventSourceInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDQSEventSourceInterface) \
	virtual ~UDQSEventSourceInterface() = default;


#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_28_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDQSEventSourceInterface(); \
	friend struct Z_Construct_UClass_UDQSEventSourceInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSEventSourceInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDQSEventSourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DQSRuntime"), Z_Construct_UClass_UDQSEventSourceInterface_NoRegister) \
	DECLARE_SERIALIZER(UDQSEventSourceInterface)


#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_28_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_28_GENERATED_UINTERFACE_BODY() \
	FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_28_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDQSEventSourceInterface() {} \
public: \
	typedef UDQSEventSourceInterface UClassType; \
	typedef IDQSEventSourceInterface ThisClass; \
	static int32 Execute_GetDialogQuestEventDelta(const UObject* O); \
	static FGameplayTag Execute_GetDialogQuestEventTag(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_25_PROLOG
#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_28_CALLBACK_WRAPPERS \
	FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_28_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDQSEventSourceInterface;

// ********** End Interface UDQSEventSourceInterface ***********************************************

// ********** Begin Interface UDQSDialogueEventReceiverInterface ***********************************
#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReceiveDQSDialogueEvent_Implementation(FGameplayTag EventTag, FName EventName, UObject* Context) {}; \
	DECLARE_FUNCTION(execReceiveDQSDialogueEvent);


#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_46_CALLBACK_WRAPPERS
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSDialogueEventReceiverInterface_NoRegister();

#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDQSDialogueEventReceiverInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDQSDialogueEventReceiverInterface(UDQSDialogueEventReceiverInterface&&) = delete; \
	UDQSDialogueEventReceiverInterface(const UDQSDialogueEventReceiverInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDQSDialogueEventReceiverInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDQSDialogueEventReceiverInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDQSDialogueEventReceiverInterface) \
	virtual ~UDQSDialogueEventReceiverInterface() = default;


#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_46_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDQSDialogueEventReceiverInterface(); \
	friend struct Z_Construct_UClass_UDQSDialogueEventReceiverInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSDialogueEventReceiverInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UDQSDialogueEventReceiverInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DQSRuntime"), Z_Construct_UClass_UDQSDialogueEventReceiverInterface_NoRegister) \
	DECLARE_SERIALIZER(UDQSDialogueEventReceiverInterface)


#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_46_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_46_GENERATED_UINTERFACE_BODY() \
	FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_46_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_46_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDQSDialogueEventReceiverInterface() {} \
public: \
	typedef UDQSDialogueEventReceiverInterface UClassType; \
	typedef IDQSDialogueEventReceiverInterface ThisClass; \
	static void Execute_ReceiveDQSDialogueEvent(UObject* O, FGameplayTag EventTag, FName EventName, UObject* Context); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_43_PROLOG
#define FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_46_CALLBACK_WRAPPERS \
	FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h_46_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDQSDialogueEventReceiverInterface;

// ********** End Interface UDQSDialogueEventReceiverInterface *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSInterfaces_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
