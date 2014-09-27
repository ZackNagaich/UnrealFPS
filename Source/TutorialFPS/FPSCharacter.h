

#pragma once

#include "GameFramework/Character.h"
#include "FPSCharacter.generated.h"

/** Pawn mesh: 1st person view (arms; seen only by self) */
UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
TSubobjectPtr<USkeletalMeshComponent> FirstPersonMesh;

/**
 * 
 */
UCLASS()
class TUTORIALFPS_API AFPSCharacter : public ACharacter
{
	GENERATED_UCLASS_BODY()
		virtual void BeginPlay() override;
		protected:
			virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
		//handles moving forward/backward
			UFUNCTION()
				void MoveForward(float Val);
			//handles strafing
			UFUNCTION()
				void MoveRight(float Val);

		//Sets jump flag when key is pressed
			UFUNCTION()
				void OnStartJump();

		//Clears jump flag when key is released
			UFUNCTION()
				void OnStopJump();
	
};
