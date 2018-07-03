// Copyrigth Dominik Pavl��ek.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Controller.h"
#include "Tank.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FTankDelegate);

UCLASS()
class TANKGAME_API ATank : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATank();
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
	UFUNCTION(BlueprintPure, Category = Setup)
		float GetHealthPercentage();
	FTankDelegate OnDeath;

private:
	// Called to bind functionality to input
	virtual void BeginPlay() override;
	UPROPERTY(EditDefaultsOnly, Category = Setup)
		int32 TankBaseHealth = 100;
	UPROPERTY(VisibleAnywhere, Category = Setup)
		int32 TankHealth;
};
