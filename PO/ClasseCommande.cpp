#include "ClasseCommande.h"
#include <string>


ClasseCommande::~ClasseCommande()
{
}

void ClasseCommande::getID(int^ extID)
{
	ID = *extID;
}

void ClasseCommande::setDateEmission(struct_date^ extdateEmission)
{
	dateEmission->jour = extdateEmission->jour;
	dateEmission->mois = extdateEmission->mois;
	dateEmission->annee = extdateEmission->annee;
}

struct_date^ ClasseCommande::getDateEmission()
{
	return dateEmission;
}

void ClasseCommande::setDateLivraison(struct_date^ extdateLivraison)
{
	dateLivraison->jour = extdateLivraison->jour;
	dateLivraison->mois = extdateLivraison->mois;
	dateLivraison->annee = extdateLivraison->annee;
}

struct_date^ ClasseCommande::getDateLivraison()
{
	return dateLivraison;
}

void ClasseCommande::setRemise(float^ extremise)
{
	remise = *extremise;
}

float^ ClasseCommande::getRemise()
{
	return remise;
}

void ClasseCommande::setTotal(float^ extTotal)
{
	totalTTC = *extTotal;
}

float^ ClasseCommande::getTotal()
{
	return totalTTC;
}

void ClasseCommande::setIDC(int^ extIDC)
{
	IDclient = *extIDC;
}

int^ ClasseCommande::getIDC()
{
	return IDclient;
}

void ClasseCommande::setAdresseLivraison(ADRESSE^ extadresseLivraison)
{
	adresseLivraison->ID = extadresseLivraison->ID;
	adresseLivraison->numero = extadresseLivraison->numero;
	adresseLivraison->typeDeVoie->Copy(extadresseLivraison->typeDeVoie);
	adresseLivraison->libelleDeVoie->Copy(extadresseLivraison->libelleDeVoie);
	adresseLivraison->Ville->Copy(extadresseLivraison->Ville);
	adresseLivraison->codePostal = extadresseLivraison->codePostal;
}

ADRESSE^ ClasseCommande::getAdresseLivraison()
{
	return adresseLivraison;
}

void ClasseCommande::setRef(System::String^ extRef)
{
	reference->Copy(extRef);
}

System::String^ ClasseCommande::getRef()
{
	return reference;
}

void ClasseCommande::setPanier(PANIER^ extPanier)
{
	PANIER^ temp = extPanier->suivant;
	for (int i = 0; extPanier->suivant != nullptr ; i++)
	{
		panier->referenceArticle = extPanier->referenceArticle;
		panier->quantite = extPanier->quantite;
		temp = extPanier;
	}
}

PANIER^ ClasseCommande::getPanier()
{
	return panier;
}

