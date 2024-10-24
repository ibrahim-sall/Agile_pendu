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

void Game::Envoi_erreur(char lettre_proposée){
    std::cout<<"La lettre proposée n'est pas dans le mot";
    liste_input.push_back(lettre_proposée);
}

void Game::Envoi_réussite(char lettre_proposée){
    std::cout<<"La lettre proposée est dans le mot";
    liste_input.push_back(lettre_proposée);
}
