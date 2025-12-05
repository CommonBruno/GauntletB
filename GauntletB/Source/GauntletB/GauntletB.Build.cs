// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GauntletB : ModuleRules
{
	public GauntletB(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"GauntletB",
			"GauntletB/Variant_Platforming",
			"GauntletB/Variant_Platforming/Animation",
			"GauntletB/Variant_Combat",
			"GauntletB/Variant_Combat/AI",
			"GauntletB/Variant_Combat/Animation",
			"GauntletB/Variant_Combat/Gameplay",
			"GauntletB/Variant_Combat/Interfaces",
			"GauntletB/Variant_Combat/UI",
			"GauntletB/Variant_SideScrolling",
			"GauntletB/Variant_SideScrolling/AI",
			"GauntletB/Variant_SideScrolling/Gameplay",
			"GauntletB/Variant_SideScrolling/Interfaces",
			"GauntletB/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
