// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.


#include "StudyReflection.h"
#include "UObject/UObjectThreadContext.h"
#include "RequiredProgramMainCPPInclude.h"

#ifdef GetClassName
#undef GetClassName
#endif

DEFINE_LOG_CATEGORY_STATIC(LogStudyReflection, Log, All);

IMPLEMENT_APPLICATION(StudyReflection, "StudyReflection");


INT32_MAIN_INT32_ARGC_TCHAR_ARGV()
{
	GEngineLoop.PreInit(ArgC, ArgV);

	UObject *pobj = FindPackage(nullptr, L"/Script/StudyReflectionBase");
	
	
	return 0;
}
