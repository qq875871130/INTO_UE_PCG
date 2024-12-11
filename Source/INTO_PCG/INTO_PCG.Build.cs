// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class INTO_PCG : ModuleRules
{
	public INTO_PCG(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
