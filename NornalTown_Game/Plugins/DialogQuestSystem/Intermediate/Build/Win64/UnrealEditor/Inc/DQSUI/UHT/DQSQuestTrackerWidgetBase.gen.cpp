// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DQSQuestTrackerWidgetBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDQSQuestTrackerWidgetBase() {}

// ********** Begin Cross Module References ********************************************************
DQSRUNTIME_API UClass* Z_Construct_UClass_UDQSUIThemeAsset_NoRegister();
DQSUI_API UClass* Z_Construct_UClass_UDQSQuestTrackerWidgetBase();
DQSUI_API UClass* Z_Construct_UClass_UDQSQuestTrackerWidgetBase_NoRegister();
DQSUI_API UClass* Z_Construct_UClass_UDQSQuestViewModel_NoRegister();
DQSUI_API UFunction* Z_Construct_UDelegateFunction_DQSUI_DQSQuestWidgetStateChangedSignature__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DQSUI();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FDQSQuestWidgetStateChangedSignature **********************************
struct Z_Construct_UDelegateFunction_DQSUI_DQSQuestWidgetStateChangedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DQSQuestTrackerWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_DQSUI_DQSQuestWidgetStateChangedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_DQSUI, nullptr, "DQSQuestWidgetStateChangedSignature__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DQSUI_DQSQuestWidgetStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_DQSUI_DQSQuestWidgetStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_DQSUI_DQSQuestWidgetStateChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DQSUI_DQSQuestWidgetStateChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDQSQuestWidgetStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& DQSQuestWidgetStateChangedSignature)
{
	DQSQuestWidgetStateChangedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FDQSQuestWidgetStateChangedSignature ************************************

// ********** Begin Class UDQSQuestTrackerWidgetBase Function ApplyResolvedTheme *******************
struct DQSQuestTrackerWidgetBase_eventApplyResolvedTheme_Parms
{
	UDQSUIThemeAsset* Theme;
};
static FName NAME_UDQSQuestTrackerWidgetBase_ApplyResolvedTheme = FName(TEXT("ApplyResolvedTheme"));
void UDQSQuestTrackerWidgetBase::ApplyResolvedTheme(UDQSUIThemeAsset* Theme)
{
	DQSQuestTrackerWidgetBase_eventApplyResolvedTheme_Parms Parms;
	Parms.Theme=Theme;
	UFunction* Func = FindFunctionChecked(NAME_UDQSQuestTrackerWidgetBase_ApplyResolvedTheme);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_ApplyResolvedTheme_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSQuestTrackerWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Theme;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_ApplyResolvedTheme_Statics::NewProp_Theme = { "Theme", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSQuestTrackerWidgetBase_eventApplyResolvedTheme_Parms, Theme), Z_Construct_UClass_UDQSUIThemeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_ApplyResolvedTheme_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_ApplyResolvedTheme_Statics::NewProp_Theme,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_ApplyResolvedTheme_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_ApplyResolvedTheme_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSQuestTrackerWidgetBase, nullptr, "ApplyResolvedTheme", Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_ApplyResolvedTheme_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_ApplyResolvedTheme_Statics::PropPointers), sizeof(DQSQuestTrackerWidgetBase_eventApplyResolvedTheme_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_ApplyResolvedTheme_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_ApplyResolvedTheme_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(DQSQuestTrackerWidgetBase_eventApplyResolvedTheme_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_ApplyResolvedTheme()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_ApplyResolvedTheme_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UDQSQuestTrackerWidgetBase Function ApplyResolvedTheme *********************

// ********** Begin Class UDQSQuestTrackerWidgetBase Function GetResolvedTheme *********************
struct Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_GetResolvedTheme_Statics
{
	struct DQSQuestTrackerWidgetBase_eventGetResolvedTheme_Parms
	{
		UDQSUIThemeAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSQuestTrackerWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_GetResolvedTheme_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DQSQuestTrackerWidgetBase_eventGetResolvedTheme_Parms, ReturnValue), Z_Construct_UClass_UDQSUIThemeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_GetResolvedTheme_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_GetResolvedTheme_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_GetResolvedTheme_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_GetResolvedTheme_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSQuestTrackerWidgetBase, nullptr, "GetResolvedTheme", Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_GetResolvedTheme_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_GetResolvedTheme_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_GetResolvedTheme_Statics::DQSQuestTrackerWidgetBase_eventGetResolvedTheme_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_GetResolvedTheme_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_GetResolvedTheme_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_GetResolvedTheme_Statics::DQSQuestTrackerWidgetBase_eventGetResolvedTheme_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_GetResolvedTheme()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_GetResolvedTheme_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSQuestTrackerWidgetBase::execGetResolvedTheme)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDQSUIThemeAsset**)Z_Param__Result=P_THIS->GetResolvedTheme();
	P_NATIVE_END;
}
// ********** End Class UDQSQuestTrackerWidgetBase Function GetResolvedTheme ***********************

// ********** Begin Class UDQSQuestTrackerWidgetBase Function HandleQuestViewModelStateChanged *****
struct Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_HandleQuestViewModelStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DQSQuestTrackerWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_HandleQuestViewModelStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSQuestTrackerWidgetBase, nullptr, "HandleQuestViewModelStateChanged", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_HandleQuestViewModelStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_HandleQuestViewModelStateChanged_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_HandleQuestViewModelStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_HandleQuestViewModelStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDQSQuestTrackerWidgetBase::execHandleQuestViewModelStateChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleQuestViewModelStateChanged();
	P_NATIVE_END;
}
// ********** End Class UDQSQuestTrackerWidgetBase Function HandleQuestViewModelStateChanged *******

