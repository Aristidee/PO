#include "Stock.h"
#include "Includes.h"

Stock::Stock()
{

}

Stock::~Stock()
{

}

int Stock::getID()
{
    return IDproduit;
}

string Stock::getNom()
{
    return nomProduit;
}

void Stock::setNom(string nom)
{
    nomProduit = nom;
}

int Stock::getQuantite()
{
    return quantite;
}

void Stock::setQuantite(int n)
{
    quantite += n;
}

int Stock::getPrix()
{
    return prixUnitaire;
}

void Stock::setPrix(int nvprix)
{
    prixUnitaire = nvprix;
}
