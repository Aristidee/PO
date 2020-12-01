#pragma once
#include <string>

struct struct_date {
	int jour;
	int mois;
	int annee;
}SDATE;

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

struct PANIER 
{
	int referenceArticle;
	int IDcommande;
	int quantite;

	PANIER* suivant;
}PANIER;