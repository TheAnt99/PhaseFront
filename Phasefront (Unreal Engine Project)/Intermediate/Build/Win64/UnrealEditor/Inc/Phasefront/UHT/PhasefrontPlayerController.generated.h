// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhasefrontPlayerController.h"

#ifdef PHASEFRONT_PhasefrontPlayerController_generated_h
#error "PhasefrontPlayerController.generated.h already included, missing '#pragma once' in PhasefrontPlayerController.h"
#endif
#define PHASEFRONT_PhasefrontPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APhasefrontPlayerController **********************************************
PHASEFRONT_API UClass* Z_Construct_UClass_APhasefrontPlayerController_NoRegister();

#define FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhasefrontPlayerController(); \
	friend struct Z_Construct_UClass_APhasefrontPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHASEFRONT_API UClass* Z_Construct_UClass_APhasefrontPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(APhasefrontPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Phasefront"), Z_Construct_UClass_APhasefrontPlayerController_NoRegister) \
	DECLARE_SERIALIZER(APhasefrontPlayerController)


#define FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhasefrontPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APhasefrontPlayerController(APhasefrontPlayerController&&) = delete; \
	APhasefrontPlayerController(const APhasefrontPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhasefrontPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhasefrontPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhasefrontPlayerController) \
	NO_API virtual ~APhasefrontPlayerController();


#define FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontPlayerController_h_16_PROLOG
#define FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APhasefrontPlayerController;

// ********** End Class APhasefrontPlayerController ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
