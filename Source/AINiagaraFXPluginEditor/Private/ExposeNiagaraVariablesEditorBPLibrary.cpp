#include "ExposeNiagaraVariablesEditorBPLibrary.h"
#include "NiagaraVariableHelpers.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "NiagaraSystemInstanceController.h"
#include "NiagaraSystemInstance.h"
#include "NiagaraParameterStore.h"
#include "NiagaraTypes.h"
#include "NiagaraEmitter.h"
#include "NiagaraEmitterInstance.h"
#include "NiagaraEmitterHandle.h"
#include "Logging/LogMacros.h"


#if WITH_EDITOR
#include "Modules/ModuleManager.h"
#include "Editor.h"
#include "Editor/EditorEngine.h"
#include "UnrealEd.h"
#include "EngineUtils.h"
#endif

TArray<UNiagaraComponent*> UExposeNiagaraVariablesEditorBPLibrary::GetAllNiagaraComponentsInScene()
{
    TArray<UNiagaraComponent*> NiagaraComponents;

    if (!GEditor)
    {
        UE_LOG(LogTemp, Warning, TEXT("GetAllNiagaraComponentsInScene: GEditor is null!"));
        return NiagaraComponents;
    }

    UWorld* World = GEditor->GetEditorWorldContext().World();
    if (!World)
    {
        UE_LOG(LogTemp, Warning, TEXT("GetAllNiagaraComponentsInScene: No valid editor world!"));
        return NiagaraComponents;
    }

    // Iterate over all actors in the world
    for (TActorIterator<AActor> ActorItr(World); ActorItr; ++ActorItr)
    {
        AActor* Actor = *ActorItr;
        if (!Actor) continue;

        TArray<UNiagaraComponent*> ActorNiagaraComponents;
        Actor->GetComponents(ActorNiagaraComponents);

        for (UNiagaraComponent* NiagaraComp : ActorNiagaraComponents)
        {
            if (NiagaraComp)
            {
                NiagaraComponents.Add(NiagaraComp);
            }
        }
    }

    UE_LOG(LogTemp, Log, TEXT("From AI Niagara FX Plugin: Found %d Niagara Components in Scene"), NiagaraComponents.Num());
    return NiagaraComponents;
}