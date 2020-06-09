// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    
    SetUpGame();

    PrintLine(TEXT("The Hiddenword is: %s"), *HiddenWord); //Debug Line

    // prompt player for guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    // if game is over then clearscreen*() and setupgame() the game
    // else checking playerguess

    if (bGameOver)  
    {
        ClearScreen();
        SetUpGame();
    }
    else
    {
        if(Input == HiddenWord)
        {
            PrintLine(TEXT("You win!"));
            EndGame();
        }
        else
        {
            if(Input.Len() != HiddenWord.Len())
            {
                PrintLine(TEXT("The Hidden Word is %s characters long, \nYou have lost!"), *HiddenWord); 
                EndGame();
            }
            
            PrintLine(TEXT("Incorrect, you have %i lives left"), Lives);
        }    
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
    PrintLine(TEXT("Welcome to the Bull Cow Game!"));

    HiddenWord = TEXT("cake");
    Lives = 4;
    bGameOver = false;

    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len()); 
    PrintLine(TEXT("Type in your guess and \nPress enter to continue..."));
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("Press enter to play again."));
}
