// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW06/Levels/HWPlatformBase.h"
#include "HW06/Levels/FHWPlatformStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHWPlatformBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
HW06_API UClass* Z_Construct_UClass_AHWPlatformBase();
HW06_API UClass* Z_Construct_UClass_AHWPlatformBase_NoRegister();
HW06_API UClass* Z_Construct_UClass_UIFloorAction_NoRegister();
HW06_API UScriptStruct* Z_Construct_UScriptStruct_FHWPlatformStats();
UPackage* Z_Construct_UPackage__Script_HW06();
// End Cross Module References

// Begin Class AHWPlatformBase
void AHWPlatformBase::StaticRegisterNativesAHWPlatformBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHWPlatformBase);
UClass* Z_Construct_UClass_AHWPlatformBase_NoRegister()
{
	return AHWPlatformBase::StaticClass();
}
struct Z_Construct_UClass_AHWPlatformBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Levels/HWPlatformBase.h" },
		{ "ModuleRelativePath", "Levels/HWPlatformBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformMesh_MetaData[] = {
		{ "Category", "Platform Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\x9e\xab\xed\x8f\xbc \xeb\xa9\x94\xec\x8b\x9c\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Levels/HWPlatformBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\x9e\xab\xed\x8f\xbc \xeb\xa9\x94\xec\x8b\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Platform Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb0\x95\xec\x8a\xa4 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Levels/HWPlatformBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb0\x95\xec\x8a\xa4 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformStats_MetaData[] = {
		{ "Category", "Platform Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\x9e\xab\xed\x8f\xbc \xec\x8a\xa4\xed\x83\xaf\n" },
#endif
		{ "ModuleRelativePath", "Levels/HWPlatformBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\x9e\xab\xed\x8f\xbc \xec\x8a\xa4\xed\x83\xaf" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlatformMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHWPlatformBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWPlatformBase_Statics::NewProp_PlatformMesh = { "PlatformMesh", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWPlatformBase, PlatformMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformMesh_MetaData), NewProp_PlatformMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHWPlatformBase_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWPlatformBase, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHWPlatformBase_Statics::NewProp_PlatformStats = { "PlatformStats", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWPlatformBase, PlatformStats), Z_Construct_UScriptStruct_FHWPlatformStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformStats_MetaData), NewProp_PlatformStats_MetaData) }; // 1156938426
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHWPlatformBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWPlatformBase_Statics::NewProp_PlatformMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWPlatformBase_Statics::NewProp_BoxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWPlatformBase_Statics::NewProp_PlatformStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWPlatformBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHWPlatformBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HW06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWPlatformBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHWPlatformBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIFloorAction_NoRegister, (int32)VTABLE_OFFSET(AHWPlatformBase, IIFloorAction), false },  // 2152362164
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHWPlatformBase_Statics::ClassParams = {
	&AHWPlatformBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHWPlatformBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHWPlatformBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHWPlatformBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AHWPlatformBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHWPlatformBase()
{
	if (!Z_Registration_Info_UClass_AHWPlatformBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHWPlatformBase.OuterSingleton, Z_Construct_UClass_AHWPlatformBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHWPlatformBase.OuterSingleton;
}
template<> HW06_API UClass* StaticClass<AHWPlatformBase>()
{
	return AHWPlatformBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHWPlatformBase);
AHWPlatformBase::~AHWPlatformBase() {}
// End Class AHWPlatformBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWPlatformBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHWPlatformBase, AHWPlatformBase::StaticClass, TEXT("AHWPlatformBase"), &Z_Registration_Info_UClass_AHWPlatformBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHWPlatformBase), 3727944278U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWPlatformBase_h_3427412509(TEXT("/Script/HW06"),
	Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWPlatformBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWPlatformBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
