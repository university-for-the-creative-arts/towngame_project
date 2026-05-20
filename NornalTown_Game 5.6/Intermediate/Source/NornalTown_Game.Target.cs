using UnrealBuildTool;

public class NornalTown_GameTarget : TargetRules
{
	public NornalTown_GameTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("NornalTown_Game");
	}
}
