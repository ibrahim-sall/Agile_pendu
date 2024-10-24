#include "Game.h"
#include <iostream>
#include <string>

string wordToGuess = "mot"; //à modifier
string currentGuessState;

void initializeGame()
{
    currentGuessState = string(wordToGuess.size(), '_');
    cout << "Welcome to Hangman! Bienvenu à PENDU!" << endl;
    cout << "Le mot à deviner est: " << currentGuessState << endl;
}

char playerInput() 
{
    char guess;
    cout << "Devinez une lettre: ";
    cin >> guess;
    return guess;
}

void playerRight(bool )
{
    cout << "Félicitation, c'est correct ";

}
