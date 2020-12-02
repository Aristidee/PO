#pragma once
#include "Structures.h"


ref class Personne
{
public:
	Personne(); 
	~Personne();
	void setNom(System::String nvnom);
	void setPrenom(System::String nvprenom);
	void setDate(int nbannee, int nbmois, int nbjour);
	System::String getPrenom();
	System::String getNom();
	int getID();
	virtual void modifier() = 0;

private:
	int ID;
	System::String Nom;
	System::String Prenom;
	int age;
	struct_date date;
};