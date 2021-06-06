// Fill out your copyright notice in the Description page of Project Settings.


#include "LevelUp.h"

LevelUp::LevelUp()
{
	//printf("test!");
}

LevelUp::~LevelUp()
{
	Test();
}

void LevelUp::Test()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Screen Message"));
}
