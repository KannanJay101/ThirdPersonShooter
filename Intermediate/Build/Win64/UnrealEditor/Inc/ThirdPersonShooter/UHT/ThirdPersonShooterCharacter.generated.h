// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ThirdPersonShooterCharacter.h"

#ifdef THIRDPERSONSHOOTER_ThirdPersonShooterCharacter_generated_h
#error "ThirdPersonShooterCharacter.generated.h already included, missing '#pragma once' in ThirdPersonShooterCharacter.h"
#endif
#define THIRDPERSONSHOOTER_ThirdPersonShooterCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AThirdPersonShooterCharacter *********************************************
#define FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


struct Z_Construct_UClass_AThirdPersonShooterCharacter_Statics;
THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AThirdPersonShooterCharacter_NoRegister();

#define FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAThirdPersonShooterCharacter(); \
	friend struct ::Z_Construct_UClass_AThirdPersonShooterCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend THIRDPERSONSHOOTER_API UClass* ::Z_Construct_UClass_AThirdPersonShooterCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AThirdPersonShooterCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ThirdPersonShooter"), Z_Construct_UClass_AThirdPersonShooterCharacter_NoRegister) \
	DECLARE_SERIALIZER(AThirdPersonShooterCharacter)


#define FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AThirdPersonShooterCharacter(AThirdPersonShooterCharacter&&) = delete; \
	AThirdPersonShooterCharacter(const AThirdPersonShooterCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AThirdPersonShooterCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AThirdPersonShooterCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AThirdPersonShooterCharacter) \
	NO_API virtual ~AThirdPersonShooterCharacter();


#define FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterCharacter_h_21_PROLOG
#define FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AThirdPersonShooterCharacter;

// ********** End Class AThirdPersonShooterCharacter ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
