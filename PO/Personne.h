#pragma once
#include "includes.h"
#include "Structures.h"

using namespace std;

class Personne
{
public:
	Personne(); 
	~Personne();
	void setNom(string nvnom);
	void setPrenom(string nvprenom);
	void setDate(int nbannee, int nbmois, int nbjour);
	string getPrenom();
	string getNom();
	int getID();
	virtual void modifier() = 0;

private:
	int ID;
	string Nom;
	string Prenom;
	int age;
	struct struct_date date;
};