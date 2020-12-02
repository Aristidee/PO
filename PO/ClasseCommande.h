#pragma once
#include "Structures.h"


ref class ClasseCommande
{
private:
	int	ID; //incrementer par la requete sql
	struct_date dateEmission;
	struct_date dateLivraison;
	float remise; // a calculer via IDclient
	float totalTTC;
	int IDclient;
	ADRESSE adresseLivraison;
	System::String^ reference;
	PANIER panier;

public:
	~ClasseCommande(); //destructeur a appeler a chaque fin de service
	void getID(int^);
	void setDateEmission(struct_date^);
	void getDateEmission(struct_date^);
	void setDateLivraison(struct_date^);
	void getDateLivraison(struct_date^);
	void setRemise(float^);
	void getRemise(float^);
	void setTotal(float^);
	void getTotal(float^);
	void setIDC(int^);
	void getIDC(int^);
	void setAdresseLivraison(ADRESSE^);
	void getAdresseLivraison(ADRESSE^);
	void setRef(System::String^);
	void getRef(System::String^);
	void setPanier(PANIER^);
	void getPanier(PANIER^);
};

