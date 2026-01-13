// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhasefront_init() {}
	PHASEFRONT_API UFunction* Z_Construct_UDelegateFunction_Phasefront_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Phasefront;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Phasefront()
	{
		if (!Z_Registration_Info_UPackage__Script_Phasefront.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Phasefront_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Phasefront",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3E498A53,
				0x2E4737F4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Phasefront.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Phasefront.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Phasefront(Z_Construct_UPackage__Script_Phasefront, TEXT("/Script/Phasefront"), Z_Registration_Info_UPackage__Script_Phasefront, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3E498A53, 0x2E4737F4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
