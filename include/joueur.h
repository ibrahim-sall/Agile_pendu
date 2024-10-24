#ifndef JOUEUR_H
#define JOUEUR_H
#include <iostream>
#include <vector>

class Joueur
{
public:
    Joueur();
    Joueur(std::string name);
    std::string nom;
    std::vector<int> listScore;

    void ajouterScore(const int newScore);
    void afficherHistoriqueScore() const;
};

#endif // JOUEUR_H
