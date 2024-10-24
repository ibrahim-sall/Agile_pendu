#include "mot.h"
#include <list>

class Game{
public :
    Game (mot mot_choisi){
        nombre_de_vies=6;
        mot_secret=mot_choisi;
        indice_trouve={};
        list_input={};
    }

    void initializeGame();
    char playerInput();
    void verifyInput(char guess);

    void envoi_erreur(char lettre_proposée);

    void envoi_reussite(char lettre_proposée);

    void affichage();
    
    int getNombreDeVies() const {
        return nombre_de_vies;
    }

    void setNombreDeVies(int vies) {
        nombre_de_vies = vies;
    }

    mot getMotSecret() const {
        return mot_secret;
    }

    void setMotSecret(const mot& mot_choisi) {
        mot_secret = mot_choisi;
    }

    std::list<int> getIndiceTrouve() const {
        return indice_trouve;
    }

    void setIndiceTrouve(const std::list<int>& indices) {
        indice_trouve = indices;
    }

    std::list<char> getListInput() const {
        return list_input;
    }

    void setListInput(const std::list<char>& inputs) {
        list_input = inputs;
    }


protected:
    int nombre_de_vies;
    mot mot_secret;
    std::list<int> indice_trouve;
    std::list<char> list_input;
    
};