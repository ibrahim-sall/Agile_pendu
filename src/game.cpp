#include "Game.h"
#include <iostream>
#include <string>

using namespace std;

string wordToGuess = "givemeaword"; //à modifier
string currentGuessState;
vector<char> list_input;

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

void verifyInput(char guess) //vérifier si la lettre est dans le mot
{
    bool found = false;
    for (int i=0; i<wordToGuess.size(); i++)
    {
        if (wordToGuess[i] == guess)
        {   
            currentGuessState[i] = guess;
            found = true;
        }
    }

    if (found)
    {
        Game::Envoi_réussite(guess)
    }
    else
    {
        Game::Envoi_erreur(guess)
    }
    
    cout << "Le mot current est: " << currentGuessState << endl;
}

void Envoi_erreur(char lettre_proposée){
    std::cout<<"La lettre proposée n'est pas dans le mot";
    liste_input.push_back(lettre_proposée);
}

void Game::Envoi_réussite(char lettre_proposée){
    std::cout<<"La lettre proposée est dans le mot";
    liste_input.push_back(lettre_proposée);
}