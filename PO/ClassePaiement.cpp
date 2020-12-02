#include "ClassePaiement.h"

ClassePaiement::ClassePaiement()
{

}

ClassePaiement::~ClassePaiement()
{
}

struct_date ClassePaiement::getEnvoi()
{
	return dateEnvoi;
}

void ClassePaiement::setEnvoi(int j, int m, int a)
{
	dateEnvoi.jour = j;
	dateEnvoi.jour = m;
	dateEnvoi.jour = a;
}

struct_date ClassePaiement::getRecu()
{
	return dateRecu;
}

void ClassePaiement::setRecu(int j, int m, int a)
{
	dateRecu.jour = j;
	dateRecu.jour = m;
	dateRecu.jour = a;
}

System::String ClassePaiement::getMoyen()
{
	return moyenPaiement;
}

void ClassePaiement::setMoyen(System::String moyen)
{
	moyenPaiement = moyen;
}

int ClassePaiement::getIDCommande()
{
	return IDCommande;
}

void ClassePaiement::setIDCommande(int IDc)
{
	IDCommande = IDc;
}

ADRESSE ClassePaiement::getAdresse()
{
	return adresseFacturation;
}

void ClassePaiement::setAdresse(int num, System::String type, System::String libelle, System::String vil, double code)
{
	adresseFacturation.numero = num;
	adresseFacturation.typeDeVoie = type;
	adresseFacturation.libelleDeVoie = libelle;
	adresseFacturation.Ville = vil;
	adresseFacturation.codePostal = code;
}
