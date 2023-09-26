// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02_BDMC/LanzaGuisantes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLanzaGuisantes() {}
// Cross Module References
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_ALanzaGuisantes_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_ALanzaGuisantes();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_APlant();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC();
// End Cross Module References
	void ALanzaGuisantes::StaticRegisterNativesALanzaGuisantes()
	{
	}
	UClass* Z_Construct_UClass_ALanzaGuisantes_NoRegister()
	{
		return ALanzaGuisantes::StaticClass();
	}
	struct Z_Construct_UClass_ALanzaGuisantes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALanzaGuisantes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlant,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALanzaGuisantes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LanzaGuisantes.h" },
		{ "ModuleRelativePath", "LanzaGuisantes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALanzaGuisantes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALanzaGuisantes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALanzaGuisantes_Statics::ClassParams = {
		&ALanzaGuisantes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ALanzaGuisantes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALanzaGuisantes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALanzaGuisantes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALanzaGuisantes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALanzaGuisantes, 3888695502);
	template<> PVZ_USFX_LAB02_BDMC_API UClass* StaticClass<ALanzaGuisantes>()
	{
		return ALanzaGuisantes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALanzaGuisantes(Z_Construct_UClass_ALanzaGuisantes, &ALanzaGuisantes::StaticClass, TEXT("/Script/PVZ_USFX_LAB02_BDMC"), TEXT("ALanzaGuisantes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALanzaGuisantes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
