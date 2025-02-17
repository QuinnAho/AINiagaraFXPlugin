using UnrealBuildTool;

public class AINiagaraFXPluginEditor : ModuleRules
{
    public AINiagaraFXPluginEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "Niagara",
                "NiagaraEditor",
                "UnrealEd", // ✅ Needed for GEditor
                "Slate",
                "SlateCore",
                "Projects",
                "EditorStyle",
                "AINiagaraFXPlugin"
            });

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Projects",
                "InputCore",
                "PropertyEditor",
                "EditorFramework",
                "LevelEditor",
                "ApplicationCore",
                "RenderCore",
                "ToolMenus"
            });

        if (Target.bBuildEditor)
        {
            PrivateDependencyModuleNames.AddRange(new string[]
            {
                "UnrealEd", // ✅ Ensure UnrealEd for editor utilities
                "LevelEditor"
            });
        }
    }
}
