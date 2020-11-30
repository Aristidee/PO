#pragma once
#include "includes.h"

class Client : private Personne
{
public:
	Client();
	~Client();
	void ModifierClient();
	void AfficherClient();

private:
	int IDClient;
	struct AdresseFacturation
	{
		string Numero;
		string rue;
		string ville;
		string codePostal;
	};
	struct AdresseLivraison
	{
		string Numero;
		string rue;
		string ville;
		string codePostal;
	};
	int NombreAchat;

};