#include "ClassePaiement.h"

ClassePaiement::ClassePaiement()
{

}

ClassePaiement::~ClassePaiement()
{

}

void ClassePaiement::getEnvoi(struct_date^ extdateEnvoi)
{
	extdateEnvoi->jour = dateEnvoi.jour;
	extdateEnvoi->mois = dateEnvoi.mois;
	extdateEnvoi->annee = dateEnvoi.annee;
}

void ClassePaiement::setEnvoi(struct_date^ extdateEnvoi)
{
	dateEnvoi.jour = extdateEnvoi->jour;
	dateEnvoi.mois = extdateEnvoi->mois;
	dateEnvoi.annee = extdateEnvoi->annee;
}

void ClassePaiement::getRecu(struct_date^ extdateRecu)
{
	extdateRecu->jour = dateRecu.jour;
	extdateRecu->mois = dateRecu.mois;
	extdateRecu->annee = dateRecu.annee;
}

void ClassePaiement::setRecu(struct_date^ extdateRecu)
{
	dateRecu.jour = extdateRecu->jour;
	dateRecu.mois = extdateRecu->mois;
	dateRecu.annee = extdateRecu->annee;
}

void ClassePaiement::getMoyen(System::String^ extmoyenPaiement)
{
	extmoyenPaiement->Copy(moyenPaiement);
}

void ClassePaiement::setMoyen(System::String^ extmoyenPaiement)
{
	moyenPaiement->Copy(extmoyenPaiement);
}

void ClassePaiement::getMontant(float^ extmontant)
{
	*extmontant = montant;
}

void ClassePaiement::setMontant(float^ extmontant)
{
	montant = *extmontant;
}

void ClassePaiement::getIDCommande(int^ extIDCommande)
{
	*extIDCommande = IDCommande;
}

void ClassePaiement::setIDCommande(int^ extIDCommande)
{
	IDCommande = *extIDCommande;
}

void ClassePaiement::getAdresse(ADRESSE^ extadresseFacturation)
{
	extadresseFacturation->numero = adresseFacturation.numero;
	extadresseFacturation->typeDeVoie->Copy(adresseFacturation.typeDeVoie);
	extadresseFacturation->libelleDeVoie->Copy(adresseFacturation.libelleDeVoie);
	extadresseFacturation->Ville->Copy(adresseFacturation.Ville);
	extadresseFacturation->codePostal = adresseFacturation.codePostal;
}

void ClassePaiement::setAdresse(ADRESSE^ extadresseFacturation)
{
	adresseFacturation.numero = extadresseFacturation->numero;
	adresseFacturation.typeDeVoie->Copy(extadresseFacturation->typeDeVoie);
	adresseFacturation.libelleDeVoie->Copy(extadresseFacturation->libelleDeVoie);
	adresseFacturation.Ville->Copy(extadresseFacturation->Ville);
	adresseFacturation.codePostal = extadresseFacturation->codePostal;
}
