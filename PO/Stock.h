#pragma once
#include "Includes.h"

class Stock
{
public:
	Stock(); //ajout d'un nouveau produit au stock
	~Stock(); //suppression d'un produit du stock
	int getID();
	string getNom();
	void setNom(string);
	int getQuantite();
	void setQuantite(int);
	int getPrix();
	void setPrix(int);

private:
	int IDproduit;
	std::string nomProduit;
	int quantite;
	int prixUnitaire;
};