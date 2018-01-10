// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FibreOpticInstance.generated.h"

/**
 * 
 */
UCLASS()
class TRAINJAMAIE_API UFibreOpticInstance : public UGameInstance
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, Category = "Instance")
		int32 currentScore;
		
		UPROPERTY(BlueprintReadWrite, Category = "Instance")
		int32 highScore;

		UPROPERTY(BlueprintReadWrite, Category = "Instance")
		int32 numTries;
	
};
