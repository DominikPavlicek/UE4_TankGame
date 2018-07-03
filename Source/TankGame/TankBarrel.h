// Copyrigth Dominik Pavlíèek.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
Holds Tank Barrel Properties
*/
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TANKGAME_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	void Elevate(float RelativeSpeed);
private:
	UPROPERTY(EditAnywhere, Category = Barrel)
		float MaxDegreesPerSecond = 5.f;
	UPROPERTY(EditDefaultsOnly, Category = Barrel)
		float MaxElevationDegrees = 55.f;
	UPROPERTY(EditDefaultsOnly, Category = Barrel)
		float MinElevationDegrees = 0.f;
};
