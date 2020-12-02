#pragma once
#include <string>

ref struct struct_date {
	int jour;
	int mois;
	int annee;
};

ref struct ADRESSE
{
	int ID;
	int numero;
	System::String^ typeDeVoie;
	System::String^ libelleDeVoie;
	System::String^ Ville;
	double codePostal;

	ADRESSE^ suivante;
};

ref struct PANIER 
{
	int referenceArticle;
	int quantite;

	PANIER^ suivant;
};