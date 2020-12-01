#include "Personne.h"


Personne::Personne()
{

}

Personne::~Personne()
{

}


void Personne::setDate_de_naissance(int nvanne, int nvmois, int nvjour) {
	struct_date Date_naissance;
	Date_naissance.annee = nvanne;
	Date_naissance.mois = nvmois;
	Date_naissance.jour = nvjour;
}