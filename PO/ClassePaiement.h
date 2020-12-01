#pragma once
#include "Structures.h"

class ClassePaiement
{
private :
	int ID;
	struct struct_date dateEnvoi;
	struct struct_date dateRecu;
	std::string moyenPaiement;
	float montant;
	int IDCommande;
	struct ADRESSE adresseFacturation;
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
	struct ADRESSE getAdresse();
	void setAdresse(int, std::string, std::string, std::string, double);

};

