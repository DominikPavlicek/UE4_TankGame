// Copyrigth Dominik Pavlíèek.

#include "Projectile.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AProjectile::AProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(FName("Projectile Movement"));
	ProjectileMovement->bAutoActivate = false;

	CollisionMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("CollisionMesh"));
		SetRootComponent(CollisionMesh);
		CollisionMesh->SetNotifyRigidBodyCollision(true); //<--|| simulation generates hit event
		CollisionMesh->SetVisibility(true); //<----------------|| set visibility

	LaunchBlast = CreateDefaultSubobject<UParticleSystemComponent>(FName("LaunchBlast"));
	LaunchBlast->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform); //<------------------|| particle system will be always attached to the collision mesh 

	ImpactBlast = CreateDefaultSubobject<UParticleSystemComponent>(FName("ImpactBlast"));
	ImpactBlast->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	ImpactBlast->bAutoActivate = false;

	ImpactForce = CreateDefaultSubobject<URadialForceComponent>(FName("ImpactForce"));
	ImpactForce->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AProjectile::LaunchProjectile(float LaunchSpeed)
{
	ProjectileMovement->SetVelocityInLocalSpace(FVector::ForwardVector * LaunchSpeed);
	ProjectileMovement->Activate();
}

void AProjectile::OnHit()
{
	LaunchBlast->Deactivate();
	ImpactBlast->Activate();
	ImpactForce->FireImpulse();

	UGameplayStatics::ApplyRadialDamage(
		this,
		BaseDamage,
		GetActorLocation(),
		ImpactForce->Radius,
		UDynamicClass::StaticClass(),
		TArray<AActor*>(), //<-----------|| empty array to damage all actors
		this
	);
}

UStaticMeshComponent* AProjectile::GetCollisionMesh() const
{
	return CollisionMesh;
}

