// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class GITPROJECT_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AMyActor();

	virtual void BeginPlay() override;

};
