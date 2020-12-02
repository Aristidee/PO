#pragma once
#include "Personne.h"
#include "Structures.h"

ref class ClassePersonnel : Personne
{
private :
	int IDsuperieur;
	ADRESSE^ adresse;
public :
	ClassePersonnel();
	~ClassePersonnel();
	int getSuperieur();
	void setSuperieur(int^);
	ADRESSE^ getAdresse();
	void setAdresse(ADRESSE^);
};

