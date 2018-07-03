// Copyrigth Dominik Pavlíèek.

#include "TankMovementComponent.h"
#include "TankTracks.h"

void UTankMovementComponent::Initialise(UTankTracks* OUTLeftTrack, UTankTracks* OUTRigthTrack)
{
	if (!OUTLeftTrack || !OUTRigthTrack)
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot initilise left or rigth track on tank!"))
		return;
	}
	LeftTrack = OUTLeftTrack;
	RigthTrack = OUTRigthTrack;
}

void UTankMovementComponent::RequestDirectMove(const FVector & MoveVelocity, bool bForceMaxSpeed)
{
	FVector TankForward = GetOwner()->GetActorForwardVector().GetSafeNormal();
	FVector AIForwardIntention = MoveVelocity.GetSafeNormal();
	float ForwardThrow = FVector::DotProduct(TankForward, AIForwardIntention);
	FVector CrossThrow = FVector::CrossProduct(TankForward, AIForwardIntention);

	IntendMoveForward(ForwardThrow); //<--------|| move tank forward od backward
	IntendMoveRigth(CrossThrow.Z); //<----------|| rotate tank rigth
}

void UTankMovementComponent::IntendMoveForward(float Throw)
{
	LeftTrack->SetTracks(Throw);
	RigthTrack->SetTracks(Throw);
}

void UTankMovementComponent::IntendMoveRigth(float Throw)
{
	LeftTrack->SetTracks(Throw);
	RigthTrack->SetTracks(-Throw);
}

void UTankMovementComponent::IntendMoveLeft(float Throw)
{
	LeftTrack->SetTracks(-Throw);
	RigthTrack->SetTracks(Throw);
}