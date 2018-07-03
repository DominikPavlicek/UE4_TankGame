// Copyrigth Dominik Pavlíèek.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
Holds Tank Turret Properties
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TANKGAME_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()
public:
	void Rotate(float RelativeSpeed);
private:
	UPROPERTY(EditAnywhere, Category = Turret)
		float MaxDegreesPerSecond = 25.f;	
};
