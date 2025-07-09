// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW06/Levels/HWMovingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHWMovingPlatform() {}

// Begin Cross Module References
HW06_API UClass* Z_Construct_UClass_AHWMovingPlatform();
HW06_API UClass* Z_Construct_UClass_AHWMovingPlatform_NoRegister();
HW06_API UClass* Z_Construct_UClass_AHWPlatformBase();
UPackage* Z_Construct_UPackage__Script_HW06();
// End Cross Module References

// Begin Class AHWMovingPlatform
void AHWMovingPlatform::StaticRegisterNativesAHWMovingPlatform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHWMovingPlatform);
UClass* Z_Construct_UClass_AHWMovingPlatform_NoRegister()
{
	return AHWMovingPlatform::StaticClass();
}
struct Z_Construct_UClass_AHWMovingPlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Levels/HWMovingPlatform.h" },
		{ "ModuleRelativePath", "Levels/HWMovingPlatform.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHWMovingPlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHWMovingPlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHWPlatformBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWMovingPlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHWMovingPlatform_Statics::ClassParams = {
	&AHWMovingPlatform::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHWMovingPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AHWMovingPlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHWMovingPlatform()
{
	if (!Z_Registration_Info_UClass_AHWMovingPlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHWMovingPlatform.OuterSingleton, Z_Construct_UClass_AHWMovingPlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHWMovingPlatform.OuterSingleton;
}
template<> HW06_API UClass* StaticClass<AHWMovingPlatform>()
{
	return AHWMovingPlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHWMovingPlatform);
AHWMovingPlatform::~AHWMovingPlatform() {}
// End Class AHWMovingPlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWMovingPlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHWMovingPlatform, AHWMovingPlatform::StaticClass, TEXT("AHWMovingPlatform"), &Z_Registration_Info_UClass_AHWMovingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHWMovingPlatform), 1602633680U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWMovingPlatform_h_634789842(TEXT("/Script/HW06"),
	Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWMovingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWMovingPlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
