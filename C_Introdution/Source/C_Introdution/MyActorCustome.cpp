// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorCustome.h"

// Sets default values
AMyActorCustome::AMyActorCustome()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	IntegerVariable = 10;
	FloatVariable = 20.5f;
	BoolVariable = true;
}

// Called when the game starts or when spawned
void AMyActorCustome::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorCustome::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AMyActorCustome::ExampleFunction()
{
	int32 Sum = IntegerVariable + 5;
	float product = FloatVariable * 2.0f;


	bool bResult = (IntegerVariable > 5) && BoolVariable;

	if (bResult)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Blue, TEXT("Resultis true"));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Result is false"));
	}
}


