// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    
    SetUpGame();

    PrintLine(TEXT("The Hiddenword is: %s \n It is %i characters long"), *HiddenWord, HiddenWord.Len()); //Debug Line

    PrintLine(TEXT("Welcome to the Bull Cow Game!"));
    PrintLine(TEXT("Guess the %i letter word!"), *HiddenWord); 
    PrintLine(TEXT("Press enter to continue..."));

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
        if(Input.Len() != HiddenWord.Len())
        {
           PrintLine(TEXT("The Hidden Word is %s characters long, try again!"), *HiddenWord); 
        }
        PrintLine(TEXT("Incorrect, you have %i lives left"), Lives);
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

void UBullCowCartridge::SetUpGame()
{
    HiddenWord = TEXT("cake");
    Lives = 4;
}
