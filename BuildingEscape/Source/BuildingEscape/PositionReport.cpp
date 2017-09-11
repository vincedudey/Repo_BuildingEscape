// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionReport.h"
#include "Gameframework/Actor.h"

// Sets default values for this component's properties
//constructor
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true; //this bit of code runs at every single frame

	
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay(); //do the superclass's beginplay first up the inheritance tree

	// ...
	//macro
	FString ObjectName = GetOwner()->GetName();
	FString ObjectPos = GetOwner()->GetTransform().GetLocation().ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *ObjectName, *ObjectPos); //%s format string, *ObjectName dereference is used as a TCHAR array type
}


// Called every frame
void UPositionReport::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction); //do the superclass's tickcomponent first up the inheritance tree

	// ...
}

