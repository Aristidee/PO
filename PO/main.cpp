// D�claration des d�pendances externes
#include "includes.h"
using namespace std;

int main()
{
    cout << "Coucou" << endl;
	//D�claration initiale
	ostream_iterator<string> str(cout, "\n"); // *str = string;
	ostream_iterator<double> dou(cout, "\n"); // *dou = nombre;
	// ----------------------------------

    system("pause");
}
