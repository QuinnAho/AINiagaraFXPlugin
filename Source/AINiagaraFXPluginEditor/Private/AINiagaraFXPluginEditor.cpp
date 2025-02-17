#include "AINiagaraFXPluginEditor.h"
#include "Modules/ModuleManager.h"

#if WITH_EDITOR
#include "UnrealEd.h"
#include "Editor.h"
#include "Editor/EditorEngine.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#endif

void FAINiagaraFXPluginEditor::StartupModule()
{
    UE_LOG(LogTemp, Log, TEXT("AINiagaraFXPluginEditor module has started!"));
}

void FAINiagaraFXPluginEditor::ShutdownModule()
{
    UE_LOG(LogTemp, Log, TEXT("AINiagaraFXPluginEditor module has shut down!"));
}

IMPLEMENT_MODULE(FAINiagaraFXPluginEditor, AINiagaraFXPluginEditor)
