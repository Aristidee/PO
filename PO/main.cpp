// D�claration des d�pendances externes
#include "includes.h"

//using namespace System;
using namespace std; // std::cout

int main()
{
	//D�claration initiale
	int pause;
	ostream_iterator<string> str(cout, "\n");
	ostream_iterator<double> num(cout, "\n");

	double abc = 2.56876527512397152379123745317642375612375213752146712345;
	*str = "Hello World !";		// �criture texte
	*num = abc;				// �criture nombre

	cin >> pause;
}


/*
void main(void) {
	Calcules obj1;
	Calcules* obj2;

	int r;
	int r1;

	r = obj1.m_add(1, 2);
	r1 = obj1.m_sous(10, 10);
	cout << "Le resultat r : " << r << endl;
	cout << "Le resultat r2 : " << r1 << endl;

	obj2 = new Calcules();
	cout << "Le resultat obj2 : " << obj2->m_add(20, 30) << endl;

	delete obj2;

	system("PAUSE");
}
*/