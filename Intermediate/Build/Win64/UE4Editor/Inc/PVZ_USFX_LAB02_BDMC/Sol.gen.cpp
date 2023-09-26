// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02_BDMC/Sol.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSol() {}
// Cross Module References
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_ASol_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_ASol();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	PVZ_USFX_LAB02_BDMC_API UClass* Z_Construct_UClass_UMovimientoAleatorio_NoRegister();
// End Cross Module References
	void ASol::StaticRegisterNativesASol()
	{
	}
	UClass* Z_Construct_UClass_ASol_NoRegister()
	{
		return ASol::StaticClass();
	}
	struct Z_Construct_UClass_ASol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshSol_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshSol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovimientoAleatorio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovimientoAleatorio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02_BDMC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASol_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sol.h" },
		{ "ModuleRelativePath", "Sol.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASol_Statics::NewProp_MeshSol_MetaData[] = {
		{ "Category", "Sol" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Sol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASol_Statics::NewProp_MeshSol = { "MeshSol", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASol, MeshSol), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASol_Statics::NewProp_MeshSol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASol_Statics::NewProp_MeshSol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASol_Statics::NewProp_MovimientoAleatorio_MetaData[] = {
		{ "Category", "Sol" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Sol.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASol_Statics::NewProp_MovimientoAleatorio = { "MovimientoAleatorio", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASol, MovimientoAleatorio), Z_Construct_UClass_UMovimientoAleatorio_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASol_Statics::NewProp_MovimientoAleatorio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASol_Statics::NewProp_MovimientoAleatorio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASol_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASol_Statics::NewProp_MeshSol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASol_Statics::NewProp_MovimientoAleatorio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASol>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASol_Statics::ClassParams = {
		&ASol::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASol_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASol_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASol()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASol_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASol, 1866171995);
	template<> PVZ_USFX_LAB02_BDMC_API UClass* StaticClass<ASol>()
	{
		return ASol::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASol(Z_Construct_UClass_ASol, &ASol::StaticClass, TEXT("/Script/PVZ_USFX_LAB02_BDMC"), TEXT("ASol"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASol);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
