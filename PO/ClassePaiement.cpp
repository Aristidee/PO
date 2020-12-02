#include "ClassePaiement.h"

ClassePaiement::ClassePaiement()
{

}

ClassePaiement::~ClassePaiement()
{

}

struct_date^ ClassePaiement::getEnvoi()
{
	return dateEnvoi;
}

void ClassePaiement::setEnvoi(struct_date^ extdateEnvoi)
{
	dateEnvoi->jour = extdateEnvoi->jour;
	dateEnvoi->mois = extdateEnvoi->mois;
	dateEnvoi->annee = extdateEnvoi->annee;
}

struct_date^ ClassePaiement::getRecu()
{
	return dateRecu;
}

void ClassePaiement::setRecu(struct_date^ extdateRecu)
{
	dateRecu->jour = extdateRecu->jour;
	dateRecu->mois = extdateRecu->mois;
	dateRecu->annee = extdateRecu->annee;
}

System::String^ ClassePaiement::getMoyen()
{
	return moyenPaiement;
}

void ClassePaiement::setMoyen(System::String^ extmoyenPaiement)
{
	moyenPaiement->Copy(extmoyenPaiement);
}

float^ ClassePaiement::getMontant()
{
	return montant;
}

void ClassePaiement::setMontant(float^ extmontant)
{
	montant = *extmontant;
}

int^ ClassePaiement::getIDCommande()
{
	return IDCommande;
}

void ClassePaiement::setIDCommande(int^ extIDCommande)
{
	IDCommande = *extIDCommande;
}

ADRESSE^ ClassePaiement::getAdresse()
{
	return adresseFacturation;
}

void ClassePaiement::setAdresse(ADRESSE^ extadresseFacturation)
{
	adresseFacturation->numero = extadresseFacturation->numero;
	adresseFacturation->typeDeVoie->Copy(extadresseFacturation->typeDeVoie);
	adresseFacturation->libelleDeVoie->Copy(extadresseFacturation->libelleDeVoie);
	adresseFacturation->Ville->Copy(extadresseFacturation->Ville);
	adresseFacturation->codePostal = extadresseFacturation->codePostal;
}
