// Copyrigth Dominik Pavlíèek.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankController_Player.generated.h"

class UTankAimingComponent;
class ATank;

UCLASS()
class TANKGAME_API ATankController_Player : public APlayerController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override; // <----------|| declated BeginPlay wia inheritance tree from Pawn
	virtual void Tick(float DeltaTime) override; //<-|| virtual == it's allowed by children class to override this method
	FVector2D MScreenLocation;
private:
	// moves tank barell with cursor
	void AimTowardsCrosshair();
	// returns if aiming is hitting the world surface
	bool GetAimLocation(FVector& OUTHitLocation) const;
	bool GetLookDirection(FVector2D ScreenLocation, FVector& AimDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;
	void SetPawn(APawn* InPawn);
UFUNCTION()
	void OnPlayerTankDeath();
UPROPERTY(EditAnywhere)
	float Range = 100000;
UPROPERTY(EditDefaultsOnly)
	float CrosshairX = 0.5;
UPROPERTY(EditDefaultsOnly)
	float CrosshairY = 0.3;

protected:
	UFUNCTION(BlueprintImplementableEvent, Category = Setup)
		void FoundAimingComponent(UTankAimingComponent* AimingComponentRefernce);
};
