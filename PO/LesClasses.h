#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>


class Personnage
{
    public:

    Personnage(std::string nom); // Initialiser des attributs communs locales d'une classe
    Personnage(std::string nom, std::string nomArme, int degatsArme);

    void recevoirDegats(int nbDegats);
    void attaquer(Personnage& cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();

    private:

    std::string m_nom;
    int m_vie;
    int m_mana;
    std::string m_nomArme; //Pas de using namespace std, il faut donc mettre std:: devant string
    int m_degatsArme;
};

#endif