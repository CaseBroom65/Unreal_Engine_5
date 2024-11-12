using UnrealBuildTool;

public class Material_classClientTarget : TargetRules
{
	public Material_classClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("Material_class");
	}
}
