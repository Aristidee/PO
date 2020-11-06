// Déclaration des dépendances externes
#include "includes.h"


int main()
{
	//Déclaration initiale
	ostream_iterator<string> str(cout, "\n"); // *str = string;
	ostream_iterator<double> dou(cout, "\n"); // *dou = nombre;
	// ----------------------------------

        Personnage david("David"), goliath("Goliath", "The Boss Weapon", 20);
        //Personnage david("Per1"), goliath("Per2");
        //Création de 2 objets de type Personnage : david et goliath

        goliath.attaquer(david); //goliath attaque david
        david.boirePotionDeVie(20); //david récupère 20 de vie en buvant une potion
        goliath.attaquer(david); //goliath réattaque david
        david.attaquer(goliath); //david contre-attaque... c'est assez clair non ? 
        goliath.changerArme("Double hache tranchante veneneuse de la mort", 40);
        goliath.attaquer(david);
 

	// ----------------------------------
    system("pause");
}
