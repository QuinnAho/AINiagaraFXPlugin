// Copyright (c) 2024 HashemGameDev. All Rights Reserved.

using UnrealBuildTool;

public class AINiagaraFXPlugin : ModuleRules
{
    public AINiagaraFXPlugin(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
            new string[] {
                // Add paths if needed
            }
        );

        PrivateIncludePaths.AddRange(
            new string[] {
                // Add private include paths if needed
            }
        );

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "Niagara",
                "NiagaraEditor",
                "RenderCore", // Needed for UE rendering-related types
                "RHI",        // For rendering and GPU-based Niagara operations
                "Projects"    // Allows using project config settings
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "NiagaraShader", // Handles Niagara shaders
                "ApplicationCore", // Helps with low-level engine interactions
                "EditorFramework", // Helps if you interact with editor functionality
                "UnrealEd", // Needed if accessing editor components
                "AssetTools", // Helps with asset manipulation
                "VerseVM" // May be needed to fix VerseVM errors
            }
        );

        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
                // Add dynamic modules if needed
            }
        );

        // Ensure Unreal Engine version compatibility
        if (Target.Version.MajorVersion >= 5)
        {
            PrivateDependencyModuleNames.AddRange(new string[] { "DeveloperSettings" });
        }
    }
}
