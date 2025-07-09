// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW06/Levels/HWRotatePlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHWRotatePlatform() {}

// Begin Cross Module References
HW06_API UClass* Z_Construct_UClass_AHWMovingPlatform();
HW06_API UClass* Z_Construct_UClass_AHWRotatePlatform();
HW06_API UClass* Z_Construct_UClass_AHWRotatePlatform_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW06();
// End Cross Module References

// Begin Class AHWRotatePlatform
void AHWRotatePlatform::StaticRegisterNativesAHWRotatePlatform()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHWRotatePlatform);
UClass* Z_Construct_UClass_AHWRotatePlatform_NoRegister()
{
	return AHWRotatePlatform::StaticClass();
}
struct Z_Construct_UClass_AHWRotatePlatform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Levels/HWRotatePlatform.h" },
		{ "ModuleRelativePath", "Levels/HWRotatePlatform.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHWRotatePlatform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHWRotatePlatform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHWMovingPlatform,
	(UObject* (*)())Z_Construct_UPackage__Script_HW06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWRotatePlatform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHWRotatePlatform_Statics::ClassParams = {
	&AHWRotatePlatform::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHWRotatePlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_AHWRotatePlatform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHWRotatePlatform()
{
	if (!Z_Registration_Info_UClass_AHWRotatePlatform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHWRotatePlatform.OuterSingleton, Z_Construct_UClass_AHWRotatePlatform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHWRotatePlatform.OuterSingleton;
}
template<> HW06_API UClass* StaticClass<AHWRotatePlatform>()
{
	return AHWRotatePlatform::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHWRotatePlatform);
AHWRotatePlatform::~AHWRotatePlatform() {}
// End Class AHWRotatePlatform

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWRotatePlatform_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHWRotatePlatform, AHWRotatePlatform::StaticClass, TEXT("AHWRotatePlatform"), &Z_Registration_Info_UClass_AHWRotatePlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHWRotatePlatform), 1834253161U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWRotatePlatform_h_2606125610(TEXT("/Script/HW06"),
	Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWRotatePlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWRotatePlatform_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
