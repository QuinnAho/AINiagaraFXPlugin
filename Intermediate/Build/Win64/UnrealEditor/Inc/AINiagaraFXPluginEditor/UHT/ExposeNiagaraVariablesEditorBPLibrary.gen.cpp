// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AINiagaraFXPluginEditor/Public/ExposeNiagaraVariablesEditorBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExposeNiagaraVariablesEditorBPLibrary() {}

// Begin Cross Module References
AINIAGARAFXPLUGINEDITOR_API UClass* Z_Construct_UClass_UExposeNiagaraVariablesEditorBPLibrary();
AINIAGARAFXPLUGINEDITOR_API UClass* Z_Construct_UClass_UExposeNiagaraVariablesEditorBPLibrary_NoRegister();
AINIAGARAFXPLUGINEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterInfo();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_AINiagaraFXPluginEditor();
// End Cross Module References

// Begin ScriptStruct FNiagaraUserParameterInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraUserParameterInfo;
class UScriptStruct* FNiagaraUserParameterInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraUserParameterInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraUserParameterInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraUserParameterInfo, (UObject*)Z_Construct_UPackage__Script_AINiagaraFXPluginEditor(), TEXT("NiagaraUserParameterInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraUserParameterInfo.OuterSingleton;
}
template<> AINIAGARAFXPLUGINEDITOR_API UScriptStruct* StaticStruct<FNiagaraUserParameterInfo>()
{
	return FNiagaraUserParameterInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraUserParameterInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesEditorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesEditorBPLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterType_MetaData[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesEditorBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraUserParameterInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraUserParameterInfo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraUserParameterInfo, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraUserParameterInfo_Statics::NewProp_ParameterType = { "ParameterType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraUserParameterInfo, ParameterType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterType_MetaData), NewProp_ParameterType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraUserParameterInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraUserParameterInfo_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraUserParameterInfo_Statics::NewProp_ParameterType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserParameterInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraUserParameterInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AINiagaraFXPluginEditor,
	nullptr,
	&NewStructOps,
	"NiagaraUserParameterInfo",
	Z_Construct_UScriptStruct_FNiagaraUserParameterInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserParameterInfo_Statics::PropPointers),
	sizeof(FNiagaraUserParameterInfo),
	alignof(FNiagaraUserParameterInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserParameterInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraUserParameterInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraUserParameterInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraUserParameterInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraUserParameterInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraUserParameterInfo.InnerSingleton;
}
// End ScriptStruct FNiagaraUserParameterInfo

// Begin Class UExposeNiagaraVariablesEditorBPLibrary Function GetAllNiagaraComponentsInScene
struct Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene_Statics
{
	struct ExposeNiagaraVariablesEditorBPLibrary_eventGetAllNiagaraComponentsInScene_Parms
	{
		TArray<UNiagaraComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Niagara|Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get all Niagara components in the editor world */" },
#endif
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesEditorBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get all Niagara components in the editor world" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExposeNiagaraVariablesEditorBPLibrary_eventGetAllNiagaraComponentsInScene_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExposeNiagaraVariablesEditorBPLibrary, nullptr, "GetAllNiagaraComponentsInScene", nullptr, nullptr, Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene_Statics::ExposeNiagaraVariablesEditorBPLibrary_eventGetAllNiagaraComponentsInScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene_Statics::ExposeNiagaraVariablesEditorBPLibrary_eventGetAllNiagaraComponentsInScene_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExposeNiagaraVariablesEditorBPLibrary::execGetAllNiagaraComponentsInScene)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UNiagaraComponent*>*)Z_Param__Result=UExposeNiagaraVariablesEditorBPLibrary::GetAllNiagaraComponentsInScene();
	P_NATIVE_END;
}
// End Class UExposeNiagaraVariablesEditorBPLibrary Function GetAllNiagaraComponentsInScene

// Begin Class UExposeNiagaraVariablesEditorBPLibrary
void UExposeNiagaraVariablesEditorBPLibrary::StaticRegisterNativesUExposeNiagaraVariablesEditorBPLibrary()
{
	UClass* Class = UExposeNiagaraVariablesEditorBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllNiagaraComponentsInScene", &UExposeNiagaraVariablesEditorBPLibrary::execGetAllNiagaraComponentsInScene },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExposeNiagaraVariablesEditorBPLibrary);
UClass* Z_Construct_UClass_UExposeNiagaraVariablesEditorBPLibrary_NoRegister()
{
	return UExposeNiagaraVariablesEditorBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UExposeNiagaraVariablesEditorBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ExposeNiagaraVariablesEditorBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ExposeNiagaraVariablesEditorBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UExposeNiagaraVariablesEditorBPLibrary_GetAllNiagaraComponentsInScene, "GetAllNiagaraComponentsInScene" }, // 2573254162
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExposeNiagaraVariablesEditorBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UExposeNiagaraVariablesEditorBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AINiagaraFXPluginEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExposeNiagaraVariablesEditorBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExposeNiagaraVariablesEditorBPLibrary_Statics::ClassParams = {
	&UExposeNiagaraVariablesEditorBPLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExposeNiagaraVariablesEditorBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UExposeNiagaraVariablesEditorBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExposeNiagaraVariablesEditorBPLibrary()
{
	if (!Z_Registration_Info_UClass_UExposeNiagaraVariablesEditorBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExposeNiagaraVariablesEditorBPLibrary.OuterSingleton, Z_Construct_UClass_UExposeNiagaraVariablesEditorBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExposeNiagaraVariablesEditorBPLibrary.OuterSingleton;
}
template<> AINIAGARAFXPLUGINEDITOR_API UClass* StaticClass<UExposeNiagaraVariablesEditorBPLibrary>()
{
	return UExposeNiagaraVariablesEditorBPLibrary::StaticClass();
}
UExposeNiagaraVariablesEditorBPLibrary::UExposeNiagaraVariablesEditorBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExposeNiagaraVariablesEditorBPLibrary);
UExposeNiagaraVariablesEditorBPLibrary::~UExposeNiagaraVariablesEditorBPLibrary() {}
// End Class UExposeNiagaraVariablesEditorBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_AINiagaraFXPlugin_Source_AINiagaraFXPluginEditor_Public_ExposeNiagaraVariablesEditorBPLibrary_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraUserParameterInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraUserParameterInfo_Statics::NewStructOps, TEXT("NiagaraUserParameterInfo"), &Z_Registration_Info_UScriptStruct_NiagaraUserParameterInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraUserParameterInfo), 3396873166U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExposeNiagaraVariablesEditorBPLibrary, UExposeNiagaraVariablesEditorBPLibrary::StaticClass, TEXT("UExposeNiagaraVariablesEditorBPLibrary"), &Z_Registration_Info_UClass_UExposeNiagaraVariablesEditorBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExposeNiagaraVariablesEditorBPLibrary), 3304046017U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_AINiagaraFXPlugin_Source_AINiagaraFXPluginEditor_Public_ExposeNiagaraVariablesEditorBPLibrary_h_4287129353(TEXT("/Script/AINiagaraFXPluginEditor"),
	Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_AINiagaraFXPlugin_Source_AINiagaraFXPluginEditor_Public_ExposeNiagaraVariablesEditorBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_AINiagaraFXPlugin_Source_AINiagaraFXPluginEditor_Public_ExposeNiagaraVariablesEditorBPLibrary_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_AINiagaraFXPlugin_Source_AINiagaraFXPluginEditor_Public_ExposeNiagaraVariablesEditorBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_AINiagaraFXPlugin_Source_AINiagaraFXPluginEditor_Public_ExposeNiagaraVariablesEditorBPLibrary_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
