#pragma once
#include "includes.h"

class Personne
{
public:
	Personne(); 
	~Personne(); 
	virtual void modifier() = 0;
private:
	std::string Nom;
	std::string Prenom;
	int age;
};