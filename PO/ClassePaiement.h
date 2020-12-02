#pragma once
#include "Structures.h"

ref class ClassePaiement
{
private :
	int ID;
	struct_date dateEnvoi;
	struct_date dateRecu;
	System::String moyenPaiement;
	float montant;
	int IDCommande;
	ADRESSE adresseFacturation;
public :
	ClassePaiement();
	~ClassePaiement();
	struct_date getEnvoi();
	void setEnvoi(int, int, int);
	struct_date getRecu();
	void setRecu(int, int, int);
	std::string getMoyen();
	void setMoyen(std::string);
	int getIDCommande();
	void setIDCommande(int);
	ADRESSE getAdresse();
	void setAdresse(int, System::String, System::String, System::String, double);

};

