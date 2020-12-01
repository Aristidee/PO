#pragma once
#include <string>

struct DATE
{
	int Jour;
	int Mois;
	int Annee;
}DATE;

struct ADRESSE
{
	int ID;
	int numero;
	std::string typeDeVoie;
	std::string libelleDeVoie;
	std::string Ville;
	double codePostal;

	ADRESSE* suivante;
}ADRESSE;