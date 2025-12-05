// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GauntletBGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGauntletBGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GAUNTLETB_API UClass* Z_Construct_UClass_AGauntletBGameMode();
GAUNTLETB_API UClass* Z_Construct_UClass_AGauntletBGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GauntletB();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGauntletBGameMode *******************************************************
void AGauntletBGameMode::StaticRegisterNativesAGauntletBGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGauntletBGameMode;
UClass* AGauntletBGameMode::GetPrivateStaticClass()
{
	using TClass = AGauntletBGameMode;
	if (!Z_Registration_Info_UClass_AGauntletBGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GauntletBGameMode"),
			Z_Registration_Info_UClass_AGauntletBGameMode.InnerSingleton,
			StaticRegisterNativesAGauntletBGameMode,
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
	return Z_Registration_Info_UClass_AGauntletBGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AGauntletBGameMode_NoRegister()
{
	return AGauntletBGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGauntletBGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GauntletBGameMode.h" },
		{ "ModuleRelativePath", "GauntletBGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGauntletBGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGauntletBGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GauntletB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGauntletBGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGauntletBGameMode_Statics::ClassParams = {
	&AGauntletBGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGauntletBGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGauntletBGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGauntletBGameMode()
{
	if (!Z_Registration_Info_UClass_AGauntletBGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGauntletBGameMode.OuterSingleton, Z_Construct_UClass_AGauntletBGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGauntletBGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGauntletBGameMode);
AGauntletBGameMode::~AGauntletBGameMode() {}
// ********** End Class AGauntletBGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_GauntletBGameMode_h__Script_GauntletB_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGauntletBGameMode, AGauntletBGameMode::StaticClass, TEXT("AGauntletBGameMode"), &Z_Registration_Info_UClass_AGauntletBGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGauntletBGameMode), 1501260185U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_GauntletBGameMode_h__Script_GauntletB_4198142590(TEXT("/Script/GauntletB"),
	Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_GauntletBGameMode_h__Script_GauntletB_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_GauntletBGameMode_h__Script_GauntletB_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
