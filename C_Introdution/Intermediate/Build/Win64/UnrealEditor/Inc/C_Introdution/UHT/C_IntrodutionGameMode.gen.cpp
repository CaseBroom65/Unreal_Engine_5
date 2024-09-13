// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C_Introdution/C_IntrodutionGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_IntrodutionGameMode() {}

// Begin Cross Module References
C_INTRODUTION_API UClass* Z_Construct_UClass_AC_IntrodutionGameMode();
C_INTRODUTION_API UClass* Z_Construct_UClass_AC_IntrodutionGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_C_Introdution();
// End Cross Module References

// Begin Class AC_IntrodutionGameMode
void AC_IntrodutionGameMode::StaticRegisterNativesAC_IntrodutionGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_IntrodutionGameMode);
UClass* Z_Construct_UClass_AC_IntrodutionGameMode_NoRegister()
{
	return AC_IntrodutionGameMode::StaticClass();
}
struct Z_Construct_UClass_AC_IntrodutionGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "C_IntrodutionGameMode.h" },
		{ "ModuleRelativePath", "C_IntrodutionGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_IntrodutionGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AC_IntrodutionGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_C_Introdution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_IntrodutionGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_IntrodutionGameMode_Statics::ClassParams = {
	&AC_IntrodutionGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_IntrodutionGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_IntrodutionGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_IntrodutionGameMode()
{
	if (!Z_Registration_Info_UClass_AC_IntrodutionGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_IntrodutionGameMode.OuterSingleton, Z_Construct_UClass_AC_IntrodutionGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_IntrodutionGameMode.OuterSingleton;
}
template<> C_INTRODUTION_API UClass* StaticClass<AC_IntrodutionGameMode>()
{
	return AC_IntrodutionGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_IntrodutionGameMode);
AC_IntrodutionGameMode::~AC_IntrodutionGameMode() {}
// End Class AC_IntrodutionGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_C_Introdution_Source_C_Introdution_C_IntrodutionGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_IntrodutionGameMode, AC_IntrodutionGameMode::StaticClass, TEXT("AC_IntrodutionGameMode"), &Z_Registration_Info_UClass_AC_IntrodutionGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_IntrodutionGameMode), 328588350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Introdution_Source_C_Introdution_C_IntrodutionGameMode_h_4209914860(TEXT("/Script/C_Introdution"),
	Z_CompiledInDeferFile_FID_C_Introdution_Source_C_Introdution_C_IntrodutionGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Introdution_Source_C_Introdution_C_IntrodutionGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
