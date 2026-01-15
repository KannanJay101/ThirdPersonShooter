// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HUDWidgetMain.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHUDWidgetMain() {}

// ********** Begin Cross Module References ********************************************************
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_UHUDWidgetMain();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_UHUDWidgetMain_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHUDWidgetMain ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UHUDWidgetMain;
UClass* UHUDWidgetMain::GetPrivateStaticClass()
{
	using TClass = UHUDWidgetMain;
	if (!Z_Registration_Info_UClass_UHUDWidgetMain.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HUDWidgetMain"),
			Z_Registration_Info_UClass_UHUDWidgetMain.InnerSingleton,
			StaticRegisterNativesUHUDWidgetMain,
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
	return Z_Registration_Info_UClass_UHUDWidgetMain.InnerSingleton;
}
UClass* Z_Construct_UClass_UHUDWidgetMain_NoRegister()
{
	return UHUDWidgetMain::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHUDWidgetMain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUDWidgetMain.h" },
		{ "ModuleRelativePath", "HUDWidgetMain.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UHUDWidgetMain constinit property declarations ***************************
// ********** End Class UHUDWidgetMain constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHUDWidgetMain>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UHUDWidgetMain_Statics
UObject* (*const Z_Construct_UClass_UHUDWidgetMain_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidgetMain_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHUDWidgetMain_Statics::ClassParams = {
	&UHUDWidgetMain::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidgetMain_Statics::Class_MetaDataParams), Z_Construct_UClass_UHUDWidgetMain_Statics::Class_MetaDataParams)
};
void UHUDWidgetMain::StaticRegisterNativesUHUDWidgetMain()
{
}
UClass* Z_Construct_UClass_UHUDWidgetMain()
{
	if (!Z_Registration_Info_UClass_UHUDWidgetMain.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHUDWidgetMain.OuterSingleton, Z_Construct_UClass_UHUDWidgetMain_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHUDWidgetMain.OuterSingleton;
}
UHUDWidgetMain::UHUDWidgetMain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UHUDWidgetMain);
UHUDWidgetMain::~UHUDWidgetMain() {}
// ********** End Class UHUDWidgetMain *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_HUDWidgetMain_h__Script_ThirdPersonShooter_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHUDWidgetMain, UHUDWidgetMain::StaticClass, TEXT("UHUDWidgetMain"), &Z_Registration_Info_UClass_UHUDWidgetMain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHUDWidgetMain), 3613564292U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_HUDWidgetMain_h__Script_ThirdPersonShooter_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_HUDWidgetMain_h__Script_ThirdPersonShooter_3708378062{
	TEXT("/Script/ThirdPersonShooter"),
	Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_HUDWidgetMain_h__Script_ThirdPersonShooter_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_HUDWidgetMain_h__Script_ThirdPersonShooter_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
