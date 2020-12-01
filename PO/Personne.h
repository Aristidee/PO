#pragma once
#include "includes.h"

class Personne
{
public:
	Personne(); 
	~Personne(); 

private:
	std::string Nom;
	std::string Prenom;
	struct DateNaissance;
};