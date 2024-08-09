// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Global/DataTable/MonsterDataRow.h"
#include "BasicMonsterData.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL5_PORTFOLIO_API UBasicMonsterData : public UObject
{
	GENERATED_BODY()
	
public:
	// �⺻ ���� Data
	const FMonsterDataRow* BaseData;

	// ���� Data
	float Hp = 100.0f;
	float AttackDamage = 5.0f;

	// ���� ��ġ
	FVector OriginPos = FVector::ZeroVector;
	
public:
	float TimeCount = 0.0f;
	
	// ������ ���̺� �°� �ʿ�
	float PatrolRange = 800.0f;

	float AttackRange = 200.0f;

	bool bScream = false;
};
