#pragma once
#include "Structures.h"

class ClasseCommande
{
private :
	int	ID; //incrementer par la requete sql
	struct SDATE dateEmission;
	struct SDATE dateLivraison;
	float remise; // a calculer via IDclient
	float totalTTC;
	int IDclient;
	struct ADRESSE adresseLivraison;
	std::string reference;
	struct PANIER panier;

public :
	ClasseCommande(); //constructeur par defaut, prend les parametres saisis et verifie leur validite
	~ClasseCommande(); //destructeur a appeler a chaque fin de service
	void modifier();
	void afficherCommande();
};

