// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraVariableHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AINIAGARAFXPLUGIN_NiagaraVariableHelpers_generated_h
#error "NiagaraVariableHelpers.generated.h already included, missing '#pragma once' in NiagaraVariableHelpers.h"
#endif
#define AINIAGARAFXPLUGIN_NiagaraVariableHelpers_generated_h

#define FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_NiagaraVariableHelpers_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraVariableHelpers(); \
	friend struct Z_Construct_UClass_UNiagaraVariableHelpers_Statics; \
public: \
	DECLARE_CLASS(UNiagaraVariableHelpers, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AINiagaraFXPlugin"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraVariableHelpers)


#define FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_NiagaraVariableHelpers_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraVariableHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraVariableHelpers(UNiagaraVariableHelpers&&); \
	UNiagaraVariableHelpers(const UNiagaraVariableHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraVariableHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraVariableHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraVariableHelpers) \
	NO_API virtual ~UNiagaraVariableHelpers();


#define FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_NiagaraVariableHelpers_h_26_PROLOG
#define FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_NiagaraVariableHelpers_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_NiagaraVariableHelpers_h_29_INCLASS_NO_PURE_DECLS \
	FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_NiagaraVariableHelpers_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AINIAGARAFXPLUGIN_API UClass* StaticClass<class UNiagaraVariableHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_NiagaraVariableHelpers_h


#define FOREACH_ENUM_ENIAGARANAMESPACE(op) \
	op(ENiagaraNamespace::User) \
	op(ENiagaraNamespace::Engine) \
	op(ENiagaraNamespace::Emitter) \
	op(ENiagaraNamespace::Particles) \
	op(ENiagaraNamespace::Script) \
	op(ENiagaraNamespace::System) \
	op(ENiagaraNamespace::Transient) \
	op(ENiagaraNamespace::Render) 

enum class ENiagaraNamespace : uint8;
template<> struct TIsUEnumClass<ENiagaraNamespace> { enum { Value = true }; };
template<> AINIAGARAFXPLUGIN_API UEnum* StaticEnum<ENiagaraNamespace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
