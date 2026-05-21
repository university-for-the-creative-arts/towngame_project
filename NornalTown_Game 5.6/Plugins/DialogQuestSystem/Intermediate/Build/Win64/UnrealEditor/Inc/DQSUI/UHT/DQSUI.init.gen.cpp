// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDQSUI_init() {}
	DQSUI_API UFunction* Z_Construct_UDelegateFunction_DQSUI_DQSDialogueViewModelChangedSignature__DelegateSignature();
	DQSUI_API UFunction* Z_Construct_UDelegateFunction_DQSUI_DQSQuestViewModelChangedSignature__DelegateSignature();
	DQSUI_API UFunction* Z_Construct_UDelegateFunction_DQSUI_DQSQuestWidgetStateChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DQSUI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DQSUI()
	{
		if (!Z_Registration_Info_UPackage__Script_DQSUI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DQSUI_DQSDialogueViewModelChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DQSUI_DQSQuestViewModelChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DQSUI_DQSQuestWidgetStateChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DQSUI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x986FFE17,
				0x1626F6FC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DQSUI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DQSUI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DQSUI(Z_Construct_UPackage__Script_DQSUI, TEXT("/Script/DQSUI"), Z_Registration_Info_UPackage__Script_DQSUI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x986FFE17, 0x1626F6FC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
