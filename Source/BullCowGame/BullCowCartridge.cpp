// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    HiddenWord = TEXT("cat");
    PrintLine(TEXT("Moo! Welcome to Bulls and Cows!\nPlease press a button to continue"));

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    PrintLine(TEXT("You typed: ") + Input);
    if(Input == HiddenWord)
    {
        PrintLine(TEXT("Congrats! You won the game!"));
        return;
    }else
    {
        PrintLine(TEXT("Incorrect Word. Please Try Again."));
    }
}
