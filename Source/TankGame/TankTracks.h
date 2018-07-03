// Copyrigth Dominik Pavlíèek.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTracks.generated.h"

/**
Holds Tank Tracks Properties
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class TANKGAME_API UTankTracks : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	UTankTracks();
	void DrivingForceRegulation();
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable, Category = "Movement")
		void SetTracks(float Speed);
	void ResetDriveAngle();
	void DriveTank();
	UFUNCTION(BlueprintCallable, Category = "Firing")
		void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
	// Max force in Newtons per track
	UPROPERTY(EditDefaultsOnly, Category = Movement)
		float MaxDrivingForce = 25000000; // 25T tank and accelleration 1g
private:
	float DriveAngle = 0;
};
