// Copyrigth Dominik Pavlíèek.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankController_AI.generated.h"

UCLASS()
class TANKGAME_API ATankController_AI : public AAIController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetPawn(APawn* InPawn) override;

private:
	// Distance from which AI tank stops movement and start firing at Player
	UPROPERTY(EditDefaultsOnly, Category = Movement)
		float AcceptanceRadius = 25000; 
	UFUNCTION()
		void OnAITankDeath();
};
