// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDQSRuntime_init() {}
	DQSRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEndedSignature__DelegateSignature();
	DQSRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature();
	DQSRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature();
	DQSRUNTIME_API UFunction* Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DQSRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DQSRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_DQSRuntime.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEndedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueEventTriggeredSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DQSRuntime_DQSDialogueLineUpdatedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DQSRuntime_DQSQuestUpdatedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DQSRuntime",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE2335218,
				0x1033E46F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DQSRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DQSRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DQSRuntime(Z_Construct_UPackage__Script_DQSRuntime, TEXT("/Script/DQSRuntime"), Z_Registration_Info_UPackage__Script_DQSRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE2335218, 0x1033E46F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
