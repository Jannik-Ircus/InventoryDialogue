
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <DialogueData.h>
#include "DialogueWidget.h"
#include "DialogueStarter.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTORYDIALOGUE_API UDialogueStarter : public UActorComponent
{
	GENERATED_BODY()

public:	
	UDialogueStarter();

	UFUNCTION(BlueprintCallable)
	void StartDialogue(UDialogueData* Dialogue);

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> DialogueWidgetClass;

private:
	UDialogueWidget* DialogueWidgetInstance;		
};
