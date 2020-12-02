#pragma once
#include "Structures.h"

ref class ClassePaiement
{
private:
	int ID;
	struct_date^ dateEnvoi;
	struct_date^ dateRecu;
	System::String^ moyenPaiement;
	float montant;
	int IDCommande;
	ADRESSE^ adresseFacturation;
public:
	ClassePaiement();
	~ClassePaiement();
	struct_date^ getEnvoi();
	void setEnvoi(struct_date^);
	struct_date^ getRecu();
	void setRecu(struct_date^);
	System::String^ getMoyen();
	void setMoyen(System::String^);
	float^ getMontant();
	void setMontant(float^);
	int^ getIDCommande();
	void setIDCommande(int^);
	ADRESSE^ getAdresse();
	void setAdresse(ADRESSE^);
};

