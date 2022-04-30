// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Collector : ModuleRules
{
	public Collector(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
		{ "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "UMG" }); //enable to use UIWidgets
	}
}
