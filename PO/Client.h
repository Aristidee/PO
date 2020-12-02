#pragma once
#include "includes.h"
#include "Structures.h"

ref class Client : Personne
{
public:
	Client();
	~Client();
	void ModifierClient();
	void Ajouter_achat(int nbachat) { NombreAchat += nbachat; }
	void Retirer_achat(int nbmachat) { NombreAchat -= nbmachat; }
	void AfficherClient();

private:
	int IDClient;
	ADRESSE adresse;
	int NombreAchat;

};