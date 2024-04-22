// Fill out your copyright notice in the Description page of Project Settings.


#include "NetGameMode.h"

#include "MyGameState.h"
#include "Client\Client.h"
#include "MultiplayerNetTest\MultiplayerNetTestCharacter.h"

ANetGameMode::ANetGameMode()
{
}

//void ANetGameMode::OnPlayerLogin(AClient* PlayerLogingIn)
//{
//	FClientHandle NewHandle;
//	NewHandle.Controller = PlayerLogingIn;
//	NewHandle.Id = FMath::RandRange(100, 1000);
//	NewHandle.connectionState = EConnection_State::Connected;
//	NewHandle.Name = FName(TEXT("Player"));
//
//
//	//PlayerLogingIn->Id = NewHandle.Id;
//
//	ActivePlayers.Emplace(NewHandle);
//
//	PlayerJoinedEvent.Broadcast(NewHandle);
//}
//
//void ANetGameMode::OnLevelTransition(const APlayerController* NewPC)
//{
//
//	int32 PositionInArr = this->FindClientHandle(NewPC);
//	if (PositionInArr == -1) { return; }
//	FClientHandle Handle = this->ActivePlayers[PositionInArr];
//
//	Handle.Controller = (AClient*)NewPC;
//	//Handle.Controller->SignalIfSuccessfulLevelTransfer();
//}
//
//void ANetGameMode::OnPlayerRemoving(const APlayerController* LeavingPlayer)
//{
//
//	int32 PositionInArr = this->FindClientHandle(LeavingPlayer);
//	if (PositionInArr == -1) { return; }
//	FClientHandle Handle = this->ActivePlayers[PositionInArr];
//	PlayerLeavingEvent.Broadcast(Handle);
//	this->ActivePlayers.RemoveAt(PositionInArr);
//
//}
//
//int32 ANetGameMode::FindClientHandle(int32 IdOfController)
//{
//	int32 Position = -1;
//
//	for (int i = 0; i < this->ActivePlayers.Num(); i++) {
//		if (IdOfController != this->ActivePlayers[i].Id) { continue; }
//
//		Position = i;
//
//		break;
//	}
//
//	return Position;
//}
//
//bool ANetGameMode::IsThisPlayerAccounted(APlayerController* controller)
//{
//	bool Logged = false;
//	int32 PositionInArr = this->FindClientHandle(controller);
//	
//	if (PositionInArr > -1) { Logged = true; }
//	return Logged;
//}
//
//TArray<FClientHandle> ANetGameMode::GetPlayers()
//{
//	return this->ActivePlayers;
//}
//
//FClientHandle ANetGameMode::GetPlayerHandle(const APlayerController* Player)
//{
//	FClientHandle Handle = {};
//
//	int32 PositionInArr = this->FindClientHandle(Player);
//	if (PositionInArr == -1) { return Handle; }
//	Handle = this->ActivePlayers[PositionInArr];
//
//	return Handle;
//}
//
//void ANetGameMode::ReplaceHandle(const APlayerController* Controller, FClientHandle NewHandle)
//{
//
//	int32 PositionInArr = this->FindClientHandle(Controller);
//	if (PositionInArr == -1) { return; }
//	this->ActivePlayers.RemoveAt(PositionInArr);
//	this->ActivePlayers.Emplace(NewHandle);
//}