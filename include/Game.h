#include "Mot.h"
#include <list>

class Game{
public :
    Game (Mot mot_choisi){
        nombre_de_vies=6;
        mot_secret=mot_choisi;
        indice_trouve={};
        liste_input{};
    }

    void Game::envoi_erreur(char lettre_proposée);
    void Game::envoi_reussite(char lettre_proposée);


private:
    int nombre_de_vies;
    Mot mot_secret;
    std::list<int> indice_trouve;
    std::list<char> liste_input;
    
};