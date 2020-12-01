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

struct ADRESSE ClassePersonnel::getAdresse()
{
	return adresse;
}
