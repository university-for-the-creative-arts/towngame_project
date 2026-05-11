using UnrealBuildTool;

public class NornalTown_GameServerTarget : TargetRules
{
	public NornalTown_GameServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("NornalTown_Game");
	}
}
