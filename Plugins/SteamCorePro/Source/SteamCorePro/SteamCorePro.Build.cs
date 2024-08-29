using UnrealBuildTool;

public class SteamCorePro : ModuleRules {
    public SteamCorePro(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "OnlineSubsystemUtils",
            "OnlineSubsystem",
            "SteamCoreShared",
            "AudioExtensions"
        });
    }
}
