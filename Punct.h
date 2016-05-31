// Clasa Punct defineste caracteristicile oricarui punct pe care il vom crea ulterior pentru formarea vectorilor.
// Asta include variabile si metode (functii proprii clasei).

#pragma once	// "pragma once" asigura includerea acestui header o singura data in tot proiectul,
				// chiar daca in cod el va fi inclus in mai multe fisiere.


class Punct
{
	// Variabilele ce vor retine coordonatele X, Y, Z ale unui punct:
	int Coord_X, Coord_Y, Coord_Z;

	// Numele punctului, un simbol.. mai precis, o litera (A, B, O, etc.).
	char Identificator;

public:
	// Constructor implicit. Cand nu se specifica valori ca parametri, consideram tot ca fiind o valoare nula.
	Punct();

	// Constructor cu parametri nenuli.
	Punct(int _X, int _Y, int _Z, char _Identificator);

	// Destructorul (in mod normal, compilatorul genereaza unul implicit, insa atunci cand avem pointeri in clasa,
	// este necesar sa definim un destructor propriu, cel implicit nefiind capabil sa elibereze pointerii din memorie).
	~Punct();

	// Metoda pentru afisarea punctului (mai exact, a caracteristicilor sale).
	void AfisarePunct();

	// Metode de obtinere a coordonatelor:
	int GetX() const, GetY() const, GetZ() const;

	// ***** "const" este optional, se asigura ca nicio valoare nu se modifica in urma rularii functiei. *****
	
	// Metoda pentru obtinerea numelui:
	char GetID() const;	

	// Metoda pentru modificarea valorilor unui obiect de tip "Punct".
	void ModificarePunct(int _X, int _Y, int _Z, char _ID);

	// Supraincarcare operator de adunare. (pentru a putea aduna doua puncte)
	Punct operator + (Punct _P);
};