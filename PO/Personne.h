#pragma once
#include "includes.h"
#include "Structures.h"

using namespace std;

class Personne
{
public:
	Personne(); 
	~Personne();
	void setNom(string nvnom) { Nom = nvnom; }
	void setPrenom(string nvprenom) { Prenom = nvprenom; }
	void setDate_de_naissance(int nbannee, int nbmois, int nbjour);
	string getPrenom() { return Prenom; }
	string getNom() { return Nom; }
	virtual void modifier() = 0;

private:
	string Nom;
	string Prenom;
	int age;
	struct struct_date date;
};