// ********** Begin Class UDQSQuestTrackerWidgetBase Function OnQuestStateChanged ******************
static FName NAME_UDQSQuestTrackerWidgetBase_OnQuestStateChanged = FName(TEXT("OnQuestStateChanged"));
void UDQSQuestTrackerWidgetBase::OnQuestStateChanged()
{
	UFunction* Func = FindFunctionChecked(NAME_UDQSQuestTrackerWidgetBase_OnQuestStateChanged);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_OnQuestStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSQuestTrackerWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_OnQuestStateChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UDQSQuestTrackerWidgetBase, nullptr, "OnQuestStateChanged", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_OnQuestStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_OnQuestStateChanged_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_OnQuestStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_OnQuestStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UDQSQuestTrackerWidgetBase Function OnQuestStateChanged ********************

// ********** Begin Class UDQSQuestTrackerWidgetBase ***********************************************
void UDQSQuestTrackerWidgetBase::StaticRegisterNativesUDQSQuestTrackerWidgetBase()
{
	UClass* Class = UDQSQuestTrackerWidgetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetResolvedTheme", &UDQSQuestTrackerWidgetBase::execGetResolvedTheme },
		{ "HandleQuestViewModelStateChanged", &UDQSQuestTrackerWidgetBase::execHandleQuestViewModelStateChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UDQSQuestTrackerWidgetBase;
UClass* UDQSQuestTrackerWidgetBase::GetPrivateStaticClass()
{
	using TClass = UDQSQuestTrackerWidgetBase;
	if (!Z_Registration_Info_UClass_UDQSQuestTrackerWidgetBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DQSQuestTrackerWidgetBase"),
			Z_Registration_Info_UClass_UDQSQuestTrackerWidgetBase.InnerSingleton,
			StaticRegisterNativesUDQSQuestTrackerWidgetBase,
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
	return Z_Registration_Info_UClass_UDQSQuestTrackerWidgetBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UDQSQuestTrackerWidgetBase_NoRegister()
{
	return UDQSQuestTrackerWidgetBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DQSQuestTrackerWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DQSQuestTrackerWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewModel_MetaData[] = {
		{ "Category", "Dialog Quest System" },
		{ "ModuleRelativePath", "Public/DQSQuestTrackerWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThemeOverride_MetaData[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSQuestTrackerWidgetBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWidgetStateChanged_MetaData[] = {
		{ "Category", "Dialog Quest System|UI" },
		{ "ModuleRelativePath", "Public/DQSQuestTrackerWidgetBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewModel;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ThemeOverride;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWidgetStateChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_ApplyResolvedTheme, "ApplyResolvedTheme" }, // 1507456267
		{ &Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_GetResolvedTheme, "GetResolvedTheme" }, // 4008604944
		{ &Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_HandleQuestViewModelStateChanged, "HandleQuestViewModelStateChanged" }, // 4018613882
		{ &Z_Construct_UFunction_UDQSQuestTrackerWidgetBase_OnQuestStateChanged, "OnQuestStateChanged" }, // 4131421229
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDQSQuestTrackerWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::NewProp_ViewModel = { "ViewModel", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSQuestTrackerWidgetBase, ViewModel), Z_Construct_UClass_UDQSQuestViewModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewModel_MetaData), NewProp_ViewModel_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::NewProp_ThemeOverride = { "ThemeOverride", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSQuestTrackerWidgetBase, ThemeOverride), Z_Construct_UClass_UDQSUIThemeAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThemeOverride_MetaData), NewProp_ThemeOverride_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::NewProp_OnWidgetStateChanged = { "OnWidgetStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDQSQuestTrackerWidgetBase, OnWidgetStateChanged), Z_Construct_UDelegateFunction_DQSUI_DQSQuestWidgetStateChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWidgetStateChanged_MetaData), NewProp_OnWidgetStateChanged_MetaData) }; // 1651539386
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::NewProp_ViewModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::NewProp_ThemeOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::NewProp_OnWidgetStateChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DQSUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::ClassParams = {
	&UDQSQuestTrackerWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDQSQuestTrackerWidgetBase()
{
	if (!Z_Registration_Info_UClass_UDQSQuestTrackerWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDQSQuestTrackerWidgetBase.OuterSingleton, Z_Construct_UClass_UDQSQuestTrackerWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDQSQuestTrackerWidgetBase.OuterSingleton;
}
UDQSQuestTrackerWidgetBase::UDQSQuestTrackerWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDQSQuestTrackerWidgetBase);
UDQSQuestTrackerWidgetBase::~UDQSQuestTrackerWidgetBase() {}
// ********** End Class UDQSQuestTrackerWidgetBase *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h__Script_DQSUI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDQSQuestTrackerWidgetBase, UDQSQuestTrackerWidgetBase::StaticClass, TEXT("UDQSQuestTrackerWidgetBase"), &Z_Registration_Info_UClass_UDQSQuestTrackerWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDQSQuestTrackerWidgetBase), 2574978188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h__Script_DQSUI_59592226(TEXT("/Script/DQSUI"),
	Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h__Script_DQSUI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2406616_Documents_GitHub_TownGame_Project_NornalTown_Game_Plugins_DialogQuestSystem_Source_DQSUI_Public_DQSQuestTrackerWidgetBase_h__Script_DQSUI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
