// Fill out your copyright notice in the Description page of Project Settings.

#include "BuildingEscape.h"
#include "PositionReport.h"


// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();

	// ...
	FString ObjectName;
	FString PosX;
	FString PosY;
	FString PosZ;
	ObjectName=GetOwner()->GetName();

	//PosX = GetOwner()->GetActorLocation.X;
	//PosY = GetOwner()->GetActorLocation.Y;
	//PosZ = GetOwner()->GetActorLocation.Z;

	FString ObjectPos = GetOwner()->GetTransform().GetLocation().ToString();

	//FString ObjectPos = (("X=%d, Y=%d, Z=%d"),PosX,PosY,PosZ);
	UE_LOG(LogTemp, Warning, TEXT("Position Report: %s is at %s"), *ObjectName, *ObjectPos);
}


// Called every frame
void UPositionReport::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

