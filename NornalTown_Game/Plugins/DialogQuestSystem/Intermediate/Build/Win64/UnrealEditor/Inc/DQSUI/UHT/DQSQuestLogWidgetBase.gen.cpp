// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSQuestLogWidgetBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSQuestLogWidgetBase() {}

// ********** Begin Cross Module References ********************************************************
DQSUI_API UClass* Z_Construct_UClass_UDQSQuestLogWidgetBase();
DQSUI_API UClass* Z_Construct_UClass_UDQSQuestLogWidgetBase_NoRegister();
DQSUI_API UClass* Z_Construct_UClass_UDQSQuestTrackerWidgetBase();
UPackage* Z_Construct_UPackage__Script_DQSUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDQSQuestLogWidgetBase ***************************************************
void UDQSQuestLogWidgetBase::StaticRegisterNativesUDQSQuestLogWidgetBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSQuestLogWidgetBase;
UClass* UDQSQuestLogWidgetBase::GetPrivateStaticClass()
{
	using TClass = UDQSQuestLogWidgetBase;
	if (!Z_Registration_Info_UClass_UDQSQuestLogWidgetBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSQuestLogWidgetBase"),
			Z_Registration_Info_UClass_UDQSQuestLogWidgetBase.InnerSingleton,
			StaticRegisterNativesUDQSQuestLogWidgetBase,
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
	return Z_Registration_Info_UClass_UDQSQuestLogWidgetBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSQuestLogWidgetBase_NoRegister()
{
	return UDQSQuestLogWidgetBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSQuestLogWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSQuestLogWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DQSQuestLogWidgetBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSQuestLogWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDQSQuestLogWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDQSQuestTrackerWidgetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestLogWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSQuestLogWidgetBase_Statics::ClassParams = {
	&UDQSQuestLogWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestLogWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSQuestLogWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSQuestLogWidgetBase()
{
	if (!Z_Registration_Info_UClass_UDQSQuestLogWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSQuestLogWidgetBase.OuterSingleton, Z_Construct_UClass_UDQSQuestLogWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSQuestLogWidgetBase.OuterSingleton;
}
UDQSQuestLogWidgetBase::UDQSQuestLogWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSQuestLogWidgetBase);
UDQSQuestLogWidgetBase::~UDQSQuestLogWidgetBase() {}
// ********** End Class UDQSQuestLogWidgetBase *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestLogWidgetBase_h__Script_DQSUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSQuestLogWidgetBase, UDQSQuestLogWidgetBase::StaticClass, TEXT("UDQSQuestLogWidgetBase"), &Z_Registration_Info_UClass_UDQSQuestLogWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSQuestLogWidgetBase), 2950018338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestLogWidgetBase_h__Script_DQSUI_1049567016(TEXT("/Script/DQSUI"),
	Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestLogWidgetBase_h__Script_DQSUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestLogWidgetBase_h__Script_DQSUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
