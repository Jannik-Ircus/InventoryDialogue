// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DialogueData.h"
#include "DialogueWidget.generated.h"

UCLASS()
class INVENTORYDIALOGUE_API UDialogueWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void InitDialogue(UDialogueData* Dialogue);
	
};
