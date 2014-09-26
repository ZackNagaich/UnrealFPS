

#pragma once

#include "GameFramework/GameMode.h"
#include "FPSGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TUTORIALFPS_API AFPSGameMode : public AGameMode
{
	GENERATED_UCLASS_BODY()

	virtual void StartPlay() override;
	
};
