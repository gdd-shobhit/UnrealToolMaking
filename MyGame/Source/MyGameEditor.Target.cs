// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class MyGameEditorTarget : TargetRules
{
	public MyGameEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		// Game editor
        ExtraModuleNames.AddRange(
            new string[]
            {
                "MyGameEditor"
            });
	}
}
