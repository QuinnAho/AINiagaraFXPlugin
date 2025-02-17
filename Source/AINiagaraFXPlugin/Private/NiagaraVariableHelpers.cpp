

#include "NiagaraVariableHelpers.h"
#include "NiagaraComponent.h"
#include "NiagaraParameterStore.h"
#include "NiagaraParameterCollection.h"
#include "NiagaraSystemInstance.h"
#include "NiagaraSystemInstanceController.h"


FName UNiagaraVariableHelpers::AppendNamespaceToVariableName(ENiagaraNamespace Namespace, FName VariableName)
{
    FString NamespacePrefix;
    switch (Namespace)
    {
    case ENiagaraNamespace::User:       NamespacePrefix = TEXT("User."); break;
    case ENiagaraNamespace::Engine:     NamespacePrefix = TEXT("Engine."); break;
    case ENiagaraNamespace::Emitter:    NamespacePrefix = TEXT("Emitter."); break;
    case ENiagaraNamespace::Particles:  NamespacePrefix = TEXT("Particles."); break;
    case ENiagaraNamespace::Script:     NamespacePrefix = TEXT("Script."); break;
    case ENiagaraNamespace::System:     NamespacePrefix = TEXT("System."); break;
    case ENiagaraNamespace::Transient:  NamespacePrefix = TEXT("Transient."); break;
    case ENiagaraNamespace::Render:     NamespacePrefix = TEXT("Render."); break;
    default:                            NamespacePrefix = TEXT("User."); break;
    }
    return FName(*NamespacePrefix + VariableName.ToString());
}

// Helper function to retrieve a Niagara variable
template<typename T> 
bool GetNiagaraVariable(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, T& OutValue, const FNiagaraTypeDefinition& TypeDef)
{
    if (!IsValid(NiagaraComponent) || !NiagaraComponent->GetAsset())
    {
        UE_LOG(LogTemp, Warning, TEXT("NiagaraComponent or Asset is null."));
        return false;
    }

    // Get the system instance controller
    FNiagaraSystemInstanceControllerPtr SystemInstanceController = NiagaraComponent->GetSystemInstanceController();
    if (!SystemInstanceController.IsValid())
    {
        UE_LOG(LogTemp, Warning, TEXT("SystemInstanceController is not valid."));
        return false;
    }

    FNiagaraSystemInstance* SystemInstance = SystemInstanceController->GetSystemInstance_Unsafe();
    if (!SystemInstance)
    {
        UE_LOG(LogTemp, Warning, TEXT("SystemInstance is null."));
        return false;
    }

    // Get the instance parameter store
    const FNiagaraParameterStore& ParameterStore = SystemInstance->GetInstanceParameters();
    FNiagaraVariable Variable(TypeDef, UNiagaraVariableHelpers::AppendNamespaceToVariableName(Namespace, VariableName));

    int32 ParameterIndex = ParameterStore.IndexOf(Variable);
    if (ParameterIndex != INDEX_NONE)
    {
        OutValue = ParameterStore.GetParameterValue<T>(Variable);
        return true;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Parameter not found: %s"), *Variable.GetName().ToString());
    }

    return false;
}


bool UNiagaraVariableHelpers::GetNiagaraVariableActor(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, AActor*& OutValue)
{
    if (!NiagaraComponent || !NiagaraComponent->GetAsset())
    {
        return false;
    }

    // Use the new API to get the system instance controller
    FNiagaraSystemInstanceControllerPtr SystemInstanceController = NiagaraComponent->GetSystemInstanceController();
    if (!SystemInstanceController.IsValid())
    {
        return false;
    }

    // Get the system instance from the controller
    FNiagaraSystemInstance* SystemInstance = SystemInstanceController->GetSystemInstance_Unsafe();
    if (!SystemInstance)
    {
        return false;
    }

    // Access the parameter store from the system instance
    const FNiagaraParameterStore& ParameterStore = SystemInstance->GetInstanceParameters();

    // Create a Niagara variable of type UObject (used for Actor)
    FNiagaraVariable Variable(FNiagaraTypeDefinition::GetUObjectDef(), VariableName);

    int32 ParameterIndex = ParameterStore.IndexOf(Variable);
    if (ParameterIndex != INDEX_NONE)
    {
        UObject* TempObject = ParameterStore.GetParameterValue<UObject*>(Variable);
        OutValue = Cast<AActor>(TempObject);
        return OutValue != nullptr;
    }

    return false;
}

