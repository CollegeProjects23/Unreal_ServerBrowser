// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "NetGameMode.generated.h"



class APlayerController;
class AClient;
class ANavigationObjectBase;
class AMultiplayerNetTestCharacter;


/**
 * 
 */
UCLASS()
class MULTIPLAYERNETTEST_API ANetGameMode : public AGameMode
{
	GENERATED_BODY()
	

protected:

	ANetGameMode();

	//UFUNCTION(BlueprintCallable)
	//void OnPlayerLogin(AClient* PlayerLogingIn);
	//

	//UFUNCTION(BlueprintCallable)
	//void OnLevelTransition(const APlayerController* NewPC);

	//UFUNCTION(BlueprintCallable)
	//void OnPlayerRemoving(const APlayerController* LeavingPlayer);

	//UFUNCTION(BlueprintCallable)
	//bool IsThisPlayerAccounted(APlayerController* controller);

	//UFUNCTION(BlueprintCallable, BlueprintPure)
	//TArray<FClientHandle> GetPlayers();

	//UFUNCTION(BlueprintCallable)
	//FClientHandle GetPlayerHandle(const APlayerController* Player);

	//UFUNCTION(BlueprintCallable)
	//void ReplaceHandle(const APlayerController* Controller, FClientHandle NewHandle);


	////Returns the Index of the Controller, if not found returns -1
	//int32 FindClientHandle(int32 IdOfController);
public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Network)
	TArray<APlayerController*> ActiveControllers;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server Info")
	TSoftObjectPtr<AActor> SpawnLocationReference;
};
