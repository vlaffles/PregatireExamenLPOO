// Aplicatia va fi capabila sa faca cateva operatii simple cu vectori (si componentele lor - originea si varful).
// Colectia de fisiere reprezinta un exemplu banal de folosire a claselor si obiectelor.

#include "stdafx.h"

#include <iostream>

#include "Vector.h"

using namespace std;


void citire_punct(int &X, int &Y, int &Z, char &ID)
{
	cout << " - Nume punct: ";	cin >> ID;
	cout << "{ \n";
	cout << "   X = ";	cin >> X;
	cout << "   Y = ";	cin >> Y;
	cout << "   Z = ";	cin >> Z;
	cout << "} \n";

	cout << endl;
}


int main()
{
	int x, y, z;
	char id;

	citire_punct(x, y, z, id);
	Punct PunctA(x, y, z, id);

	citire_punct(x, y, z, id);
	Punct PunctB(x, y, z, id);

	Vector Vec(PunctA, PunctB);

	cout << endl;
	Vec.AfisareVector();

	Vector Vec2( Punct(), Punct(1, 0, -2, 'C') );

	cout << endl;
	Vec2.AfisareVector();

	cout << endl << "* ==> Vector suma al celor 2 de mai sus: \n* \n";
	Vector Vec3;
	Vec3 = Vec + Vec2;
	Vec3.AfisareVector();

	getchar();	getchar();
	return 0;
}

