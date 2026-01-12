// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooterGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeThirdPersonShooterGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AThirdPersonShooterGameMode();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AThirdPersonShooterGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AThirdPersonShooterGameMode **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AThirdPersonShooterGameMode;
UClass* AThirdPersonShooterGameMode::GetPrivateStaticClass()
{
	using TClass = AThirdPersonShooterGameMode;
	if (!Z_Registration_Info_UClass_AThirdPersonShooterGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ThirdPersonShooterGameMode"),
			Z_Registration_Info_UClass_AThirdPersonShooterGameMode.InnerSingleton,
			StaticRegisterNativesAThirdPersonShooterGameMode,
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
	return Z_Registration_Info_UClass_AThirdPersonShooterGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AThirdPersonShooterGameMode_NoRegister()
{
	return AThirdPersonShooterGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AThirdPersonShooterGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ThirdPersonShooterGameMode.h" },
		{ "ModuleRelativePath", "ThirdPersonShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AThirdPersonShooterGameMode constinit property declarations **************
// ********** End Class AThirdPersonShooterGameMode constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonShooterGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AThirdPersonShooterGameMode_Statics
UObject* (*const Z_Construct_UClass_AThirdPersonShooterGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonShooterGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonShooterGameMode_Statics::ClassParams = {
	&AThirdPersonShooterGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonShooterGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AThirdPersonShooterGameMode_Statics::Class_MetaDataParams)
};
void AThirdPersonShooterGameMode::StaticRegisterNativesAThirdPersonShooterGameMode()
{
}
UClass* Z_Construct_UClass_AThirdPersonShooterGameMode()
{
	if (!Z_Registration_Info_UClass_AThirdPersonShooterGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonShooterGameMode.OuterSingleton, Z_Construct_UClass_AThirdPersonShooterGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThirdPersonShooterGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AThirdPersonShooterGameMode);
AThirdPersonShooterGameMode::~AThirdPersonShooterGameMode() {}
// ********** End Class AThirdPersonShooterGameMode ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterGameMode_h__Script_ThirdPersonShooter_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonShooterGameMode, AThirdPersonShooterGameMode::StaticClass, TEXT("AThirdPersonShooterGameMode"), &Z_Registration_Info_UClass_AThirdPersonShooterGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonShooterGameMode), 677233949U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterGameMode_h__Script_ThirdPersonShooter_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterGameMode_h__Script_ThirdPersonShooter_2569001201{
	TEXT("/Script/ThirdPersonShooter"),
	Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterGameMode_h__Script_ThirdPersonShooter_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterGameMode_h__Script_ThirdPersonShooter_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
