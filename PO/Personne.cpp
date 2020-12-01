#include "Personne.h"


Personne::Personne()
{

}

Personne::~Personne()
{

}

void Personne::setNom(string nvnom)
{
	Nom = nvnom;
}

void Personne::setPrenom(string nvprenom)
{
	Prenom = nvprenom;
}

void Personne::setDate(int nbannee, int nbmois, int nbjour)
{
	date.annee = nbannee;
	date.mois = nbmois;
	date.jour = nbjour;
}

string Personne::getPrenom()
{
	return Prenom;
}

string Personne::getNom()
{
	return Nom;
}

int Personne::getID()
{
	return ID;
}
