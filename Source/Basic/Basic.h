// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "CoreMinimal.h"
#include "EngineMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(Basic, Log, All);
#define BLOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))
#define BLOG_S(Verbosity) UE_LOG(Basic, Verbosity, TEXT("%s"), *BLOG_CALLINFO)
#define BLOG(Verbosity, Format, ...) UE_LOG(Basic, Verbosity, TEXT("%s %s"), *BLOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))