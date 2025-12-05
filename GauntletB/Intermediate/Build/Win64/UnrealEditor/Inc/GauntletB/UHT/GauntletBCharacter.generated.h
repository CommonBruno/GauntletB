// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GauntletBCharacter.h"

#ifdef GAUNTLETB_GauntletBCharacter_generated_h
#error "GauntletBCharacter.generated.h already included, missing '#pragma once' in GauntletBCharacter.h"
#endif
#define GAUNTLETB_GauntletBCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGauntletBCharacter ******************************************************
#define FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_GauntletBCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


GAUNTLETB_API UClass* Z_Construct_UClass_AGauntletBCharacter_NoRegister();

#define FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_GauntletBCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGauntletBCharacter(); \
	friend struct Z_Construct_UClass_AGauntletBCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAUNTLETB_API UClass* Z_Construct_UClass_AGauntletBCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AGauntletBCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GauntletB"), Z_Construct_UClass_AGauntletBCharacter_NoRegister) \
	DECLARE_SERIALIZER(AGauntletBCharacter)


#define FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_GauntletBCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGauntletBCharacter(AGauntletBCharacter&&) = delete; \
	AGauntletBCharacter(const AGauntletBCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGauntletBCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGauntletBCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGauntletBCharacter) \
	NO_API virtual ~AGauntletBCharacter();


#define FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_GauntletBCharacter_h_21_PROLOG
#define FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_GauntletBCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_GauntletBCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_GauntletBCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_GauntletBCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGauntletBCharacter;

// ********** End Class AGauntletBCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_GauntletBCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
