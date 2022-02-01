// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyGameEditor : ModuleRules
{
	public MyGameEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core",
                "Engine",
                "CoreUObject",
                "InputCore",
                "LevelEditor",
                "Slate",
                "EditorStyle",
                "AssetTools",
                "EditorWidgets",
                "UnrealEd",
                "BlueprintGraph",
                "AnimGraph",
                "ComponentVisualizers", });

		PublicIncludePaths.AddRange(
            new string[]
            {
                "MyGameEditor/Public"
            });

        PrivateIncludePaths.AddRange(
            new string[] 
            {
        "MyGameEditor/Private"
        });

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "MyGame"
            });
	}
}
