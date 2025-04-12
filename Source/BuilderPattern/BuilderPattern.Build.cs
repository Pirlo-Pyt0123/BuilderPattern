// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BuilderPattern : ModuleRules
{
	public BuilderPattern(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
