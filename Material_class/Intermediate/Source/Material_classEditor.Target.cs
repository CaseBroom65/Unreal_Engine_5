using UnrealBuildTool;

public class Material_classEditorTarget : TargetRules
{
	public Material_classEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Material_class");
	}
}
