// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class StudyReflectionBase : ModuleRules
{
	public StudyReflectionBase(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject" });

        PrivateIncludePaths.Add("Runtime/StudyReflectionBase/Classes");

    }
}
