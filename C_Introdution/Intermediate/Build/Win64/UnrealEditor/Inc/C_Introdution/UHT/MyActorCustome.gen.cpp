// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C_Introdution/MyActorCustome.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorCustome() {}

// Begin Cross Module References
C_INTRODUTION_API UClass* Z_Construct_UClass_AMyActorCustome();
C_INTRODUTION_API UClass* Z_Construct_UClass_AMyActorCustome_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_C_Introdution();
// End Cross Module References

// Begin Class AMyActorCustome Function ExampleFunction
struct Z_Construct_UFunction_AMyActorCustome_ExampleFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Examples" },
		{ "ModuleRelativePath", "MyActorCustome.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActorCustome_ExampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActorCustome, nullptr, "ExampleFunction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActorCustome_ExampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyActorCustome_ExampleFunction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyActorCustome_ExampleFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyActorCustome_ExampleFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyActorCustome::execExampleFunction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExampleFunction();
	P_NATIVE_END;
}
// End Class AMyActorCustome Function ExampleFunction

// Begin Class AMyActorCustome
void AMyActorCustome::StaticRegisterNativesAMyActorCustome()
{
	UClass* Class = AMyActorCustome::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExampleFunction", &AMyActorCustome::execExampleFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyActorCustome);
UClass* Z_Construct_UClass_AMyActorCustome_NoRegister()
{
	return AMyActorCustome::StaticClass();
}
struct Z_Construct_UClass_AMyActorCustome_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyActorCustome.h" },
		{ "ModuleRelativePath", "MyActorCustome.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExampleFloat_MetaData[] = {
		{ "Category", "Example" },
		{ "ModuleRelativePath", "MyActorCustome.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolVariable_MetaData[] = {
		{ "Category", "Example" },
		{ "ModuleRelativePath", "MyActorCustome.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ExampleFloat;
	static void NewProp_BoolVariable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolVariable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActorCustome_ExampleFunction, "ExampleFunction" }, // 767909061
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActorCustome>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyActorCustome_Statics::NewProp_ExampleFloat = { "ExampleFloat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyActorCustome, ExampleFloat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExampleFloat_MetaData), NewProp_ExampleFloat_MetaData) };
void Z_Construct_UClass_AMyActorCustome_Statics::NewProp_BoolVariable_SetBit(void* Obj)
{
	((AMyActorCustome*)Obj)->BoolVariable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyActorCustome_Statics::NewProp_BoolVariable = { "BoolVariable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyActorCustome), &Z_Construct_UClass_AMyActorCustome_Statics::NewProp_BoolVariable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolVariable_MetaData), NewProp_BoolVariable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyActorCustome_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorCustome_Statics::NewProp_ExampleFloat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyActorCustome_Statics::NewProp_BoolVariable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorCustome_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyActorCustome_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_C_Introdution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorCustome_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyActorCustome_Statics::ClassParams = {
	&AMyActorCustome::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyActorCustome_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorCustome_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyActorCustome_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyActorCustome_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyActorCustome()
{
	if (!Z_Registration_Info_UClass_AMyActorCustome.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyActorCustome.OuterSingleton, Z_Construct_UClass_AMyActorCustome_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyActorCustome.OuterSingleton;
}
template<> C_INTRODUTION_API UClass* StaticClass<AMyActorCustome>()
{
	return AMyActorCustome::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActorCustome);
AMyActorCustome::~AMyActorCustome() {}
// End Class AMyActorCustome

// Begin Registration
struct Z_CompiledInDeferFile_FID_C_Introdution_Source_C_Introdution_MyActorCustome_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyActorCustome, AMyActorCustome::StaticClass, TEXT("AMyActorCustome"), &Z_Registration_Info_UClass_AMyActorCustome, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyActorCustome), 1805109308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Introdution_Source_C_Introdution_MyActorCustome_h_4043076539(TEXT("/Script/C_Introdution"),
	Z_CompiledInDeferFile_FID_C_Introdution_Source_C_Introdution_MyActorCustome_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Introdution_Source_C_Introdution_MyActorCustome_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
