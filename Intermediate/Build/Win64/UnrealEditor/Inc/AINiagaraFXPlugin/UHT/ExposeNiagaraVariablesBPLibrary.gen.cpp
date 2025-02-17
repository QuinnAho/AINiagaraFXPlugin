// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AINiagaraFXPlugin/Public/ExposeNiagaraVariablesBPLibrary.h"
#include "Niagara/Public/NiagaraTypes.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Public/Materials/MaterialInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExposeNiagaraVariablesBPLibrary() {}

// Begin Cross Module References
AINIAGARAFXPLUGIN_API UClass* Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary();
AINIAGARAFXPLUGIN_API UClass* Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary_NoRegister();
AINIAGARAFXPLUGIN_API UEnum* Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraID();
UPackage* Z_Construct_UPackage__Script_AINiagaraFXPlugin();
// End Cross Module References

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraComponentByIndex
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraComponentByIndex_Parms
	{
		int32 Index;
		TArray<UNiagaraComponent*> NiagaraComponents;
		UNiagaraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Editor|Niagara" },
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NiagaraComponents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraComponentByIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::NewProp_NiagaraComponents_Inner = { "NiagaraComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::NewProp_NiagaraComponents = { "NiagaraComponents", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraComponentByIndex_Parms, NiagaraComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponents_MetaData), NewProp_NiagaraComponents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraComponentByIndex_Parms, ReturnValue), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::NewProp_NiagaraComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::NewProp_NiagaraComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraComponentByIndex", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraComponentByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraComponentByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraComponentByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_TARRAY_REF(UNiagaraComponent*,Z_Param_Out_NiagaraComponents);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UNiagaraComponent**)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraComponentByIndex(Z_Param_Index,Z_Param_Out_NiagaraComponents);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraComponentByIndex

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableActor
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableActor_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		AActor* OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Actor\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableActor_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableActor_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableActor_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableActor_Parms, OutValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableActor_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableActor", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableActor)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_OBJECT_REF(AActor,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableActor(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,P_ARG_GC_BARRIER(Z_Param_Out_OutValue));
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableActor

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableBool
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableBool_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		bool OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bool\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static void NewProp_OutValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableBool_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableBool_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableBool_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_OutValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableBool_Parms*)Obj)->OutValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableBool_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_OutValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableBool_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableBool", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableBool)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_UBOOL_REF(Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableBool(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableBool

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableColor
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableColor_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		FLinearColor OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Color\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableColor_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableColor_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableColor_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableColor_Parms, OutValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableColor_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableColor", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableColor)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableColor(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableColor

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableFloat
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableFloat_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		float OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Float\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Float" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableFloat_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableFloat_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableFloat_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableFloat_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableFloat_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableFloat", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableFloat)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableFloat(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableFloat

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableGenericNumeric
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableGenericNumeric_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		float OutValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// GenericNumeric\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GenericNumeric" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableGenericNumeric_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableGenericNumeric_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableGenericNumeric_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableGenericNumeric_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableGenericNumeric_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableGenericNumeric", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableGenericNumeric_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableGenericNumeric_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableGenericNumeric)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableGenericNumeric(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableGenericNumeric

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableHalf
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalf_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		float OutValue;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Half\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Half" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalf_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalf_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalf_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalf_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalf_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableHalf", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableHalf)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableHalf(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableHalf

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableHalfVec2
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalfVec2_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		FVector2D OutValue;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// HalfVec2\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HalfVec2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalfVec2_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalfVec2_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalfVec2_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalfVec2_Parms, OutValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalfVec2_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableHalfVec2", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalfVec2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableHalfVec2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableHalfVec2)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableHalfVec2(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableHalfVec2

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableID
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableID_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		FNiagaraID OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ID\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableID_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableID_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableID_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableID_Parms, OutValue), Z_Construct_UScriptStruct_FNiagaraID, METADATA_PARAMS(0, nullptr) }; // 978329198
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableID_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableID", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableID)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_STRUCT_REF(FNiagaraID,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableID(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableID

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableInt
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableInt_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		int32 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Int\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Int" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableInt_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableInt_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableInt_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableInt_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableInt_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableInt_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableInt", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableInt)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableInt(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableInt

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableMatrix4
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics
{
	struct FMatrix
	{
		FPlane XPlane;
		FPlane YPlane;
		FPlane ZPlane;
		FPlane WPlane;
	};

	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableMatrix4_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		FMatrix OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Matrix4\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Matrix4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableMatrix4_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableMatrix4_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableMatrix4_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableMatrix4_Parms, OutValue), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableMatrix4_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableMatrix4_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableMatrix4", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableMatrix4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableMatrix4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableMatrix4)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_STRUCT_REF(FMatrix,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableMatrix4(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableMatrix4

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableQuat
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableQuat_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		FQuat OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Quat\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quat" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableQuat_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableQuat_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableQuat_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableQuat_Parms, OutValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableQuat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableQuat_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableQuat", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableQuat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableQuat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableQuat)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_STRUCT_REF(FQuat,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableQuat(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableQuat

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableUMaterial
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUMaterial_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		UMaterialInterface* OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UMaterial\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMaterial" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUMaterial_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUMaterial_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUMaterial_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUMaterial_Parms, OutValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUMaterial_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUMaterial_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableUMaterial", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableUMaterial)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_OBJECT_REF(UMaterialInterface,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableUMaterial(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,P_ARG_GC_BARRIER(Z_Param_Out_OutValue));
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableUMaterial

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableUObject
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUObject_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		UObject* OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UObject\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UObject" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUObject_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUObject_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUObject_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUObject_Parms, OutValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUObject_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableUObject", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableUObject)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_OBJECT_REF(UObject,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableUObject(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,P_ARG_GC_BARRIER(Z_Param_Out_OutValue));
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableUObject

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableUTexture
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTexture_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		UTexture* OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UTexture\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UTexture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTexture_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTexture_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTexture_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTexture_Parms, OutValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTexture_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableUTexture", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableUTexture)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_OBJECT_REF(UTexture,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableUTexture(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,P_ARG_GC_BARRIER(Z_Param_Out_OutValue));
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableUTexture

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableUTextureRenderTarget
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTextureRenderTarget_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		UTextureRenderTarget* OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UTextureRenderTarget\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UTextureRenderTarget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTextureRenderTarget_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTextureRenderTarget_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTextureRenderTarget_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTextureRenderTarget_Parms, OutValue), Z_Construct_UClass_UTextureRenderTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTextureRenderTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTextureRenderTarget_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableUTextureRenderTarget", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTextureRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableUTextureRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableUTextureRenderTarget)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_OBJECT_REF(UTextureRenderTarget,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableUTextureRenderTarget(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,P_ARG_GC_BARRIER(Z_Param_Out_OutValue));
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableUTextureRenderTarget

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableVec2
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec2_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		FVector2D OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vec2\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vec2" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec2_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec2_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec2_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec2_Parms, OutValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec2_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec2_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableVec2", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableVec2)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableVec2(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableVec2

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableVec3
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec3_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		FVector OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vec3\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vec3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec3_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec3_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec3_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec3_Parms, OutValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec3_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec3_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableVec3", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec3_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec3_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableVec3)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableVec3(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableVec3

// Begin Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableVec4
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec4_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		FVector4 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Vec4\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vec4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec4_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec4_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec4_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec4_Parms, OutValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec4_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec4_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "GetNiagaraVariableVec4", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::ExposeNiagaraVariablesBPLibrary_eventGetNiagaraVariableVec4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableVec4)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_STRUCT_REF(FVector4,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableVec4(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function GetNiagaraVariableVec4

// Begin Class UExposeNiagaraVariablesBPLibrary Function SetNiagaraVariableGenericNumeric
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableGenericNumeric_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		float Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Functions for setting Niagara variables\n" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions for setting Niagara variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableGenericNumeric_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableGenericNumeric_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableGenericNumeric_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableGenericNumeric_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableGenericNumeric_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableGenericNumeric_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "SetNiagaraVariableGenericNumeric", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableGenericNumeric_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableGenericNumeric_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execSetNiagaraVariableGenericNumeric)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::SetNiagaraVariableGenericNumeric(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function SetNiagaraVariableGenericNumeric

// Begin Class UExposeNiagaraVariablesBPLibrary Function SetNiagaraVariableHalf
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalf_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		float FFloat16;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FFloat16;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalf_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalf_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalf_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::NewProp_FFloat16 = { "FFloat16", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalf_Parms, FFloat16), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalf_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalf_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::NewProp_FFloat16,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "SetNiagaraVariableHalf", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execSetNiagaraVariableHalf)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FFloat16);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::SetNiagaraVariableHalf(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_FFloat16);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function SetNiagaraVariableHalf

