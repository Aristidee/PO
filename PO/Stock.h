#pragma once

ref class Stock
{
public:
	Stock(); //ajout d'un nouveau produit au stock
	~Stock(); //suppression d'un produit du stock
	int getID();
	System::String getNom();
	void setNom(System::String);
	int getQuantite();
	void setQuantite(int);
	int getPrix();
	void setPrix(int);

private:
	int IDproduit;
	System::String nomProduit;
	int quantite;
	int prixUnitaire;
};