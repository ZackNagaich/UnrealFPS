

using UnrealBuildTool;
using System.Collections.Generic;

public class TutorialFPSEditorTarget : TargetRules
{
	public TutorialFPSEditorTarget(TargetInfo Target)
	{
		Type = TargetType.Editor;
	}

	//
	// TargetRules interface.
	//

	public override void SetupBinaries(
		TargetInfo Target,
		ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
		ref List<string> OutExtraModuleNames
		)
	{
		OutExtraModuleNames.AddRange( new string[] { "TutorialFPS" } );
	}
}
