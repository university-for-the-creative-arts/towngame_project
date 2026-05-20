// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSAssetFactories.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSAssetFactories() {}

// ********** Begin Cross Module References ********************************************************
DQSEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphAssetFactory();
DQSEDITOR_API UClass* Z_Construct_UClass_UDialogueGraphAssetFactory_NoRegister();
DQSEDITOR_API UClass* Z_Construct_UClass_UQuestGraphAssetFactory();
DQSEDITOR_API UClass* Z_Construct_UClass_UQuestGraphAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_DQSEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UDialogueGraphAssetFactory ***********************************************
void UDialogueGraphAssetFactory::StaticRegisterNativesUDialogueGraphAssetFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDialogueGraphAssetFactory;
UClass* UDialogueGraphAssetFactory::GetPrivateStaticClass()
{
	using TClass = UDialogueGraphAssetFactory;
	if (!Z_Registration_Info_UClass_UDialogueGraphAssetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DialogueGraphAssetFactory"),
			Z_Registration_Info_UClass_UDialogueGraphAssetFactory.InnerSingleton,
			StaticRegisterNativesUDialogueGraphAssetFactory,
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
	return Z_Registration_Info_UClass_UDialogueGraphAssetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UDialogueGraphAssetFactory_NoRegister()
{
	return UDialogueGraphAssetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDialogueGraphAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DQSAssetFactories.h" },
		{ "ModuleRelativePath", "Public/DQSAssetFactories.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueGraphAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogueGraphAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueGraphAssetFactory_Statics::ClassParams = {
	&UDialogueGraphAssetFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueGraphAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueGraphAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueGraphAssetFactory()
{
	if (!Z_Registration_Info_UClass_UDialogueGraphAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueGraphAssetFactory.OuterSingleton, Z_Construct_UClass_UDialogueGraphAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueGraphAssetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueGraphAssetFactory);
UDialogueGraphAssetFactory::~UDialogueGraphAssetFactory() {}
// ********** End Class UDialogueGraphAssetFactory *************************************************

// ********** Begin Class UQuestGraphAssetFactory **************************************************
void UQuestGraphAssetFactory::StaticRegisterNativesUQuestGraphAssetFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQuestGraphAssetFactory;
UClass* UQuestGraphAssetFactory::GetPrivateStaticClass()
{
	using TClass = UQuestGraphAssetFactory;
	if (!Z_Registration_Info_UClass_UQuestGraphAssetFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QuestGraphAssetFactory"),
			Z_Registration_Info_UClass_UQuestGraphAssetFactory.InnerSingleton,
			StaticRegisterNativesUQuestGraphAssetFactory,
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
	return Z_Registration_Info_UClass_UQuestGraphAssetFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UQuestGraphAssetFactory_NoRegister()
{
	return UQuestGraphAssetFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQuestGraphAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DQSAssetFactories.h" },
		{ "ModuleRelativePath", "Public/DQSAssetFactories.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGraphAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQuestGraphAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestGraphAssetFactory_Statics::ClassParams = {
	&UQuestGraphAssetFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGraphAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuestGraphAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuestGraphAssetFactory()
{
	if (!Z_Registration_Info_UClass_UQuestGraphAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestGraphAssetFactory.OuterSingleton, Z_Construct_UClass_UQuestGraphAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuestGraphAssetFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGraphAssetFactory);
UQuestGraphAssetFactory::~UQuestGraphAssetFactory() {}
// ********** End Class UQuestGraphAssetFactory ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSEditor_Public_DQSAssetFactories_h__Script_DQSEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueGraphAssetFactory, UDialogueGraphAssetFactory::StaticClass, TEXT("UDialogueGraphAssetFactory"), &Z_Registration_Info_UClass_UDialogueGraphAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueGraphAssetFactory), 1263463791U) },
		{ Z_Construct_UClass_UQuestGraphAssetFactory, UQuestGraphAssetFactory::StaticClass, TEXT("UQuestGraphAssetFactory"), &Z_Registration_Info_UClass_UQuestGraphAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestGraphAssetFactory), 2892644407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSEditor_Public_DQSAssetFactories_h__Script_DQSEditor_1891751009(TEXT("/Script/DQSEditor"),
	Z_CompiledInDeferFile_FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSEditor_Public_DQSAssetFactories_h__Script_DQSEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2417142_Downloads_TownGame_Project_main_TownGame_Project_main_NornalTown_Game_5_6_Plugins_DialogQuestSystem_Source_DQSEditor_Public_DQSAssetFactories_h__Script_DQSEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
