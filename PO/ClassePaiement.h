#pragma once
#include "Structures.h"

ref class ClassePaiement
{
private:
	int ID;
	struct_date dateEnvoi;
	struct_date dateRecu;
	System::String^ moyenPaiement;
	float montant;
	int IDCommande;
	ADRESSE adresseFacturation;
public:
	ClassePaiement();
	~ClassePaiement();
	void getEnvoi(struct_date^);
	void setEnvoi(struct_date^);
	void getRecu(struct_date^);
	void setRecu(struct_date^);
	void getMoyen(System::String^);
	void setMoyen(System::String^);
	void getMontant(float^);
	void setMontant(float^);
	void getIDCommande(int^);
	void setIDCommande(int^);
	void getAdresse(ADRESSE^);
	void setAdresse(ADRESSE^);
};

