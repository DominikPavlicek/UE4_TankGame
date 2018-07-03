// Copyrigth Dominik Pavlíèek.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "Projectile.generated.h"

UCLASS()
class TANKGAME_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = Components)
		UProjectileMovementComponent* ProjectileMovement = nullptr;
	UPROPERTY(VisibleAnywhere, Category = Components)
		UStaticMeshComponent* CollisionMesh = nullptr;
	UPROPERTY(VisibleAnywhere, Category = Components)
		UParticleSystemComponent* LaunchBlast = nullptr;
	UPROPERTY(VisibleAnywhere, Category = Components)
		UParticleSystemComponent* ImpactBlast = nullptr;
	UPROPERTY(VisibleAnywhere, Category = Components)
		URadialForceComponent* ImpactForce = nullptr;
	UPROPERTY(EditDefaultsOnly, Category = Components)
		float BaseDamage = 20;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void LaunchProjectile(float LaunchSpeed);
	UFUNCTION(BlueprintCallable, Category = Firing)
		void OnHit();
	UFUNCTION(BlueprintCallable, Category = Firing)
		UStaticMeshComponent* GetCollisionMesh() const;
};
