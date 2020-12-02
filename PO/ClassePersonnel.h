#pragma once
#include "Personne.h"
#include "Structures.h"

ref class ClassePersonnel : Personne
{
private :
	int IDsuperieur;
	ref struct ADRESSE adresse;
public :
	ClassePersonnel();
	~ClassePersonnel();
	int getSuperieur();
	ADRESSE getAdresse();
};

