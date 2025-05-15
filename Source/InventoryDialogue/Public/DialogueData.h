#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DialogueData.generated.h"

USTRUCT(BlueprintType)
struct FDialogueLine 
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString Speaker;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(MultiLine=true))
	FString Text;
};

UCLASS(BlueprintType)
class INVENTORYDIALOGUE_API UDialogueData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FDialogueLine> DialogueLines;
};
