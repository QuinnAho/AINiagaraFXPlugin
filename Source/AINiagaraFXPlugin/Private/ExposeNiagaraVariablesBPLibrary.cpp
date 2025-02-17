
#include "ExposeNiagaraVariablesBPLibrary.h"
#include "NiagaraVariableHelpers.h"

bool UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableActor(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, AActor*& OutValue)
{
    return UNiagaraVariableHelpers::GetNiagaraVariableActor(NiagaraComponent, Namespace, VariableName, OutValue);
}

bool UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableBool(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, bool& OutValue)
{
    return UNiagaraVariableHelpers::GetNiagaraVariableBool(NiagaraComponent, Namespace, VariableName, OutValue);
}


bool UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableColor(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FLinearColor& OutValue)
{
    return UNiagaraVariableHelpers::GetNiagaraVariableColor(NiagaraComponent, Namespace, VariableName, OutValue);
}

bool UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableFloat(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, float& OutValue)
{
    return UNiagaraVariableHelpers::GetNiagaraVariableFloat(NiagaraComponent, Namespace, VariableName, OutValue);
}

float UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableGenericNumeric(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, float& OutValue)
{
    double Y = double(OutValue);
    UNiagaraVariableHelpers::GetNiagaraVariableGenericNumeric(NiagaraComponent, Namespace, VariableName, Y);
    return float(Y);
}

float UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableHalf(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, float& OutValue)
{
    FFloat16 Y = OutValue;
    UNiagaraVariableHelpers::GetNiagaraVariableHalf(NiagaraComponent, Namespace, VariableName, Y);
    return Y;
}

FVector2D UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableHalfVec2(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector2D& OutValue)
{
    FVector2DHalf Y = OutValue;
    UNiagaraVariableHelpers::GetNiagaraVariableHalfVec2(NiagaraComponent, Namespace, VariableName, Y);
    return Y;
}


bool UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableID(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FNiagaraID& OutValue)
{
    return UNiagaraVariableHelpers::GetNiagaraVariableID(NiagaraComponent, Namespace, VariableName, OutValue);
}

bool UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableInt(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, int32& OutValue)
{
    return UNiagaraVariableHelpers::GetNiagaraVariableInt(NiagaraComponent, Namespace, VariableName, OutValue);
}

bool UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableMatrix4(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FMatrix& OutValue)
{
    return UNiagaraVariableHelpers::GetNiagaraVariableMatrix4(NiagaraComponent, Namespace, VariableName, OutValue);
}


bool UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableQuat(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FQuat& OutValue)
{
    return UNiagaraVariableHelpers::GetNiagaraVariableQuat(NiagaraComponent, Namespace, VariableName, OutValue);
}

bool UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableUMaterial(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UMaterialInterface*& OutValue)
{
    return UNiagaraVariableHelpers::GetNiagaraVariableUMaterial(NiagaraComponent, Namespace, VariableName, OutValue);
}

bool UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableUObject(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UObject*& OutValue)
{
    return UNiagaraVariableHelpers::GetNiagaraVariableUObject(NiagaraComponent, Namespace, VariableName, OutValue);
}

bool UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableUTexture(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UTexture*& OutValue)
{
    return UNiagaraVariableHelpers::GetNiagaraVariableUTexture(NiagaraComponent, Namespace, VariableName, OutValue);
}

bool UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableUTextureRenderTarget(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UTextureRenderTarget*& OutValue)
{
    return UNiagaraVariableHelpers::GetNiagaraVariableUTextureRenderTarget(NiagaraComponent, Namespace, VariableName, OutValue);
}

bool UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableVec2(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector2D& OutValue)
{
    return UNiagaraVariableHelpers::GetNiagaraVariableVec2(NiagaraComponent, Namespace, VariableName, OutValue);
}

bool UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableVec3(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector& OutValue)
{
    return UNiagaraVariableHelpers::GetNiagaraVariableVec3(NiagaraComponent, Namespace, VariableName, OutValue);
}

bool UExposeNiagaraVariablesBPLibrary::GetNiagaraVariableVec4(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector4& OutValue)
{
    return UNiagaraVariableHelpers::GetNiagaraVariableVec4(NiagaraComponent, Namespace, VariableName, OutValue);
}

UNiagaraComponent* UExposeNiagaraVariablesBPLibrary::GetNiagaraComponentByIndex(int32 Index, const TArray<UNiagaraComponent*>& NiagaraComponents)
{
    if (NiagaraComponents.IsValidIndex(Index))
    {
        return NiagaraComponents[Index];
    }
    return nullptr;
}

