// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSSaveGame.h"
#include "DQSTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSSaveGame() {}

// ********** Begin Cross Module References ********************************************************
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSSaveGame();
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSSaveGame_NoRegister();
DQSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDQSSaveSnapshot();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
UPackage* Z_Construct_UPackage__Script_DQSRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDQSSaveGame *************************************************************
void UDQSSaveGame::StaticRegisterNativesUDQSSaveGame()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSSaveGame;
UClass* UDQSSaveGame::GetPrivateStaticClass()
{
	using TClass = UDQSSaveGame;
	if (!Z_Registration_Info_UClass_UDQSSaveGame.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSSaveGame"),
			Z_Registration_Info_UClass_UDQSSaveGame.InnerSingleton,
			StaticRegisterNativesUDQSSaveGame,
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
	return Z_Registration_Info_UClass_UDQSSaveGame.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSSaveGame_NoRegister()
{
	return UDQSSaveGame::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DQSSaveGame.h" },
		{ "ModuleRelativePath", "Public/DQSSaveGame.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSSaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Snapshot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDQSSaveGame_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSSaveGame, Snapshot), Z_Construct_UScriptStruct_FDQSSaveSnapshot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Snapshot_MetaData), NewProp_Snapshot_MetaData) }; // 1289688289
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSSaveGame_Statics::NewProp_Snapshot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSSaveGame_Statics::ClassParams = {
	&UDQSSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDQSSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSSaveGame_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSSaveGame()
{
	if (!Z_Registration_Info_UClass_UDQSSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSSaveGame.OuterSingleton, Z_Construct_UClass_UDQSSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSSaveGame.OuterSingleton;
}
UDQSSaveGame::UDQSSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSSaveGame);
UDQSSaveGame::~UDQSSaveGame() {}
// ********** End Class UDQSSaveGame ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSSaveGame_h__Script_DQSRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSSaveGame, UDQSSaveGame::StaticClass, TEXT("UDQSSaveGame"), &Z_Registration_Info_UClass_UDQSSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSSaveGame), 2838359752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSSaveGame_h__Script_DQSRuntime_1719630239(TEXT("/Script/DQSRuntime"),
	Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSSaveGame_h__Script_DQSRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2504926_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSRuntime_Public_DQSSaveGame_h__Script_DQSRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
