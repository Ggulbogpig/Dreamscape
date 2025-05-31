// Copyright Epic Games, Inc. All Rights Reserved.

#include "DreamLockedPickUpComponent.h"

UDreamLockedPickUpComponent::UDreamLockedPickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UDreamLockedPickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UDreamLockedPickUpComponent::OnSphereBeginOverlap);
}

void UDreamLockedPickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	ADreamLockedCharacter* Character = Cast<ADreamLockedCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
