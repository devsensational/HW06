// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Levels/HWPlatformBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW06_HWPlatformBase_generated_h
#error "HWPlatformBase.generated.h already included, missing '#pragma once' in HWPlatformBase.h"
#endif
#define HW06_HWPlatformBase_generated_h

#define FID_Repos_HW06_HW06_Source_HW06_Levels_HWPlatformBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHWPlatformBase(); \
	friend struct Z_Construct_UClass_AHWPlatformBase_Statics; \
public: \
	DECLARE_CLASS(AHWPlatformBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW06"), NO_API) \
	DECLARE_SERIALIZER(AHWPlatformBase) \
	virtual UObject* _getUObject() const override { return const_cast<AHWPlatformBase*>(this); }


#define FID_Repos_HW06_HW06_Source_HW06_Levels_HWPlatformBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHWPlatformBase(AHWPlatformBase&&); \
	AHWPlatformBase(const AHWPlatformBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHWPlatformBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHWPlatformBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHWPlatformBase) \
	NO_API virtual ~AHWPlatformBase();


#define FID_Repos_HW06_HW06_Source_HW06_Levels_HWPlatformBase_h_12_PROLOG
#define FID_Repos_HW06_HW06_Source_HW06_Levels_HWPlatformBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_HW06_HW06_Source_HW06_Levels_HWPlatformBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Repos_HW06_HW06_Source_HW06_Levels_HWPlatformBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW06_API UClass* StaticClass<class AHWPlatformBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_HW06_HW06_Source_HW06_Levels_HWPlatformBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
