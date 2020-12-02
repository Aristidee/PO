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

ref struct ADRESSE ClassePersonnel::getAdresse()
{
	return adresse;
}
