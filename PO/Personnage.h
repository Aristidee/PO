#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>
#include "Arme.h"


class Personnage
{
    public:
    
    Personnage(std::string nom); // Initialiser des attributs communs locales d'une classe -- Le constructeur initialisé l'objet
    Personnage(std::string nom, std::string nomArme, int degatsArme);
    ~Personnage(); // Destructeur exemple

    void recevoirDegats(int nbDegats); // méthodes
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    void afficherEtat() const;
    bool estVivant();

    private:

    const std::string m_nom; // attributs
    int m_vie;
    int m_mana;
    Arme m_arme;
};

#endif