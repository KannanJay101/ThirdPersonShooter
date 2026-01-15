// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HUDWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHUDWidget() {}

// ********** Begin Cross Module References ********************************************************
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_UHUDWidget();
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_UHUDWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidgetBlueprint();
UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UHUDWidget ***************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UHUDWidget;
UClass* UHUDWidget::GetPrivateStaticClass()
{
	using TClass = UHUDWidget;
	if (!Z_Registration_Info_UClass_UHUDWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HUDWidget"),
			Z_Registration_Info_UClass_UHUDWidget.InnerSingleton,
			StaticRegisterNativesUHUDWidget,
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
	return Z_Registration_Info_UClass_UHUDWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UHUDWidget_NoRegister()
{
	return UHUDWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUDWidget.h" },
		{ "ModuleRelativePath", "HUDWidget.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UHUDWidget constinit property declarations *******************************
// ********** End Class UHUDWidget constinit property declarations *********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UHUDWidget_Statics
UObject* (*const Z_Construct_UClass_UHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidgetBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHUDWidget_Statics::ClassParams = {
	&UHUDWidget::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UHUDWidget_Statics::Class_MetaDataParams)
};
void UHUDWidget::StaticRegisterNativesUHUDWidget()
{
}
UClass* Z_Construct_UClass_UHUDWidget()
{
	if (!Z_Registration_Info_UClass_UHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHUDWidget.OuterSingleton, Z_Construct_UClass_UHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHUDWidget.OuterSingleton;
}
UHUDWidget::UHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UHUDWidget);
UHUDWidget::~UHUDWidget() {}
// ********** End Class UHUDWidget *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_HUDWidget_h__Script_ThirdPersonShooter_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHUDWidget, UHUDWidget::StaticClass, TEXT("UHUDWidget"), &Z_Registration_Info_UClass_UHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHUDWidget), 1240519070U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_HUDWidget_h__Script_ThirdPersonShooter_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_HUDWidget_h__Script_ThirdPersonShooter_2597526696{
	TEXT("/Script/ThirdPersonShooter"),
	Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_HUDWidget_h__Script_ThirdPersonShooter_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_HUDWidget_h__Script_ThirdPersonShooter_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
