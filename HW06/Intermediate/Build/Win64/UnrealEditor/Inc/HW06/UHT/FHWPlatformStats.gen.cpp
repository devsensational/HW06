// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW06/Levels/FHWPlatformStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFHWPlatformStats() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
HW06_API UScriptStruct* Z_Construct_UScriptStruct_FHWPlatformStats();
UPackage* Z_Construct_UPackage__Script_HW06();
// End Cross Module References

// Begin ScriptStruct FHWPlatformStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HWPlatformStats;
class UScriptStruct* FHWPlatformStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HWPlatformStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HWPlatformStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHWPlatformStats, (UObject*)Z_Construct_UPackage__Script_HW06(), TEXT("HWPlatformStats"));
	}
	return Z_Registration_Info_UScriptStruct_HWPlatformStats.OuterSingleton;
}
template<> HW06_API UScriptStruct* StaticStruct<FHWPlatformStats>()
{
	return FHWPlatformStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHWPlatformStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Levels/FHWPlatformStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Levels/FHWPlatformStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Levels/FHWPlatformStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Levels/FHWPlatformStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationReverseDelay_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Levels/FHWPlatformStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxis_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Levels/FHWPlatformStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Platform Settings" },
		{ "ModuleRelativePath", "Levels/FHWPlatformStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationReverseDelay;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHWPlatformStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHWPlatformStats_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHWPlatformStats, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPosition_MetaData), NewProp_StartPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHWPlatformStats_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHWPlatformStats, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementSpeed_MetaData), NewProp_MovementSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHWPlatformStats_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHWPlatformStats, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHWPlatformStats_Statics::NewProp_RotationReverseDelay = { "RotationReverseDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHWPlatformStats, RotationReverseDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationReverseDelay_MetaData), NewProp_RotationReverseDelay_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHWPlatformStats_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHWPlatformStats, RotationAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationAxis_MetaData), NewProp_RotationAxis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHWPlatformStats_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHWPlatformStats, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHWPlatformStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHWPlatformStats_Statics::NewProp_StartPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHWPlatformStats_Statics::NewProp_MovementSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHWPlatformStats_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHWPlatformStats_Statics::NewProp_RotationReverseDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHWPlatformStats_Statics::NewProp_RotationAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHWPlatformStats_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHWPlatformStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHWPlatformStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HW06,
	nullptr,
	&NewStructOps,
	"HWPlatformStats",
	Z_Construct_UScriptStruct_FHWPlatformStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHWPlatformStats_Statics::PropPointers),
	sizeof(FHWPlatformStats),
	alignof(FHWPlatformStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHWPlatformStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHWPlatformStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHWPlatformStats()
{
	if (!Z_Registration_Info_UScriptStruct_HWPlatformStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HWPlatformStats.InnerSingleton, Z_Construct_UScriptStruct_FHWPlatformStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HWPlatformStats.InnerSingleton;
}
// End ScriptStruct FHWPlatformStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_FHWPlatformStats_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FHWPlatformStats::StaticStruct, Z_Construct_UScriptStruct_FHWPlatformStats_Statics::NewStructOps, TEXT("HWPlatformStats"), &Z_Registration_Info_UScriptStruct_HWPlatformStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHWPlatformStats), 1156938426U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_FHWPlatformStats_h_1330299712(TEXT("/Script/HW06"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_FHWPlatformStats_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Levels_FHWPlatformStats_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
