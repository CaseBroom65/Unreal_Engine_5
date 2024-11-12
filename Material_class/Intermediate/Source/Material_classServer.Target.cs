using UnrealBuildTool;

public class Material_classServerTarget : TargetRules
{
	public Material_classServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("Material_class");
	}
}
