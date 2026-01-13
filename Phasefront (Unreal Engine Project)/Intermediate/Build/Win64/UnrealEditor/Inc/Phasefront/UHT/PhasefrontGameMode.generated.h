// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhasefrontGameMode.h"

#ifdef PHASEFRONT_PhasefrontGameMode_generated_h
#error "PhasefrontGameMode.generated.h already included, missing '#pragma once' in PhasefrontGameMode.h"
#endif
#define PHASEFRONT_PhasefrontGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APhasefrontGameMode ******************************************************
PHASEFRONT_API UClass* Z_Construct_UClass_APhasefrontGameMode_NoRegister();

#define FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhasefrontGameMode(); \
	friend struct Z_Construct_UClass_APhasefrontGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHASEFRONT_API UClass* Z_Construct_UClass_APhasefrontGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(APhasefrontGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Phasefront"), Z_Construct_UClass_APhasefrontGameMode_NoRegister) \
	DECLARE_SERIALIZER(APhasefrontGameMode)


#define FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APhasefrontGameMode(APhasefrontGameMode&&) = delete; \
	APhasefrontGameMode(const APhasefrontGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhasefrontGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhasefrontGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APhasefrontGameMode) \
	NO_API virtual ~APhasefrontGameMode();


#define FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontGameMode_h_12_PROLOG
#define FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APhasefrontGameMode;

// ********** End Class APhasefrontGameMode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
