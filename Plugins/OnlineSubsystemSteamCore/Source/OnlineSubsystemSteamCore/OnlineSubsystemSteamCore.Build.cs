using UnrealBuildTool;

public class OnlineSubsystemSteamCore : ModuleRules {
    public OnlineSubsystemSteamCore(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "OnlineSubsystemUtils",
            "PacketHandler",
            "SteamCoreShared",
        });
    }
}
