// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW06/Levels/HWRandomCreator.h"
#include "HW06/Levels/FHWPlatformStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHWRandomCreator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HW06_API UClass* Z_Construct_UClass_AHWRandomCreator();
HW06_API UClass* Z_Construct_UClass_AHWRandomCreator_NoRegister();
HW06_API UScriptStruct* Z_Construct_UScriptStruct_FHWPlatformStats();
UPackage* Z_Construct_UPackage__Script_HW06();
// End Cross Module References

// Begin Class AHWRandomCreator
void AHWRandomCreator::StaticRegisterNativesAHWRandomCreator()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHWRandomCreator);
UClass* Z_Construct_UClass_AHWRandomCreator_NoRegister()
{
	return AHWRandomCreator::StaticClass();
}
struct Z_Construct_UClass_AHWRandomCreator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Levels/HWRandomCreator.h" },
		{ "ModuleRelativePath", "Levels/HWRandomCreator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformSpawnList_MetaData[] = {
		{ "Category", "Platform Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xec\x83\x9d\xec\x84\xb1\xed\x95\xa0 \xec\x95\xa1\xed\x84\xb0\xec\x9d\x98 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\n" },
#endif
		{ "ModuleRelativePath", "Levels/HWRandomCreator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xeb\xa5\xbc \xed\x86\xb5\xed\x95\xb4 \xec\x83\x9d\xec\x84\xb1\xed\x95\xa0 \xec\x95\xa1\xed\x84\xb0\xec\x9d\x98 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformStats_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Levels/HWRandomCreator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateDelay_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Levels/HWRandomCreator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomPositionRange_MetaData[] = {
		{ "Category", "Platform Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xaa\x87 \xec\xb4\x88 \xed\x9b\x84\xec\x97\x90 \xec\x83\x9d\xec\x84\xb1\xed\x95\xa0\xec\xa7\x80 \xec\x84\xa4\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "Levels/HWRandomCreator.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xaa\x87 \xec\xb4\x88 \xed\x9b\x84\xec\x97\x90 \xec\x83\x9d\xec\x84\xb1\xed\x95\xa0\xec\xa7\x80 \xec\x84\xa4\xec\xa0\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlatformSpawnList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlatformSpawnList;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformStats;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CreateDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomPositionRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHWRandomCreator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHWRandomCreator_Statics::NewProp_PlatformSpawnList_Inner = { "PlatformSpawnList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHWRandomCreator_Statics::NewProp_PlatformSpawnList = { "PlatformSpawnList", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWRandomCreator, PlatformSpawnList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformSpawnList_MetaData), NewProp_PlatformSpawnList_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHWRandomCreator_Statics::NewProp_PlatformStats = { "PlatformStats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWRandomCreator, PlatformStats), Z_Construct_UScriptStruct_FHWPlatformStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformStats_MetaData), NewProp_PlatformStats_MetaData) }; // 1156938426
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHWRandomCreator_Statics::NewProp_CreateDelay = { "CreateDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWRandomCreator, CreateDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateDelay_MetaData), NewProp_CreateDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHWRandomCreator_Statics::NewProp_RandomPositionRange = { "RandomPositionRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWRandomCreator, RandomPositionRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomPositionRange_MetaData), NewProp_RandomPositionRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHWRandomCreator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWRandomCreator_Statics::NewProp_PlatformSpawnList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWRandomCreator_Statics::NewProp_PlatformSpawnList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWRandomCreator_Statics::NewProp_PlatformStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWRandomCreator_Statics::NewProp_CreateDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWRandomCreator_Statics::NewProp_RandomPositionRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWRandomCreator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHWRandomCreator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HW06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWRandomCreator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHWRandomCreator_Statics::ClassParams = {
	&AHWRandomCreator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHWRandomCreator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHWRandomCreator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHWRandomCreator_Statics::Class_MetaDataParams), Z_Construct_UClass_AHWRandomCreator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHWRandomCreator()
{
	if (!Z_Registration_Info_UClass_AHWRandomCreator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHWRandomCreator.OuterSingleton, Z_Construct_UClass_AHWRandomCreator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHWRandomCreator.OuterSingleton;
}
template<> HW06_API UClass* StaticClass<AHWRandomCreator>()
{
	return AHWRandomCreator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHWRandomCreator);
AHWRandomCreator::~AHWRandomCreator() {}
// End Class AHWRandomCreator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWRandomCreator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHWRandomCreator, AHWRandomCreator::StaticClass, TEXT("AHWRandomCreator"), &Z_Registration_Info_UClass_AHWRandomCreator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHWRandomCreator), 1534974834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWRandomCreator_h_124986872(TEXT("/Script/HW06"),
	Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWRandomCreator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWRandomCreator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
