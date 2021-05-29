using UnrealBuildTool;

public class MugenEngineTarget : TargetRules
{
	public MugenEngineTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("MugenEngine");
	}
}
