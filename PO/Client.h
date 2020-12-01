#pragma once
#include "includes.h"
#include "Structures.h"

class Client : private Personne
{
public:
	Client();
	~Client();
	void ModifierClient();
	void AfficherClient();

private:
	int IDClient;
	struct ADRESSE adresse;
	int NombreAchat;

};