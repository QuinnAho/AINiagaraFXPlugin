using UnrealBuildTool;

public class AINiagaraFXPluginEditor : ModuleRules
{
    public AINiagaraFXPluginEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(new string[]
        {
            "AINiagaraFXPluginEditor/Public",
            "Runtime/Niagara/Public",
            "Editor/NiagaraEditor/Public",
            "Editor/UnrealEd/Public",
            "Runtime/Engine/Public"
        });

        PrivateIncludePaths.AddRange(new string[]
        {
            "AINiagaraFXPluginEditor/Private",
            "Editor/NiagaraEditor/Private",
            "Editor/UnrealEd/Private"
        });

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "Niagara",
            "NiagaraEditor",
            "NiagaraCore",
            "NiagaraShader",
            "UnrealEd",   // ✅ Needed for GEditor
            "Slate",
            "SlateCore",
            "Projects",
            "EditorStyle",
            "AINiagaraFXPlugin"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "Projects",
            "InputCore",
            "PropertyEditor",
            "EditorFramework",
            "LevelEditor",
            "ApplicationCore",
            "RenderCore",
            "RHI",   // ✅ Required for rendering operations
            "AssetTools",
            "ToolMenus"
        });

        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(new string[]
            {
                "UnrealEd",   // ✅ Ensure UnrealEd for editor utilities
                "LevelEditor"
            });
        }
    }
}
