// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/IFloorAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW06_IFloorAction_generated_h
#error "IFloorAction.generated.h already included, missing '#pragma once' in IFloorAction.h"
#endif
#define HW06_IFloorAction_generated_h

#define FID_Repos_HW06_HW06_Source_HW06_Interfaces_IFloorAction_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HW06_API UIFloorAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIFloorAction(UIFloorAction&&); \
	UIFloorAction(const UIFloorAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HW06_API, UIFloorAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIFloorAction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIFloorAction) \
	HW06_API virtual ~UIFloorAction();


#define FID_Repos_HW06_HW06_Source_HW06_Interfaces_IFloorAction_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIFloorAction(); \
	friend struct Z_Construct_UClass_UIFloorAction_Statics; \
public: \
	DECLARE_CLASS(UIFloorAction, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HW06"), HW06_API) \
	DECLARE_SERIALIZER(UIFloorAction)


#define FID_Repos_HW06_HW06_Source_HW06_Interfaces_IFloorAction_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Repos_HW06_HW06_Source_HW06_Interfaces_IFloorAction_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Repos_HW06_HW06_Source_HW06_Interfaces_IFloorAction_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Repos_HW06_HW06_Source_HW06_Interfaces_IFloorAction_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIFloorAction() {} \
public: \
	typedef UIFloorAction UClassType; \
	typedef IIFloorAction ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Repos_HW06_HW06_Source_HW06_Interfaces_IFloorAction_h_10_PROLOG
#define FID_Repos_HW06_HW06_Source_HW06_Interfaces_IFloorAction_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Repos_HW06_HW06_Source_HW06_Interfaces_IFloorAction_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW06_API UClass* StaticClass<class UIFloorAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Repos_HW06_HW06_Source_HW06_Interfaces_IFloorAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
