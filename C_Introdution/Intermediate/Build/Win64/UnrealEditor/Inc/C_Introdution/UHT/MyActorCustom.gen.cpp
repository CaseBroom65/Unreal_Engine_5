// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C_Introdution/MyActorCustom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorCustom() {}

// Begin Cross Module References
C_INTRODUTION_API UClass* Z_Construct_UClass_AMyActorCustom();
C_INTRODUTION_API UClass* Z_Construct_UClass_AMyActorCustom_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_C_Introdution();
// End Cross Module References

// Begin Class AMyActorCustom
void AMyActorCustom::StaticRegisterNativesAMyActorCustom()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActorCustom);
UClass* Z_Construct_UClass_AMyActorCustom_NoRegister()
{
	return AMyActorCustom::StaticClass();
}
struct Z_Construct_UClass_AMyActorCustom_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorCustom.h" },
		{ "ModuleRelativePath", "MyActorCustom.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorCustom>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyActorCustom_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_C_Introdution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorCustom_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActorCustom_Statics::ClassParams = {
	&AMyActorCustom::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorCustom_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActorCustom_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActorCustom()
{
	if (!Z_Registration_Info_UClass_AMyActorCustom.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActorCustom.OuterSingleton, Z_Construct_UClass_AMyActorCustom_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActorCustom.OuterSingleton;
}
template<> C_INTRODUTION_API UClass* StaticClass<AMyActorCustom>()
{
	return AMyActorCustom::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorCustom);
AMyActorCustom::~AMyActorCustom() {}
// End Class AMyActorCustom

// Begin Registration
struct Z_CompiledInDeferFile_FID_C_Introdution_Source_C_Introdution_MyActorCustom_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActorCustom, AMyActorCustom::StaticClass, TEXT("AMyActorCustom"), &Z_Registration_Info_UClass_AMyActorCustom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActorCustom), 2630825804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Introdution_Source_C_Introdution_MyActorCustom_h_304171653(TEXT("/Script/C_Introdution"),
	Z_CompiledInDeferFile_FID_C_Introdution_Source_C_Introdution_MyActorCustom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Introdution_Source_C_Introdution_MyActorCustom_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
