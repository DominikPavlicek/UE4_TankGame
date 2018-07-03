// Copyrigth Dominik Pavlíèek.

#include "TankTracks.h"
#include "Engine/World.h"

UTankTracks::UTankTracks()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UTankTracks::BeginPlay()
{
	OnComponentHit.AddDynamic(this, &UTankTracks::OnHit);
}

void UTankTracks::DrivingForceRegulation()
{
	/*
		This method removed "sliding" effect from tank, because tanks do not slide.
		We are calculating power needed to null the effect of sliding basically by calculating cons angle
		and then calculating needed force to null the sliding force and finally then applying the needed
		force to stop the sliding of the tank.
	*/
	
	float SlideSpeed = FVector::DotProduct(GetRightVector(), GetComponentVelocity());
	float DeltaTime = GetWorld()->GetDeltaSeconds();
	FVector CorrectionAcceleration = -SlideSpeed / DeltaTime * GetRightVector();
	UStaticMeshComponent* TankRoot = Cast<UStaticMeshComponent>(GetOwner()->GetRootComponent());
	FVector CorrectionForce = (TankRoot->GetMass() * CorrectionAcceleration) / 2;
	TankRoot->AddForce(CorrectionForce);
}

void UTankTracks::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	DriveTank();
	DrivingForceRegulation();
	ResetDriveAngle();
}

void UTankTracks::SetTracks(float Speed)
{
	DriveAngle = FMath::Clamp<float>(DriveAngle + Speed, -1, 1);
}

void UTankTracks::ResetDriveAngle()
{
	DriveAngle = 0;
}

void UTankTracks::DriveTank()
{
	FVector Force = GetForwardVector() * MaxDrivingForce * DriveAngle;
	FVector ForceLocation = GetComponentLocation();
	auto RootComponent = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	if (RootComponent)
	{
		RootComponent->AddForceAtLocation(Force, ForceLocation);
	}
}
