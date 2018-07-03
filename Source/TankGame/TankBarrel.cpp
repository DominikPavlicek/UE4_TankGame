// Copyrigth Dominik Pavlíèek.

#include "TankBarrel.h"
#include "Engine/World.h"

void UTankBarrel::Elevate(float RelativeSpeed)
{
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, 1); //<----------------------------------------|| Clamp RelativeSpeed between -1 and 1
	float ElevationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds; //<-------|| amount of angles per second
	float RawElevation = RelativeRotation.Pitch + ElevationChange; //<------------------------------------|| calculate RawElevation
	float Elevation = FMath::Clamp<float>(RawElevation, MinElevationDegrees, MaxElevationDegrees); //<----|| work with float || clamp RawNewElevation between Max and Min
	SetRelativeRotation(FRotator(Elevation, 0, 0)); //<---------------------------------------------------|| set result
}


