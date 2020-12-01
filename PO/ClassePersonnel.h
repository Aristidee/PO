#pragma once
#include "Personne.h"
#include "Structures.h"

class ClassePersonnel : private Personne
{
private :
	int IDsuperieur;
	struct ADRESSE adresse;
public :
	ClassePersonnel();
	~ClassePersonnel();
	int getSuperieur();
	struct ADRESSE getAdresse();
};

