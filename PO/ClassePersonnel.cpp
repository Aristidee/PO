#include "ClassePersonnel.h"

ClassePersonnel::ClassePersonnel()
{
}

ClassePersonnel::~ClassePersonnel()
{
}

int ClassePersonnel::getSuperieur()
{
	return IDsuperieur;
}

void ClassePersonnel::setSuperieur(int^ extIDsuperieur)
{
	IDsuperieur = *extIDsuperieur;
}

ADRESSE^ ClassePersonnel::getAdresse()
{
	return adresse;
}

void ClassePersonnel::setAdresse(ADRESSE^ extadresse)
{
	adresse->numero = extadresse->numero;
	adresse->typeDeVoie->Copy(extadresse->typeDeVoie);
	adresse->libelleDeVoie->Copy(extadresse->libelleDeVoie);
	adresse->Ville->Copy(extadresse->Ville);
	adresse->codePostal = extadresse->codePostal;
}
