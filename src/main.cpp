#include <iostream>
#include "../include/joueur.h"
#include "../include/Game.h"
#include "../include/Mot.h"

using namespace std;

int main()
{
    std::string word = LEJEUESTCASSE;
    int nbjoueurs;
    cout << "Entrez le nombre de joueurs (1 ou 2) :\n"<< endl;
            cin >> nbjoueurs;


    Joueur joueur1 = Joueur("joueur 1");
    if (nbjoueurs == 2){
        Joueur joueur2 = Joueur("joueur 2");
        cout << "Que le joueur2 entre à l'abri des regards le mot à trouver :"<< endl;
        cin >> word;
        Game jeu = Game(Mot(word));
    }
    else
    {
        Game jeu = Game(Mot());
    }
    jeu.initializeGame();
    while (jeu.get_NbVie() != 0 && jeu.get_List_input().size() < jeu.get_Mot().get().size())
    {
        char guess = jeu.playerInput();
        verifyinput(guess);
        affichage();
    }
    return 0;
}
