// Clasa Vector defineste caracteristicile oricarui vector pe care il vom crea folosind 2 obiecte de tipul clasei "Punct".
// Asta include variabile si metode (functii proprii clasei).

#pragma once	// "pragma once" asigura includerea acestui header o singura data in tot proiectul,
				// chiar daca in cod el va fi inclus in mai multe fisiere.

#include "Punct.h"	// Includem header-ul Punct.h pentru a putea declara obiecte de tipul clasei definite ("Punct").
					// Aceste obiecte nu sunt altceva decat niste variabile ale caror tip este o clasa definita de noi.


class Vector
{
	Punct Origine, Varf;

	// Numele vectorului, compus normal din 2 litere: al celor doua puncte ce-l definesc.
	char Identificator[3];

public:
	// Constructor implicit. Cand nu se specifica niciun parametru la declararea unui obiect de tip "Vector".
	Vector();

	// Constructor cu parametri precizati la declarare.
	Vector(Punct _Origine, Punct _Varf);

	// Destructorul (in mod normal, compilatorul genereaza unul implicit, insa atunci cand avem pointeri in clasa,
	// este necesar sa definim un destructor propriu, cel implicit nefiind capabil sa elibereze pointerii din memorie).
	~Vector();

	// Afisare vector.
	void AfisareVector();

	// Supraincarcare operator de adunare. (pentru a putea aduna doi vectori)
	Vector operator + (Vector _V);
};