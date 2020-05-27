// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to the Bull Cow Game!"));
    PrintLine(TEXT("Guess the 4 letter word!")); 
    PrintLine(TEXT("Press enter to continue..."));

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    FString HiddenWord = TEXT("cake");
    if(Input == HiddenWord)
    {
        PrintLine(TEXT("Correct guess.."));
    }
    else
    {
        PrintLine(TEXT("Wrong guess.."));
    }
    
    // PrintLine(Input);
}