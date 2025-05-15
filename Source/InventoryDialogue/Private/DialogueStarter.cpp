

#include "DialogueStarter.h"
#include <DialogueWidget.h>

UDialogueStarter::UDialogueStarter()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UDialogueStarter::StartDialogue(UDialogueData* Dialogue)
{
	if (Dialogue && DialogueWidgetClass)
	{
		DialogueWidgetInstance = CreateWidget<UDialogueWidget>(GetWorld(), DialogueWidgetClass);
		if (DialogueWidgetInstance)
		{
			DialogueWidgetInstance->AddToViewport();
			DialogueWidgetInstance->InitDialogue(Dialogue);
		}
	}
}


void UDialogueStarter::BeginPlay()
{
	Super::BeginPlay();

	
}

