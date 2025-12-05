// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvQueryContext_Player.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_Player() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
GAUNTLETB_API UClass* Z_Construct_UClass_UEnvQueryContext_Player();
GAUNTLETB_API UClass* Z_Construct_UClass_UEnvQueryContext_Player_NoRegister();
UPackage* Z_Construct_UPackage__Script_GauntletB();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEnvQueryContext_Player **************************************************
void UEnvQueryContext_Player::StaticRegisterNativesUEnvQueryContext_Player()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEnvQueryContext_Player;
UClass* UEnvQueryContext_Player::GetPrivateStaticClass()
{
	using TClass = UEnvQueryContext_Player;
	if (!Z_Registration_Info_UClass_UEnvQueryContext_Player.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EnvQueryContext_Player"),
			Z_Registration_Info_UClass_UEnvQueryContext_Player.InnerSingleton,
			StaticRegisterNativesUEnvQueryContext_Player,
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
	return Z_Registration_Info_UClass_UEnvQueryContext_Player.InnerSingleton;
}
UClass* Z_Construct_UClass_UEnvQueryContext_Player_NoRegister()
{
	return UEnvQueryContext_Player::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEnvQueryContext_Player_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  UEnvQueryContext_Player\n *  Basic EnvQuery Context that returns the first local player\n */" },
#endif
		{ "IncludePath", "Variant_Combat/AI/EnvQueryContext_Player.h" },
		{ "ModuleRelativePath", "Variant_Combat/AI/EnvQueryContext_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UEnvQueryContext_Player\nBasic EnvQuery Context that returns the first local player" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_Player>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvQueryContext_Player_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
	(UObject* (*)())Z_Construct_UPackage__Script_GauntletB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_Player_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_Player_Statics::ClassParams = {
	&UEnvQueryContext_Player::StaticClass,
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
	0x000010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryContext_Player_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryContext_Player()
{
	if (!Z_Registration_Info_UClass_UEnvQueryContext_Player.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryContext_Player.OuterSingleton, Z_Construct_UClass_UEnvQueryContext_Player_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryContext_Player.OuterSingleton;
}
UEnvQueryContext_Player::UEnvQueryContext_Player(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext_Player);
UEnvQueryContext_Player::~UEnvQueryContext_Player() {}
// ********** End Class UEnvQueryContext_Player ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_Variant_Combat_AI_EnvQueryContext_Player_h__Script_GauntletB_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryContext_Player, UEnvQueryContext_Player::StaticClass, TEXT("UEnvQueryContext_Player"), &Z_Registration_Info_UClass_UEnvQueryContext_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryContext_Player), 852533886U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_Variant_Combat_AI_EnvQueryContext_Player_h__Script_GauntletB_3993320151(TEXT("/Script/GauntletB"),
	Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_Variant_Combat_AI_EnvQueryContext_Player_h__Script_GauntletB_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ricca_OneDrive_Documenti_Fork_GauntletB_GauntletB_Source_GauntletB_Variant_Combat_AI_EnvQueryContext_Player_h__Script_GauntletB_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
