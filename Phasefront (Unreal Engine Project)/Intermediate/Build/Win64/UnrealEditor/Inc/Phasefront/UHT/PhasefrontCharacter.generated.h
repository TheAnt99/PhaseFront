// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhasefrontCharacter.h"

#ifdef PHASEFRONT_PhasefrontCharacter_generated_h
#error "PhasefrontCharacter.generated.h already included, missing '#pragma once' in PhasefrontCharacter.h"
#endif
#define PHASEFRONT_PhasefrontCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APhasefrontCharacter *****************************************************
#define FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


PHASEFRONT_API UClass* Z_Construct_UClass_APhasefrontCharacter_NoRegister();

#define FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhasefrontCharacter(); \
	friend struct Z_Construct_UClass_APhasefrontCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHASEFRONT_API UClass* Z_Construct_UClass_APhasefrontCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(APhasefrontCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Phasefront"), Z_Construct_UClass_APhasefrontCharacter_NoRegister) \
	DECLARE_SERIALIZER(APhasefrontCharacter)


#define FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APhasefrontCharacter(APhasefrontCharacter&&) = delete; \
	APhasefrontCharacter(const APhasefrontCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhasefrontCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhasefrontCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APhasefrontCharacter) \
	NO_API virtual ~APhasefrontCharacter();


#define FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontCharacter_h_21_PROLOG
#define FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APhasefrontCharacter;

// ********** End Class APhasefrontCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
