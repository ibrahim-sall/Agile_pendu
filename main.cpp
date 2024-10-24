
#include "joueur.h"
#include "Game.h"
#include "mot.h"
#include <iostream>

using namespace std;

int main() {
    int nbjoueurs;
    string word;

    cout << "Entrez le nombre de joueurs (1 ou 2) : ";
    cin >> nbjoueurs;

    //Game jeu(); // Déclaration de la variable jeu
    mot mot = mot();
    Game jeu = Game(mot);
    if (nbjoueurs == 2) {
        Joueur joueur2 = Joueur("joueur 2");
        cout << "Que le joueur 2 entre à l'abri des regards le mot à trouver :" << endl;
        cin >> word;
        Game jeu = Game(mot(word)); // Initialisation de jeu
        jeu.initializeGame();
    }

    

    while (jeu.getNombreDeVies() != 0 && jeu.getListInput().size() < jeu.getMotSecret().get_word_length()) {
        char guess = jeu.playerInput();
        jeu.verifyInput(guess);
        jeu.affichage();
    }

    return 0;
};