// Specific functions for each type
bool UNiagaraVariableHelpers::GetNiagaraVariableBool(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, bool& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetBoolDef());
}


bool UNiagaraVariableHelpers::GetNiagaraVariableColor(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FLinearColor& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetColorDef());
}

bool UNiagaraVariableHelpers::GetNiagaraVariableFloat(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, float& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetFloatDef());
}

bool UNiagaraVariableHelpers::GetNiagaraVariableGenericNumeric(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, double& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetGenericNumericDef());
}

bool UNiagaraVariableHelpers::GetNiagaraVariableHalf(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FFloat16& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetHalfDef());
}

bool UNiagaraVariableHelpers::GetNiagaraVariableHalfVec2(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector2DHalf& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetHalfVec2Def());
}


bool UNiagaraVariableHelpers::GetNiagaraVariableID(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FNiagaraID& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetIDDef());
}

bool UNiagaraVariableHelpers::GetNiagaraVariableInt(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, int32& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetIntDef());
}

bool UNiagaraVariableHelpers::GetNiagaraVariableMatrix4(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FMatrix& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetMatrix4Def());
}

bool UNiagaraVariableHelpers::GetNiagaraVariableParameterMap(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FNiagaraParameterMap& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetParameterMapDef());
}

bool UNiagaraVariableHelpers::GetNiagaraVariableQuat(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FQuat& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetQuatDef());
}

bool UNiagaraVariableHelpers::GetNiagaraVariableUMaterial(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UMaterialInterface*& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetUMaterialDef());
}

bool UNiagaraVariableHelpers::GetNiagaraVariableUObject(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UObject*& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetUObjectDef());
}

bool UNiagaraVariableHelpers::GetNiagaraVariableUTexture(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UTexture*& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetUTextureDef());
}

bool UNiagaraVariableHelpers::GetNiagaraVariableUTextureRenderTarget(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UTextureRenderTarget*& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetUTextureRenderTargetDef());
}

bool UNiagaraVariableHelpers::GetNiagaraVariableVec2(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector2D& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetVec2Def());
}

bool UNiagaraVariableHelpers::GetNiagaraVariableVec3(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetVec3Def());
}

bool UNiagaraVariableHelpers::GetNiagaraVariableVec4(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector4& OutValue)
{
    return GetNiagaraVariable(NiagaraComponent, Namespace, VariableName, OutValue, FNiagaraTypeDefinition::GetVec4Def());
}

/*
* Setters
*/

bool UNiagaraVariableHelpers::SetNiagaraVariableGenericNumeric(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, const double& Value)
{
    if (!NiagaraComponent || !NiagaraComponent->GetAsset())
    {
        return false;
    }

    // Use the new API to get the system instance controller
    FNiagaraSystemInstanceControllerPtr SystemInstanceController = NiagaraComponent->GetSystemInstanceController();
    if (!SystemInstanceController.IsValid())
    {
        return false;
    }

    // Get the system instance from the controller
    FNiagaraSystemInstance* SystemInstance = SystemInstanceController->GetSystemInstance_Unsafe();
    if (!SystemInstance)
    {
        return false;
    }

    FNiagaraParameterStore& ParameterStore = SystemInstance->GetInstanceParameters();
    FNiagaraVariable Variable(FNiagaraTypeDefinition::GetGenericNumericDef(), VariableName);
    ParameterStore.SetParameterValue(Value, Variable);

    return true;
}

bool UNiagaraVariableHelpers::SetNiagaraVariableHalf(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, const FFloat16& Value)
{
    if (!NiagaraComponent || !NiagaraComponent->GetAsset())
    {
        return false;
    }

    // Use the new API to get the system instance controller
    FNiagaraSystemInstanceControllerPtr SystemInstanceController = NiagaraComponent->GetSystemInstanceController();
    if (!SystemInstanceController.IsValid())
    {
        return false;
    }

    // Get the system instance from the controller
    FNiagaraSystemInstance* SystemInstance = SystemInstanceController->GetSystemInstance_Unsafe();
    if (!SystemInstance)
    {
        return false;
    }

    FNiagaraParameterStore& ParameterStore = SystemInstance->GetInstanceParameters();
    FNiagaraVariable Variable(FNiagaraTypeDefinition::GetHalfDef(), VariableName);
    ParameterStore.SetParameterValue(Value, Variable);

    return true;
}

