#include "includes.h"
#include "Personnage.h"
#include "Arme.h"

Personnage::Personnage(string nom) : m_nom(nom), m_vie(100), m_mana(100)
{
	//Rien à mettre dans le corps du constructeur, tout a déjà été fait !
}

Personnage::Personnage(string nom, string nomArme, int degatsArme) : m_nom(nom), m_vie(100), m_mana(100), m_arme(nomArme, degatsArme)
{
}

Personnage::~Personnage() // Destructeur exemple
{
}

void Personnage::recevoirDegats(int nbDegats)
{
	m_vie -= nbDegats;
	if (m_vie < 0) {
		m_vie = 0;
	}
	cout << m_nom << " a recu " << nbDegats << " degats." << endl;
	Sleep(100);
}

void Personnage::attaquer(Personnage &cible)
{
	cout << m_nom << " attaque " << cible.m_nom << " en faisant " << m_arme.getDegats() << " degats.   -->   ";
	Sleep(100);
	cible.recevoirDegats(m_arme.getDegats());
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
	m_vie += quantitePotion;
	if (m_vie > 100) {
		m_vie = 100;
	}
	cout << m_nom << (" boit ") << quantitePotion << (" de potion et a une vie de ") << m_vie << (".") << endl;
	Sleep(100);
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme)
{
	m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
	//cout << m_nom << (" change d'arme ") << m_arme.getNom() << ("(") << m_arme.getDegats() << (") degats.") << endl;
}

void Personnage::afficherEtat() const
{
	cout << "Nom: " << m_nom << "\tVie: " << m_vie << "\tMana: " << m_mana << "\t";
	m_arme.afficher();
}

bool Personnage::estVivant()
{
	return m_vie > 0;
}
