using UnrealBuildTool;

public class NornalTown_GameEditorTarget : TargetRules
{
	public NornalTown_GameEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("NornalTown_Game");
	}
}
