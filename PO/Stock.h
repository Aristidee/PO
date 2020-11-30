#pragma once
#include "Includes.h"

class Stock
{
public:
	Stock(); //ajout d'un nouveau produit au stock
	~Stock(); //suppression d'un produit du stock
	void ModifierProduit();
	void AfficherProduit();

private:
	int IDproduit;
	std::string NomProduit;
	int quantité;
	int PrixUnitaire;
};