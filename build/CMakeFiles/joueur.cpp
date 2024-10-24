#include "joueur.h"
#include <iostream>
#include <vector>



Joueur::Joueur()
{
    std::string name;
    std::vector<int> listeScore;


    std::cout << "Saisir le nom du joueur : ";


    std::getline(std::cin, name);

    std::cout << "Le nom du joueur est : " << nom << std::endl;

    Joueur::nom = name;
    Joueur::listScore = listeScore;
}


void Joueur::ajouterScore(const int newScore)
{

    Joueur::listScore.push_back(newScore);
}

void Joueur::afficherHistoriqueScore() const
{
    std::cout << "L'historique du joueur "<<Joueur::nom<<" est : \n";
    for (int i = 0; i <Joueur::listScore.size();i++){
       std::cout << "Partie" << i << " : " << Joueur::listScore[i]<< "\n";
    }
}