bool UNiagaraVariableHelpers::SetNiagaraVariableHalfVec2(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, const FVector2DHalf& Value)
{
    if (!NiagaraComponent || !NiagaraComponent->GetAsset())
    {
        return false;
    }

    // Use the new API to get the system instance controller
    FNiagaraSystemInstanceControllerPtr SystemInstanceController = NiagaraComponent->GetSystemInstanceController();
    if (!SystemInstanceController.IsValid())
    {
        return false;
    }

    // Get the system instance from the controller
    FNiagaraSystemInstance* SystemInstance = SystemInstanceController->GetSystemInstance_Unsafe();
    if (!SystemInstance)
    {
        return false;
    }

    FNiagaraParameterStore& ParameterStore = SystemInstance->GetInstanceParameters();
    FNiagaraVariable Variable(FNiagaraTypeDefinition::GetHalfVec2Def(), VariableName);
    ParameterStore.SetParameterValue(Value, Variable);

    return true;
}

bool UNiagaraVariableHelpers::SetNiagaraVariableID(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, const FNiagaraID& Value)
{
    if (!NiagaraComponent || !NiagaraComponent->GetAsset())
    {
        return false;
    }

    // Use the new API to get the system instance controller
    FNiagaraSystemInstanceControllerPtr SystemInstanceController = NiagaraComponent->GetSystemInstanceController();
    if (!SystemInstanceController.IsValid())
    {
        return false;
    }

    // Get the system instance from the controller
    FNiagaraSystemInstance* SystemInstance = SystemInstanceController->GetSystemInstance_Unsafe();
    if (!SystemInstance)
    {
        return false;
    }

    FNiagaraParameterStore& ParameterStore = SystemInstance->GetInstanceParameters();
    FNiagaraVariable Variable(FNiagaraTypeDefinition::GetIDDef(), VariableName);
    ParameterStore.SetParameterValue(Value, Variable);

    return true;
}

bool UNiagaraVariableHelpers::SetNiagaraVariableMatrix4(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, const FMatrix& Value)
{
    if (!NiagaraComponent || !NiagaraComponent->GetAsset())
    {
        return false;
    }

    // Use the new API to get the system instance controller
    FNiagaraSystemInstanceControllerPtr SystemInstanceController = NiagaraComponent->GetSystemInstanceController();
    if (!SystemInstanceController.IsValid())
    {
        return false;
    }

    // Get the system instance from the controller
    FNiagaraSystemInstance* SystemInstance = SystemInstanceController->GetSystemInstance_Unsafe();
    if (!SystemInstance)
    {
        return false;
    }

    FNiagaraParameterStore& ParameterStore = SystemInstance->GetInstanceParameters();
    FNiagaraVariable Variable(FNiagaraTypeDefinition::GetMatrix4Def(), VariableName);
    ParameterStore.SetParameterValue(Value, Variable);

    return true;
}


bool UNiagaraVariableHelpers::SetNiagaraVariableUTexture(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UTexture* Value)
{
    if (!NiagaraComponent || !NiagaraComponent->GetAsset())
    {
        return false;
    }

    // Use the new API to get the system instance controller
    FNiagaraSystemInstanceControllerPtr SystemInstanceController = NiagaraComponent->GetSystemInstanceController();
    if (!SystemInstanceController.IsValid())
    {
        return false;
    }

    // Get the system instance from the controller
    FNiagaraSystemInstance* SystemInstance = SystemInstanceController->GetSystemInstance_Unsafe();
    if (!SystemInstance)
    {
        return false;
    }

    FNiagaraParameterStore& ParameterStore = SystemInstance->GetInstanceParameters();
    FNiagaraVariable Variable(FNiagaraTypeDefinition::GetUTextureDef(), VariableName);
    ParameterStore.SetParameterValue(Value, Variable);

    return true;
}