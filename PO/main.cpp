// Déclaration des dépendances externes
#include "includes.h"
using namespace std;

int main()
{
    cout << "Coucou" << endl;
	//Déclaration initiale
	ostream_iterator<string> str(cout, "\n"); // *str = string;
	ostream_iterator<double> dou(cout, "\n"); // *dou = nombre;
	// ----------------------------------

    system("pause");
}
