#include "Game.h"
#include <iotream>

void Envoi_erreur(char lettre_proposée){
    std::cout<<"La lettre proposée n'est pas dans le mot";
    liste_input.push_back(lettre_proposée);
}

void Game::Envoi_réussite(char lettre_proposée){
    std::cout<<"La lettre proposée est dans le mot";
    liste_input.push_back(lettre_proposée);
}