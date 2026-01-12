// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonShooter_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	THIRDPERSONSHOOTER_API UFunction* Z_Construct_UDelegateFunction_ThirdPersonShooter_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ThirdPersonShooter;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter()
	{
		if (!Z_Registration_Info_UPackage__Script_ThirdPersonShooter.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_ThirdPersonShooter_OnEnemyDied__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/ThirdPersonShooter",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0xAB892883,
			0x12A79296,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ThirdPersonShooter.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_ThirdPersonShooter.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ThirdPersonShooter(Z_Construct_UPackage__Script_ThirdPersonShooter, TEXT("/Script/ThirdPersonShooter"), Z_Registration_Info_UPackage__Script_ThirdPersonShooter, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAB892883, 0x12A79296));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
