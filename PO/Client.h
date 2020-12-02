#pragma once
#include "includes.h"
#include "Structures.h"

ref class Client : Personne
{
public:
	Client();
	~Client();
	void ModifierClient();
	void AfficherClient();

private:
	int IDClient;
	ADRESSE adresse;
	int NombreAchat;

};