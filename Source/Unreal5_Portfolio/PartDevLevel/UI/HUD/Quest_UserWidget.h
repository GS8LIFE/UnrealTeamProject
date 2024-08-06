// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "../../../Global/MainGameBlueprintFunctionLibrary.h"
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Quest_UserWidget.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL5_PORTFOLIO_API UQuest_UserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	FName EnumToFName(EGameStage EnumValue);
	UFUNCTION(BlueprintCallable)
	FName WidgetGetCurStage();
};
