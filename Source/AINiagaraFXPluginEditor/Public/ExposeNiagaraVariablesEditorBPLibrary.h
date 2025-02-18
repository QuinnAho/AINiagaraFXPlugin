#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "ExposeNiagaraVariablesEditorBPLibrary.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraUserParameterInfo
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Niagara")
    FString ParameterName;

    UPROPERTY(BlueprintReadOnly, Category = "Niagara")
    FString ParameterType;
};

UCLASS()
class AINIAGARAFXPLUGINEDITOR_API UExposeNiagaraVariablesEditorBPLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    /** Get all Niagara components in the editor world */
    UFUNCTION(BlueprintCallable, Category = "Niagara|Editor", meta = (CallInEditor = "true"))
    static TArray<UNiagaraComponent*> GetAllNiagaraComponentsInScene();

};