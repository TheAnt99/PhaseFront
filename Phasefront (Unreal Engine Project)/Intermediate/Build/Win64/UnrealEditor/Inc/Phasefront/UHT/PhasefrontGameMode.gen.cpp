// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhasefrontGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePhasefrontGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PHASEFRONT_API UClass* Z_Construct_UClass_APhasefrontGameMode();
PHASEFRONT_API UClass* Z_Construct_UClass_APhasefrontGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Phasefront();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APhasefrontGameMode ******************************************************
void APhasefrontGameMode::StaticRegisterNativesAPhasefrontGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APhasefrontGameMode;
UClass* APhasefrontGameMode::GetPrivateStaticClass()
{
	using TClass = APhasefrontGameMode;
	if (!Z_Registration_Info_UClass_APhasefrontGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PhasefrontGameMode"),
			Z_Registration_Info_UClass_APhasefrontGameMode.InnerSingleton,
			StaticRegisterNativesAPhasefrontGameMode,
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
	return Z_Registration_Info_UClass_APhasefrontGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_APhasefrontGameMode_NoRegister()
{
	return APhasefrontGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APhasefrontGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PhasefrontGameMode.h" },
		{ "ModuleRelativePath", "PhasefrontGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhasefrontGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APhasefrontGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Phasefront,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APhasefrontGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APhasefrontGameMode_Statics::ClassParams = {
	&APhasefrontGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APhasefrontGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APhasefrontGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APhasefrontGameMode()
{
	if (!Z_Registration_Info_UClass_APhasefrontGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhasefrontGameMode.OuterSingleton, Z_Construct_UClass_APhasefrontGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APhasefrontGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APhasefrontGameMode);
APhasefrontGameMode::~APhasefrontGameMode() {}
// ********** End Class APhasefrontGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontGameMode_h__Script_Phasefront_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APhasefrontGameMode, APhasefrontGameMode::StaticClass, TEXT("APhasefrontGameMode"), &Z_Registration_Info_UClass_APhasefrontGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhasefrontGameMode), 327039568U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontGameMode_h__Script_Phasefront_388914662(TEXT("/Script/Phasefront"),
	Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontGameMode_h__Script_Phasefront_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_antho_Documents_Unreal_Projects_Phasefront_Source_Phasefront_PhasefrontGameMode_h__Script_Phasefront_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
