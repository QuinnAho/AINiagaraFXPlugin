// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ExposeNiagaraVariablesBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMaterialInterface;
class UNiagaraComponent;
class UObject;
class UTexture;
class UTextureRenderTarget;
enum class ENiagaraNamespace : uint8;
struct FLinearColor;
struct FNiagaraID;
#ifdef AINIAGARAFXPLUGIN_ExposeNiagaraVariablesBPLibrary_generated_h
#error "ExposeNiagaraVariablesBPLibrary.generated.h already included, missing '#pragma once' in ExposeNiagaraVariablesBPLibrary.h"
#endif
#define AINIAGARAFXPLUGIN_ExposeNiagaraVariablesBPLibrary_generated_h

#define FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_ExposeNiagaraVariablesBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetNiagaraVariableUTexture); \
	DECLARE_FUNCTION(execSetNiagaraVariableMatrix4); \
	DECLARE_FUNCTION(execSetNiagaraVariableID); \
	DECLARE_FUNCTION(execSetNiagaraVariableHalfVec2); \
	DECLARE_FUNCTION(execSetNiagaraVariableHalf); \
	DECLARE_FUNCTION(execSetNiagaraVariableGenericNumeric); \
	DECLARE_FUNCTION(execGetNiagaraComponentByIndex); \
	DECLARE_FUNCTION(execGetNiagaraVariableVec4); \
	DECLARE_FUNCTION(execGetNiagaraVariableVec3); \
	DECLARE_FUNCTION(execGetNiagaraVariableVec2); \
	DECLARE_FUNCTION(execGetNiagaraVariableUTextureRenderTarget); \
	DECLARE_FUNCTION(execGetNiagaraVariableUTexture); \
	DECLARE_FUNCTION(execGetNiagaraVariableUObject); \
	DECLARE_FUNCTION(execGetNiagaraVariableUMaterial); \
	DECLARE_FUNCTION(execGetNiagaraVariableQuat); \
	DECLARE_FUNCTION(execGetNiagaraVariableMatrix4); \
	DECLARE_FUNCTION(execGetNiagaraVariableInt); \
	DECLARE_FUNCTION(execGetNiagaraVariableID); \
	DECLARE_FUNCTION(execGetNiagaraVariableHalfVec2); \
	DECLARE_FUNCTION(execGetNiagaraVariableHalf); \
	DECLARE_FUNCTION(execGetNiagaraVariableGenericNumeric); \
	DECLARE_FUNCTION(execGetNiagaraVariableFloat); \
	DECLARE_FUNCTION(execGetNiagaraVariableColor); \
	DECLARE_FUNCTION(execGetNiagaraVariableBool); \
	DECLARE_FUNCTION(execGetNiagaraVariableActor);


#define FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_ExposeNiagaraVariablesBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExposeNiagaraVariablesBPLibrary(); \
	friend struct Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UExposeNiagaraVariablesBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AINiagaraFXPlugin"), NO_API) \
	DECLARE_SERIALIZER(UExposeNiagaraVariablesBPLibrary)


#define FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_ExposeNiagaraVariablesBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExposeNiagaraVariablesBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExposeNiagaraVariablesBPLibrary(UExposeNiagaraVariablesBPLibrary&&); \
	UExposeNiagaraVariablesBPLibrary(const UExposeNiagaraVariablesBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExposeNiagaraVariablesBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExposeNiagaraVariablesBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExposeNiagaraVariablesBPLibrary) \
	NO_API virtual ~UExposeNiagaraVariablesBPLibrary();


#define FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_ExposeNiagaraVariablesBPLibrary_h_9_PROLOG
#define FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_ExposeNiagaraVariablesBPLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_ExposeNiagaraVariablesBPLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_ExposeNiagaraVariablesBPLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_ExposeNiagaraVariablesBPLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AINIAGARAFXPLUGIN_API UClass* StaticClass<class UExposeNiagaraVariablesBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_ExposeNiagaraVariablesBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
