// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AINiagaraFXPlugin/Public/NiagaraVariableHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraVariableHelpers() {}

// Begin Cross Module References
AINIAGARAFXPLUGIN_API UClass* Z_Construct_UClass_UNiagaraVariableHelpers();
AINIAGARAFXPLUGIN_API UClass* Z_Construct_UClass_UNiagaraVariableHelpers_NoRegister();
AINIAGARAFXPLUGIN_API UEnum* Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AINiagaraFXPlugin();
// End Cross Module References

// Begin Enum ENiagaraNamespace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraNamespace;
static UEnum* ENiagaraNamespace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraNamespace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraNamespace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace, (UObject*)Z_Construct_UPackage__Script_AINiagaraFXPlugin(), TEXT("ENiagaraNamespace"));
	}
	return Z_Registration_Info_UEnum_ENiagaraNamespace.OuterSingleton;
}
template<> AINIAGARAFXPLUGIN_API UEnum* StaticEnum<ENiagaraNamespace>()
{
	return ENiagaraNamespace_StaticEnum();
}
struct Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Emitter.DisplayName", "Emitter" },
		{ "Emitter.Name", "ENiagaraNamespace::Emitter" },
		{ "Engine.DisplayName", "Engine" },
		{ "Engine.Name", "ENiagaraNamespace::Engine" },
		{ "ModuleRelativePath", "Public/NiagaraVariableHelpers.h" },
		{ "Particles.DisplayName", "Particles" },
		{ "Particles.Name", "ENiagaraNamespace::Particles" },
		{ "Render.DisplayName", "Render" },
		{ "Render.Name", "ENiagaraNamespace::Render" },
		{ "Script.DisplayName", "Script" },
		{ "Script.Name", "ENiagaraNamespace::Script" },
		{ "System.DisplayName", "System" },
		{ "System.Name", "ENiagaraNamespace::System" },
		{ "Transient.DisplayName", "Transient" },
		{ "Transient.Name", "ENiagaraNamespace::Transient" },
		{ "User.DisplayName", "User" },
		{ "User.Name", "ENiagaraNamespace::User" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraNamespace::User", (int64)ENiagaraNamespace::User },
		{ "ENiagaraNamespace::Engine", (int64)ENiagaraNamespace::Engine },
		{ "ENiagaraNamespace::Emitter", (int64)ENiagaraNamespace::Emitter },
		{ "ENiagaraNamespace::Particles", (int64)ENiagaraNamespace::Particles },
		{ "ENiagaraNamespace::Script", (int64)ENiagaraNamespace::Script },
		{ "ENiagaraNamespace::System", (int64)ENiagaraNamespace::System },
		{ "ENiagaraNamespace::Transient", (int64)ENiagaraNamespace::Transient },
		{ "ENiagaraNamespace::Render", (int64)ENiagaraNamespace::Render },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AINiagaraFXPlugin,
	nullptr,
	"ENiagaraNamespace",
	"ENiagaraNamespace",
	Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace()
{
	if (!Z_Registration_Info_UEnum_ENiagaraNamespace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraNamespace.InnerSingleton, Z_Construct_UEnum_AINiagaraFXPlugin_ENiagaraNamespace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraNamespace.InnerSingleton;
}
// End Enum ENiagaraNamespace

// Begin Class UNiagaraVariableHelpers
void UNiagaraVariableHelpers::StaticRegisterNativesUNiagaraVariableHelpers()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraVariableHelpers);
UClass* Z_Construct_UClass_UNiagaraVariableHelpers_NoRegister()
{
	return UNiagaraVariableHelpers::StaticClass();
}
struct Z_Construct_UClass_UNiagaraVariableHelpers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraVariableHelpers.h" },
		{ "ModuleRelativePath", "Public/NiagaraVariableHelpers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraVariableHelpers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNiagaraVariableHelpers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AINiagaraFXPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVariableHelpers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraVariableHelpers_Statics::ClassParams = {
	&UNiagaraVariableHelpers::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraVariableHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraVariableHelpers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraVariableHelpers()
{
	if (!Z_Registration_Info_UClass_UNiagaraVariableHelpers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraVariableHelpers.OuterSingleton, Z_Construct_UClass_UNiagaraVariableHelpers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraVariableHelpers.OuterSingleton;
}
template<> AINIAGARAFXPLUGIN_API UClass* StaticClass<UNiagaraVariableHelpers>()
{
	return UNiagaraVariableHelpers::StaticClass();
}
UNiagaraVariableHelpers::UNiagaraVariableHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraVariableHelpers);
UNiagaraVariableHelpers::~UNiagaraVariableHelpers() {}
// End Class UNiagaraVariableHelpers

// Begin Registration
struct Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_NiagaraVariableHelpers_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraNamespace_StaticEnum, TEXT("ENiagaraNamespace"), &Z_Registration_Info_UEnum_ENiagaraNamespace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2703109794U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraVariableHelpers, UNiagaraVariableHelpers::StaticClass, TEXT("UNiagaraVariableHelpers"), &Z_Registration_Info_UClass_UNiagaraVariableHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraVariableHelpers), 155849443U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_NiagaraVariableHelpers_h_3442686276(TEXT("/Script/AINiagaraFXPlugin"),
	Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_NiagaraVariableHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_NiagaraVariableHelpers_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_NiagaraVariableHelpers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Immersalab_UEProjects_AINiagaraPlugin_Plugins_AINiagaraFXPlugin_AINiagaraFXPlugin_Source_AINiagaraFXPlugin_Public_NiagaraVariableHelpers_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
