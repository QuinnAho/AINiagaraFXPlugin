
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NiagaraVariableHelpers.h"
#include "ExposeNiagaraVariablesBPLibrary.generated.h"

UCLASS()
class AINIAGARAFXPLUGIN_API UExposeNiagaraVariablesBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    // Actor
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool GetNiagaraVariableActor(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, AActor*& OutValue);

    // Bool
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool GetNiagaraVariableBool(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, bool& OutValue);

    // Color
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool GetNiagaraVariableColor(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FLinearColor& OutValue);

    // Float
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool GetNiagaraVariableFloat(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, float& OutValue);

    // GenericNumeric
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static float GetNiagaraVariableGenericNumeric(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, float& OutValue);

    // Half
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static float GetNiagaraVariableHalf(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, float& OutValue);

    // HalfVec2
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static FVector2D GetNiagaraVariableHalfVec2(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector2D& OutValue);

  
    // ID
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool GetNiagaraVariableID(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FNiagaraID& OutValue);

    // Int
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool GetNiagaraVariableInt(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, int32& OutValue);

    // Matrix4
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool GetNiagaraVariableMatrix4(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FMatrix& OutValue);

   
    // Quat
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool GetNiagaraVariableQuat(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FQuat& OutValue);

    // UMaterial
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool GetNiagaraVariableUMaterial(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UMaterialInterface*& OutValue);

    // UObject
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool GetNiagaraVariableUObject(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UObject*& OutValue);

    // UTexture
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool GetNiagaraVariableUTexture(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UTexture*& OutValue);

    // UTextureRenderTarget
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool GetNiagaraVariableUTextureRenderTarget(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UTextureRenderTarget*& OutValue);

    // Vec2
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool GetNiagaraVariableVec2(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector2D& OutValue);

    // Vec3
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool GetNiagaraVariableVec3(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector& OutValue);

    // Vec4
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool GetNiagaraVariableVec4(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector4& OutValue);

    UFUNCTION(BlueprintCallable, Category = "Editor|Niagara", meta = (CallInEditor = "true"))
        static UNiagaraComponent* GetNiagaraComponentByIndex(int32 Index, const TArray<UNiagaraComponent*>& NiagaraComponents);

    /** Get all parameter names from a Niagara Component in both editor and runtime */
    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables", meta = (CallInEditor = "true"))
        static TArray<FString> GetNiagaraParameterNames(UNiagaraComponent* NiagaraComponent);

    /** Retrieves the Niagara System (UNiagaraSystem) from a given Niagara Component (UNiagaraComponent) */
    UFUNCTION(BlueprintCallable, Category = "Niagara|System")
        static UNiagaraSystem* GetNiagaraSystemFromComponent(UNiagaraComponent* NiagaraComponent);


    // Functions for setting Niagara variables

    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool SetNiagaraVariableGenericNumeric(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, float Value);

    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool SetNiagaraVariableHalf(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, float FFloat16);

    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool SetNiagaraVariableHalfVec2(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector2D Value);

    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool SetNiagaraVariableID(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FNiagaraID Value);

    UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool SetNiagaraVariableMatrix4(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FMatrix Value);

     UFUNCTION(BlueprintCallable, Category = "Niagara|Variables")
        static bool SetNiagaraVariableUTexture(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UTexture* Value);
};