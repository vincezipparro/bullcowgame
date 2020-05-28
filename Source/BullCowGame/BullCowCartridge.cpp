// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to the Bull Cow Game!"));
    PrintLine(TEXT("Guess the 4 letter word!")); 
    PrintLine(TEXT("Press enter to continue..."));

    // setting up game
    InitGame();

    // prompt player for guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    //checking playerguess
    if(Input == HiddenWord)
    {
        PrintLine(TEXT("You win!"));


    }
    else
    {
        PrintLine(TEXT("You Lose!"));
    }

    // check if isogram
    // prompt to guess again
    // check right number of characters
    // prompt to guess again

    // remove life

    // check if lives > 0
    // if yes guessagain
    // show lives left
    // if no show gameover and hiddenword
    // prompt to playagain, press enter to play again?
    // check user input
    // playagain or quit
}

void UBullCowCartridge::InitGame()
{
    HiddenWord = TEXT("cake");
    Lives = 4;
}
