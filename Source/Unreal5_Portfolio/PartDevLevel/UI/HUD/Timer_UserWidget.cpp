// Fill out your copyright notice in the Description page of Project Settings.


#include "PartDevLevel/UI/HUD/Timer_UserWidget.h"
#include "Components/TextBlock.h"
#include "Kismet/KismetTextLibrary.h"

void UTimer_UserWidget::SetTimerCurStage(EGameStage _SetStage)
{
	AMainGameState* WidgetGameState = UMainGameBlueprintFunctionLibrary::GetMainGameState(GetWorld());
	WidgetGameState->SetCurStage(_SetStage);
}

void UTimer_UserWidget::SetTimer(int _Hour, int _Min, int _Second)
{
	NowTimeSpan = FTimespan(_Hour,_Min,_Second);
	FText TextTemplate = FText::FromString("{_Hour}:{_Min}:{_Second}");

	FFormatNamedArguments Arguments;
	if (_Hour == 0) // 시간이 0이면 분,초만 표시되게 변경
	{
	Arguments.Add(TEXT("_Hour"), FText::AsNumber(_Hour));
	}
	Arguments.Add(TEXT("_Min"), FText::AsNumber(_Min));
	Arguments.Add(TEXT("_Second"), FText::AsNumber(_Second));

	Time = FText::Format(TextTemplate, Arguments);
	TimeTextBlock->SetText(Time);
}

void UTimer_UserWidget::StartTimer(bool _Foward)
{
	b_Foward = _Foward;


}
