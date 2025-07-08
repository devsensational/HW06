// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW06/Levels/HWRotateActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHWRotateActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
HW06_API UClass* Z_Construct_UClass_AHWPlatformBase();
HW06_API UClass* Z_Construct_UClass_AHWRotateActor();
HW06_API UClass* Z_Construct_UClass_AHWRotateActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW06();
// End Cross Module References

// Begin Class AHWRotateActor
void AHWRotateActor::StaticRegisterNativesAHWRotateActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHWRotateActor);
UClass* Z_Construct_UClass_AHWRotateActor_NoRegister()
{
	return AHWRotateActor::StaticClass();
}
struct Z_Construct_UClass_AHWRotateActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Levels/HWRotateActor.h" },
		{ "ModuleRelativePath", "Levels/HWRotateActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Platform Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rotation speed\n" },
#endif
		{ "ModuleRelativePath", "Levels/HWRotateActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxis_MetaData[] = {
		{ "Category", "Platform Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rotation axis\n" },
#endif
		{ "ModuleRelativePath", "Levels/HWRotateActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotation axis" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHWRotateActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHWRotateActor_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWRotateActor, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHWRotateActor_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHWRotateActor, RotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAxis_MetaData), NewProp_RotationAxis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHWRotateActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWRotateActor_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHWRotateActor_Statics::NewProp_RotationAxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWRotateActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHWRotateActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHWPlatformBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HW06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHWRotateActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHWRotateActor_Statics::ClassParams = {
	&AHWRotateActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHWRotateActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHWRotateActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHWRotateActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AHWRotateActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHWRotateActor()
{
	if (!Z_Registration_Info_UClass_AHWRotateActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHWRotateActor.OuterSingleton, Z_Construct_UClass_AHWRotateActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHWRotateActor.OuterSingleton;
}
template<> HW06_API UClass* StaticClass<AHWRotateActor>()
{
	return AHWRotateActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHWRotateActor);
AHWRotateActor::~AHWRotateActor() {}
// End Class AHWRotateActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWRotateActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHWRotateActor, AHWRotateActor::StaticClass, TEXT("AHWRotateActor"), &Z_Registration_Info_UClass_AHWRotateActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHWRotateActor), 1917775173U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWRotateActor_h_1337013823(TEXT("/Script/HW06"),
	Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWRotateActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_HWRotateActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
