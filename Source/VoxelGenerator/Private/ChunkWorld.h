// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChunkWorld.generated.h"

UCLASS()
class VOXELGENERATOR_API AChunkWorld : public AActor
{
	GENERATED_BODY()

public:
	AChunkWorld();
	
	UPROPERTY(EditAnywhere, Category = "Chunk World")
	TSubclassOf<AActor> Chunk;
	
	UPROPERTY(EditAnywhere, Category = "Chunk World")
	int DrawDistance = 5;
	
	UPROPERTY(EditAnywhere, Category = "Chunk World")
	int ChunkSize = 32;
	
	

protected:
	virtual void BeginPlay() override;
	
	
};