// Begin Class UExposeNiagaraVariablesBPLibrary Function SetNiagaraVariableHalfVec2
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalfVec2_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		FVector2D Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalfVec2_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalfVec2_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalfVec2_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalfVec2_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalfVec2_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalfVec2_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "SetNiagaraVariableHalfVec2", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalfVec2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableHalfVec2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execSetNiagaraVariableHalfVec2)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_STRUCT(FVector2D,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::SetNiagaraVariableHalfVec2(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function SetNiagaraVariableHalfVec2

// Begin Class UExposeNiagaraVariablesBPLibrary Function SetNiagaraVariableID
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableID_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		FNiagaraID Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableID_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableID_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableID_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableID_Parms, Value), Z_Construct_UScriptStruct_FNiagaraID, METADATA_PARAMS(0, nullptr) }; // 978329198
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableID_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "SetNiagaraVariableID", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execSetNiagaraVariableID)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_STRUCT(FNiagaraID,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::SetNiagaraVariableID(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function SetNiagaraVariableID

// Begin Class UExposeNiagaraVariablesBPLibrary Function SetNiagaraVariableMatrix4
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics
{
	struct FMatrix
	{
		FPlane XPlane;
		FPlane YPlane;
		FPlane ZPlane;
		FPlane WPlane;
	};

	struct ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableMatrix4_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		FMatrix Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableMatrix4_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableMatrix4_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableMatrix4_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableMatrix4_Parms, Value), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableMatrix4_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableMatrix4_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "SetNiagaraVariableMatrix4", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableMatrix4_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableMatrix4_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execSetNiagaraVariableMatrix4)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_STRUCT(FMatrix,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::SetNiagaraVariableMatrix4(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function SetNiagaraVariableMatrix4

// Begin Class UExposeNiagaraVariablesBPLibrary Function SetNiagaraVariableUTexture
struct Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics
{
	struct ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableUTexture_Parms
	{
		UNiagaraComponent* NiagaraComponent;
		ENiagaraNamespace Namespace;
		FName VariableName;
		UTexture* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Niagara|Variables" },
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Namespace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Namespace;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableUTexture_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComponent_MetaData), NewProp_NiagaraComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::NewProp_Namespace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableUTexture_Parms, Namespace), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, METADATA_PARAMS(0, nullptr) }; // 2703109794
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableUTexture_Parms, VariableName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableUTexture_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableUTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableUTexture_Parms), &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::NewProp_NiagaraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::NewProp_Namespace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::NewProp_Namespace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::NewProp_VariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, nullptr, "SetNiagaraVariableUTexture", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableUTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::ExposeNiagaraVariablesBPLibrary_eventSetNiagaraVariableUTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesBPLibrary::execSetNiagaraVariableUTexture)
{
	P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
	P_GET_ENUM(ENiagaraNamespace,Z_Param_Namespace);
	P_GET_PROPERTY(FNameProperty,Z_Param_VariableName);
	P_GET_OBJECT(UTexture,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UExposeNiagaraVariablesBPLibrary::SetNiagaraVariableUTexture(Z_Param_NiagaraComponent,ENiagaraNamespace(Z_Param_Namespace),Z_Param_VariableName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesBPLibrary Function SetNiagaraVariableUTexture

// Begin Class UExposeNiagaraVariablesBPLibrary
void UExposeNiagaraVariablesBPLibrary::StaticRegisterNativesUExposeNiagaraVariablesBPLibrary()
{
	UClass* Class = UExposeNiagaraVariablesBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNiagaraComponentByIndex", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraComponentByIndex },
		{ "GetNiagaraVariableActor", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableActor },
		{ "GetNiagaraVariableBool", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableBool },
		{ "GetNiagaraVariableColor", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableColor },
		{ "GetNiagaraVariableFloat", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableFloat },
		{ "GetNiagaraVariableGenericNumeric", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableGenericNumeric },
		{ "GetNiagaraVariableHalf", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableHalf },
		{ "GetNiagaraVariableHalfVec2", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableHalfVec2 },
		{ "GetNiagaraVariableID", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableID },
		{ "GetNiagaraVariableInt", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableInt },
		{ "GetNiagaraVariableMatrix4", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableMatrix4 },
		{ "GetNiagaraVariableQuat", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableQuat },
		{ "GetNiagaraVariableUMaterial", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableUMaterial },
		{ "GetNiagaraVariableUObject", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableUObject },
		{ "GetNiagaraVariableUTexture", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableUTexture },
		{ "GetNiagaraVariableUTextureRenderTarget", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableUTextureRenderTarget },
		{ "GetNiagaraVariableVec2", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableVec2 },
		{ "GetNiagaraVariableVec3", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableVec3 },
		{ "GetNiagaraVariableVec4", &UExposeNiagaraVariablesBPLibrary::execGetNiagaraVariableVec4 },
		{ "SetNiagaraVariableGenericNumeric", &UExposeNiagaraVariablesBPLibrary::execSetNiagaraVariableGenericNumeric },
		{ "SetNiagaraVariableHalf", &UExposeNiagaraVariablesBPLibrary::execSetNiagaraVariableHalf },
		{ "SetNiagaraVariableHalfVec2", &UExposeNiagaraVariablesBPLibrary::execSetNiagaraVariableHalfVec2 },
		{ "SetNiagaraVariableID", &UExposeNiagaraVariablesBPLibrary::execSetNiagaraVariableID },
		{ "SetNiagaraVariableMatrix4", &UExposeNiagaraVariablesBPLibrary::execSetNiagaraVariableMatrix4 },
		{ "SetNiagaraVariableUTexture", &UExposeNiagaraVariablesBPLibrary::execSetNiagaraVariableUTexture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExposeNiagaraVariablesBPLibrary);
UClass* Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary_NoRegister()
{
	return UExposeNiagaraVariablesBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ExposeNiagaraVariablesBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraComponentByIndex, "GetNiagaraComponentByIndex" }, // 3600281754
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableActor, "GetNiagaraVariableActor" }, // 3308651658
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableBool, "GetNiagaraVariableBool" }, // 3954946396
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableColor, "GetNiagaraVariableColor" }, // 3037341578
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableFloat, "GetNiagaraVariableFloat" }, // 3737112563
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableGenericNumeric, "GetNiagaraVariableGenericNumeric" }, // 3381885616
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalf, "GetNiagaraVariableHalf" }, // 1007815401
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableHalfVec2, "GetNiagaraVariableHalfVec2" }, // 2244265641
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableID, "GetNiagaraVariableID" }, // 511654305
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableInt, "GetNiagaraVariableInt" }, // 855156027
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableMatrix4, "GetNiagaraVariableMatrix4" }, // 3846696413
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableQuat, "GetNiagaraVariableQuat" }, // 1273689192
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUMaterial, "GetNiagaraVariableUMaterial" }, // 230406958
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUObject, "GetNiagaraVariableUObject" }, // 1702304369
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTexture, "GetNiagaraVariableUTexture" }, // 1487993067
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableUTextureRenderTarget, "GetNiagaraVariableUTextureRenderTarget" }, // 1359762520
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec2, "GetNiagaraVariableVec2" }, // 1849497682
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec3, "GetNiagaraVariableVec3" }, // 121054187
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_GetNiagaraVariableVec4, "GetNiagaraVariableVec4" }, // 3430534022
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableGenericNumeric, "SetNiagaraVariableGenericNumeric" }, // 2679933175
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalf, "SetNiagaraVariableHalf" }, // 1885831364
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableHalfVec2, "SetNiagaraVariableHalfVec2" }, // 2756108749
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableID, "SetNiagaraVariableID" }, // 157479149
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableMatrix4, "SetNiagaraVariableMatrix4" }, // 2009419302
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesBPLibrary_SetNiagaraVariableUTexture, "SetNiagaraVariableUTexture" }, // 3673580033
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExposeNiagaraVariablesBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AINiagaraFXPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary_Statics::ClassParams = {
	&UExposeNiagaraVariablesBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary()
{
	if (!Z_Registration_Info_UClass_UExposeNiagaraVariablesBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExposeNiagaraVariablesBPLibrary.OuterSingleton, Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExposeNiagaraVariablesBPLibrary.OuterSingleton;
}
template<> AINIAGARAFXPLUGIN_API UClass* StaticClass<UExposeNiagaraVariablesBPLibrary>()
{
	return UExposeNiagaraVariablesBPLibrary::StaticClass();
}
UExposeNiagaraVariablesBPLibrary::UExposeNiagaraVariablesBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExposeNiagaraVariablesBPLibrary);
UExposeNiagaraVariablesBPLibrary::~UExposeNiagaraVariablesBPLibrary() {}
// End Class UExposeNiagaraVariablesBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_ExposeNiagaraVariablesBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExposeNiagaraVariablesBPLibrary, UExposeNiagaraVariablesBPLibrary::StaticClass, TEXT("UExposeNiagaraVariablesBPLibrary"), &Z_Registration_Info_UClass_UExposeNiagaraVariablesBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExposeNiagaraVariablesBPLibrary), 1604557059U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_ExposeNiagaraVariablesBPLibrary_h_986167137(TEXT("/Script/AINiagaraFXPlugin"),
	Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_ExposeNiagaraVariablesBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_ExposeNiagaraVariablesBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
