// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class scooby_escape_room : ModuleRules
{
	public scooby_escape_room(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
