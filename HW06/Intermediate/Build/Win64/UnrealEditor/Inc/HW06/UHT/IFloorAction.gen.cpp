// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW06/Interfaces/IFloorAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIFloorAction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
HW06_API UClass* Z_Construct_UClass_UIFloorAction();
HW06_API UClass* Z_Construct_UClass_UIFloorAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW06();
// End Cross Module References

// Begin Interface UIFloorAction
void UIFloorAction::StaticRegisterNativesUIFloorAction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIFloorAction);
UClass* Z_Construct_UClass_UIFloorAction_NoRegister()
{
	return UIFloorAction::StaticClass();
}
struct Z_Construct_UClass_UIFloorAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/IFloorAction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIFloorAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIFloorAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_HW06,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIFloorAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIFloorAction_Statics::ClassParams = {
	&UIFloorAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIFloorAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UIFloorAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIFloorAction()
{
	if (!Z_Registration_Info_UClass_UIFloorAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIFloorAction.OuterSingleton, Z_Construct_UClass_UIFloorAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIFloorAction.OuterSingleton;
}
template<> HW06_API UClass* StaticClass<UIFloorAction>()
{
	return UIFloorAction::StaticClass();
}
UIFloorAction::UIFloorAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIFloorAction);
UIFloorAction::~UIFloorAction() {}
// End Interface UIFloorAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Interfaces_IFloorAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIFloorAction, UIFloorAction::StaticClass, TEXT("UIFloorAction"), &Z_Registration_Info_UClass_UIFloorAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIFloorAction), 2152362164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Interfaces_IFloorAction_h_3559327509(TEXT("/Script/HW06"),
	Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Interfaces_IFloorAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_HW06_HW06_Source_HW06_Interfaces_IFloorAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
