using UnrealBuildTool;

public class NornalTown_GameClientTarget : TargetRules
{
	public NornalTown_GameClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("NornalTown_Game");
	}
}
