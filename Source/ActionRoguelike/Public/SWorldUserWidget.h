// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/SizeBox.h"
#include "SWorldUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROGUELIKE_API USWorldUserWidget : public UUserWidget
{
	GENERATED_BODY()


protected:
	UPROPERTY(meta = (BindWidget))
	USizeBox* ParentSizeBox;
		
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

public:

	UPROPERTY(EditAnywhere,Category="UI")
	FVector Worldoffset;
	
	UPROPERTY(BlueprintReadOnly,Category="UI",meta=(ExposeOnSpawn))
	AActor* AttachedActor;
};
