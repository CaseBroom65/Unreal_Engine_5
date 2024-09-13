// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorCustome.generated.h"

UCLASS()
class C_INTRODUTION_API AMyActorCustome : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorCustome();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category = "Examples")
	void ExampleFunction();

	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category ="Example")
	float ExampleFloat;

	UPROPERTY(EditAnyWhere, BluePrintReadWrite, Category = "Example")
	bool BoolVariable;

private:
	int32 IntegerVariable;
	float FloatVariable;
	

};
