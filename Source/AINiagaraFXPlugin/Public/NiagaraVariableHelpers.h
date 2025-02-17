
#pragma once

#include "CoreMinimal.h"
#include "Editor.h"
#include "Editor/EditorEngine.h"
#include "EngineUtils.h"
#include "NiagaraComponent.h"
#include "NiagaraSystemInstance.h"
#include "NiagaraSystemInstanceController.h"
#include "NiagaraVariableHelpers.generated.h"

UENUM(BlueprintType)
enum class ENiagaraNamespace : uint8
{
    User        UMETA(DisplayName = "User"),
    Engine      UMETA(DisplayName = "Engine"),
    Emitter     UMETA(DisplayName = "Emitter"),
    Particles   UMETA(DisplayName = "Particles"),
    Script      UMETA(DisplayName = "Script"),
    System      UMETA(DisplayName = "System"),
    Transient   UMETA(DisplayName = "Transient"),
    Render      UMETA(DisplayName = "Render")
};

UCLASS()
class AINIAGARAFXPLUGIN_API UNiagaraVariableHelpers : public UObject
{
    GENERATED_BODY()

public:

    static FName AppendNamespaceToVariableName(ENiagaraNamespace Namespace, FName VariableName);

    // Functions for retrieving Niagara variables
    static bool GetNiagaraVariableActor(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, class AActor* &OutValue);
    static bool GetNiagaraVariableBool(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, bool& OutValue);
    static bool GetNiagaraVariableFloat(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, float& OutValue);
    static bool GetNiagaraVariableInt(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, int32& OutValue);
    static bool GetNiagaraVariableColor(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FLinearColor& OutValue);
    static bool GetNiagaraVariableUMaterial(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UMaterialInterface*& OutValue);
    static bool GetNiagaraVariableUObject(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UObject*& OutValue);
    static bool GetNiagaraVariableQuat(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FQuat& OutValue);
    static bool GetNiagaraVariableUTextureRenderTarget(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UTextureRenderTarget*& OutValue);
    static bool GetNiagaraVariableVec2(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector2D& OutValue);
    static bool GetNiagaraVariableVec3(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector& OutValue);
    static bool GetNiagaraVariableVec4(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector4& OutValue);
    static bool GetNiagaraVariableGenericNumeric(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, double& OutValue);
    static bool GetNiagaraVariableHalf(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FFloat16& OutValue);
    static bool GetNiagaraVariableHalfVec2(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FVector2DHalf& OutValue);
    static bool GetNiagaraVariableID(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FNiagaraID& OutValue);
    static bool GetNiagaraVariableMatrix4(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FMatrix& OutValue);
    static bool GetNiagaraVariableParameterMap(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, FNiagaraParameterMap& OutValue);
    static bool GetNiagaraVariableUTexture(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UTexture*& OutValue);

    // Functions for setting Niagara variables
    static bool SetNiagaraVariableGenericNumeric(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, const double& Value);
    static bool SetNiagaraVariableHalf(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, const FFloat16& Value);
    static bool SetNiagaraVariableHalfVec2(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, const FVector2DHalf& Value);
    static bool SetNiagaraVariableID(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, const FNiagaraID& Value);
    static bool SetNiagaraVariableMatrix4(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, const FMatrix& Value);
    static bool SetNiagaraVariableUTexture(class UNiagaraComponent* NiagaraComponent, ENiagaraNamespace Namespace, FName VariableName, UTexture* Value);
   };