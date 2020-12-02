#include "Personne.h"


Personne::Personne()
{

}

Personne::~Personne()
{

}

void Personne::setNom(System::String nvnom)
{
	Nom = nvnom;
}

void Personne::setPrenom(System::String nvprenom)
{
	Prenom = nvprenom;
}

void Personne::setDate(int nbannee, int nbmois, int nbjour)
{
	date.annee = nbannee;
	date.mois = nbmois;
	date.jour = nbjour;
}

System::String Personne::getPrenom()
{
	return Prenom;
}

System::String Personne::getNom()
{
	return Nom;
}

int Personne::getID()
{
	return ID;
}
