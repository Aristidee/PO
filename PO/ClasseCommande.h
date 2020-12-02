#pragma once
#include "Structures.h"


ref class ClasseCommande
{
private :
	int	ID; //incrementer par la requete sql
	ref struct struct_date dateEmission;
	ref struct struct_date dateLivraison;
	float remise; // a calculer via IDclient
	float totalTTC;
	int IDclient;
	ref struct ADRESSE adresseLivraison;
	System::String reference;
	ref struct PANIER panier;

public :
	ClasseCommande(); //constructeur par defaut, prend les parametres saisis et verifie leur validite
	~ClasseCommande(); //destructeur a appeler a chaque fin de service
	void modifier();
	void afficherCommande();
};

