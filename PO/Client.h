#pragma once
#include "includes.h"
#include "Structures.h"

ref class Client : Personne
{
public:
	Client();
	~Client();
	void ModifierClient();
	void Ajouter_achat(int nbachat) { Nombre_d_achat += nbachat; }
	void Retirer_achat(int nbmachat) { Nombre_d_achat -= nbmachat; }
	void AfficherClient();

private:
	int IDClient;
	ADRESSE adresse;
	int NombreAchat;

};