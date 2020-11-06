#include "includes.h"
#include "LesClasses.h"

Personnage::Personnage(string nom) : m_nom(nom), m_vie(100), m_mana(100), m_nomArme("Épée rouillée"), m_degatsArme(10)
{
	//Rien à mettre dans le corps du constructeur, tout a déjà été fait !
}

Personnage::Personnage(string nom, string nomArme, int degatsArme) : m_nom(nom), m_vie(100), m_mana(100), m_nomArme(nomArme), m_degatsArme(degatsArme)
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

void Personnage::attaquer(Personnage& cible)
{
	cout << m_nom << " attaque " << cible.m_nom << " en faisant " << m_degatsArme << " degats.   -->   ";
	Sleep(100);
	cible.recevoirDegats(m_degatsArme);
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
	m_nomArme = nomNouvelleArme;
	m_degatsArme = degatsNouvelleArme;
	cout << m_nom << (" change d'arme ") << m_nomArme << ("(") << m_degatsArme << (") degats.") << endl;
}

bool Personnage::estVivant()
{
	return m_vie > 0;
}
