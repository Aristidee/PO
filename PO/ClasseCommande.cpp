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
	dateEmission.jour = extdateEmission->jour;
	dateEmission.mois = extdateEmission->mois;
	dateEmission.annee = extdateEmission->annee;
}

void ClasseCommande::getDateEmission(struct_date^ extdateEmission)
{
	extdateEmission->jour = dateEmission.jour;
	extdateEmission->mois = dateEmission.mois;
	extdateEmission->annee = dateEmission.annee;
}

void ClasseCommande::setDateLivraison(struct_date^ extdateLivraison)
{
	dateLivraison.jour = extdateLivraison->jour;
	dateLivraison.mois = extdateLivraison->mois;
	dateLivraison.annee = extdateLivraison->annee;
}

void ClasseCommande::getDateLivraison(struct_date^ extdateLivraison)
{
	extdateLivraison->jour = dateLivraison.jour;
	extdateLivraison->mois = dateLivraison.mois;
	extdateLivraison->annee = dateLivraison.annee;
}

void ClasseCommande::setRemise(float^ extremise)
{
	remise = *extremise;
}

void ClasseCommande::getRemise(float^ extremise)
{
	*extremise = remise;
}

void ClasseCommande::setTotal(float^ extTotal)
{
	totalTTC = *extTotal;
}

void ClasseCommande::getTotal(float^ extTotal)
{
	*extTotal = totalTTC;
}

void ClasseCommande::setIDC(int^ extIDC)
{
	IDclient = *extIDC;
}

void ClasseCommande::getIDC(int^ extIDC)
{
	extIDC = IDclient;
}

void ClasseCommande::setAdresseLivraison(ADRESSE^ extadresseLivraison)
{
	adresseLivraison.ID = extadresseLivraison->ID;
	adresseLivraison.numero = extadresseLivraison->numero;
	adresseLivraison.typeDeVoie->Copy(extadresseLivraison->typeDeVoie);
	adresseLivraison.libelleDeVoie->Copy(extadresseLivraison->libelleDeVoie);
	adresseLivraison.Ville->Copy(extadresseLivraison->Ville);
	adresseLivraison.codePostal = extadresseLivraison->codePostal;
}

void ClasseCommande::getAdresseLivraison(ADRESSE^ extadresseLivraison)
{
	extadresseLivraison->ID = adresseLivraison.ID;
	extadresseLivraison->numero = adresseLivraison.numero;
	extadresseLivraison->typeDeVoie->Copy(adresseLivraison.typeDeVoie);
	extadresseLivraison->libelleDeVoie->Copy(adresseLivraison.libelleDeVoie);
	extadresseLivraison->Ville->Copy(adresseLivraison.Ville);
	extadresseLivraison->codePostal = adresseLivraison.codePostal;
}

void ClasseCommande::setRef(System::String^ extRef)
{
	reference->Copy(extRef);
}

void ClasseCommande::getRef(System::String^ extRef)
{
	extRef->Copy(reference);
}

void ClasseCommande::setPanier(PANIER^ extPanier)
{
	PANIER^ temp = extPanier->suivant;
	for (int i = 0; extPanier->suivant != nullptr ; i++)
	{
		panier.referenceArticle = extPanier->referenceArticle;
		panier.quantite = extPanier->quantite;
		temp = extPanier;
	}
}

void ClasseCommande::getPanier(PANIER^ extPanier)
{
	PANIER^ temp = panier.suivant;
	for (int i = 0; panier.suivant != nullptr; i++)
	{
		 extPanier->referenceArticle = panier.referenceArticle;
		extPanier->quantite = panier.quantite;
		temp = panier.suivant;
	}
}

