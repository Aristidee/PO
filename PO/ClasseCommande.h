#pragma once
#include "Structures.h"


ref class ClasseCommande
{
private:
	int	ID; //incrementer par la requete sql
	struct_date^ dateEmission;
	struct_date^ dateLivraison;
	float remise; // a calculer via IDclient
	float totalTTC;
	int IDclient;
	ADRESSE^ adresseLivraison;
	System::String^ reference;
	PANIER^ panier;

public:
	~ClasseCommande(); //destructeur a appeler a chaque fin de service
	void getID(int^);
	void setDateEmission(struct_date^);
	struct_date^ getDateEmission();
	void setDateLivraison(struct_date^);
	struct_date^ getDateLivraison();
	void setRemise(float^);
	float^ getRemise();
	void setTotal(float^);
	float^ getTotal();
	void setIDC(int^);
	int^ getIDC();
	void setAdresseLivraison(ADRESSE^);
	ADRESSE^ getAdresseLivraison();
	void setRef(System::String^);
	System::String^ getRef();
	void setPanier(PANIER^);
	PANIER^ getPanier();
};

