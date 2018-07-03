// Copyrigth Dominik Pavlíèek.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"

class TankTracks;

/**
 Holds Tank Movement Properties
 */
UCLASS(ClassGroup = (TankComponents), meta = (BlueprintSpawnableComponent))
class TANKGAME_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()
	
private:
	UFUNCTION(BlueprintCallable, Category = Setup)
		void IntendMoveForward(float Throw);
	UFUNCTION(BlueprintCallable, Category = Setup)
		void IntendMoveRigth(float Throw);
	UFUNCTION(BlueprintCallable, Category = Setup)
		void IntendMoveLeft(float Throw);
	UFUNCTION(BlueprintCallable, Category = Setup)
		void Initialise(UTankTracks* OUTLeftTrack, UTankTracks* OUTRigthTrack);
	UTankTracks* LeftTrack = nullptr;
	UTankTracks* RigthTrack = nullptr;

public:
	virtual void RequestDirectMove(const FVector & MoveVelocity, bool bForceMaxSpeed) override;
};
