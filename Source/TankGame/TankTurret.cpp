// Copyrigth Dominik Pavlíèek.

#include "TankTurret.h"
#include "Engine/World.h"

void UTankTurret::Rotate(float RelativeSpeed)
{
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, 1); //<---------------------------------------|| Clamp RelativeSpeed between -1 and 1
	float RotationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds; //<-------|| amount of angles per second
	float Rotation = RelativeRotation.Yaw + RotationChange; //<-------------------------------------|| calculate RawRotation

	SetRelativeRotation(FRotator(0, Rotation, 0)); //<---------------------------------------------------|| set result
}