TMap<FName, FString> UExposeNiagaraVariablesBPLibrary::GetAllUserNiagaraVariables(UNiagaraComponent* NiagaraComponent)
{
    TMap<FName, FString> UserVariables;

    if (!NiagaraComponent)
    {
        UE_LOG(LogTemp, Warning, TEXT("GetAllUserNiagaraVariables: NiagaraComponent is null!"));
        return UserVariables;
    }

    // Get the system instance controller
    FNiagaraSystemInstanceControllerPtr SystemInstanceController = NiagaraComponent->GetSystemInstanceController();
    if (!SystemInstanceController.IsValid())
    {
        UE_LOG(LogTemp, Warning, TEXT("GetAllUserNiagaraVariables: SystemInstanceController is not valid!"));
        return UserVariables;
    }

    // Get the system instance from the controller
    FNiagaraSystemInstance* SystemInstance = SystemInstanceController->GetSystemInstance_Unsafe();
    if (!SystemInstance)
    {
        UE_LOG(LogTemp, Warning, TEXT("GetAllUserNiagaraVariables: SystemInstance is null!"));
        return UserVariables;
    }

    // Access the instance parameter store
    const FNiagaraParameterStore& ParameterStore = SystemInstance->GetInstanceParameters();

    UE_LOG(LogTemp, Log, TEXT("---- Listing User Parameters in Niagara Component ----"));

    for (const FNiagaraVariable& Variable : ParameterStore.ReadParameterVariables())
    {
        // Ensure it's a user-defined variable
        if (Variable.GetName().ToString().StartsWith("User."))
        {
            FString ValueAsString;

            // Retrieve value using helper functions
            if (Variable.GetType() == FNiagaraTypeDefinition::GetFloatDef())
            {
                float Value;
                if (UNiagaraVariableHelpers::GetNiagaraVariableFloat(NiagaraComponent, ENiagaraNamespace::User, Variable.GetName(), Value))
                {
                    ValueAsString = FString::Printf(TEXT("%f"), Value);
                }
            }
            else if (Variable.GetType() == FNiagaraTypeDefinition::GetIntDef())
            {
                int32 Value;
                if (UNiagaraVariableHelpers::GetNiagaraVariableInt(NiagaraComponent, ENiagaraNamespace::User, Variable.GetName(), Value))
                {
                    ValueAsString = FString::Printf(TEXT("%d"), Value);
                }
            }
            else if (Variable.GetType() == FNiagaraTypeDefinition::GetBoolDef())
            {
                bool Value;
                if (UNiagaraVariableHelpers::GetNiagaraVariableBool(NiagaraComponent, ENiagaraNamespace::User, Variable.GetName(), Value))
                {
                    ValueAsString = Value ? TEXT("true") : TEXT("false");
                }
            }
            else if (Variable.GetType() == FNiagaraTypeDefinition::GetVec3Def())
            {
                FVector Value;
                if (UNiagaraVariableHelpers::GetNiagaraVariableVec3(NiagaraComponent, ENiagaraNamespace::User, Variable.GetName(), Value))
                {
                    ValueAsString = Value.ToString();
                }
            }
            else if (Variable.GetType() == FNiagaraTypeDefinition::GetColorDef())
            {
                FLinearColor Value;
                if (UNiagaraVariableHelpers::GetNiagaraVariableColor(NiagaraComponent, ENiagaraNamespace::User, Variable.GetName(), Value))
                {
                    ValueAsString = Value.ToString();
                }
            }
            else
            {
                ValueAsString = TEXT("Unsupported Type");
            }

            UE_LOG(LogTemp, Log, TEXT("User Variable: %s | Value: %s"), *Variable.GetName().ToString(), *ValueAsString);
            UserVariables.Add(Variable.GetName(), ValueAsString);
        }
    }

    return UserVariables;
}
/*
* Setters
*/

bool UExposeNiagaraVariablesBPLibrary::SetNiagaraVariableGenericNumeric(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, float Value)
{
    return UNiagaraVariableHelpers::SetNiagaraVariableGenericNumeric(NiagaraComponent, Namespace, VariableName, Value);
}

bool UExposeNiagaraVariablesBPLibrary::SetNiagaraVariableHalf(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, float FFloat16)
{
    return UNiagaraVariableHelpers::SetNiagaraVariableHalf(NiagaraComponent, Namespace, VariableName, FFloat16);
}

bool UExposeNiagaraVariablesBPLibrary::SetNiagaraVariableHalfVec2(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector2D Value)
{
    return UNiagaraVariableHelpers::SetNiagaraVariableHalfVec2(NiagaraComponent, Namespace, VariableName, FVector2DHalf(Value));
}

bool UExposeNiagaraVariablesBPLibrary::SetNiagaraVariableID(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FNiagaraID Value)
{
    return UNiagaraVariableHelpers::SetNiagaraVariableID(NiagaraComponent, Namespace, VariableName, Value);
}

bool UExposeNiagaraVariablesBPLibrary::SetNiagaraVariableMatrix4(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FMatrix Value)
{
    return UNiagaraVariableHelpers::SetNiagaraVariableMatrix4(NiagaraComponent, Namespace, VariableName, Value);
}



bool UExposeNiagaraVariablesBPLibrary::SetNiagaraVariableUTexture(UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UTexture* Value)
{
    return UNiagaraVariableHelpers::SetNiagaraVariableUTexture(NiagaraComponent, Namespace, VariableName, Value);
}