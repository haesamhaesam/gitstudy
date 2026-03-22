

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor1.generated.h"

UCLASS()
class GITSTUDY_API AMyActor1 : public AActor
{
	GENERATED_BODY()
	
public:	

	AMyActor1();

protected:

	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;

};
