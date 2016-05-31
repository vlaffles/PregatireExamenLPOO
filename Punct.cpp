// Fisier sursa ce defineste functiile clasei "Punct".
// Pentru o orientare cat mai usoara, se pastreaza acelasi nume pentru header si fisier sursa.

#include "stdafx.h"

#include <iostream>
#include "Punct.h"

using namespace std;

Punct::Punct()
{
	Coord_X = 0;
	Coord_Y = 0;
	Coord_Z = 0;

	Identificator = '0';
}

Punct::Punct(int _X, int _Y, int _Z, char _Identificator)
{
	Coord_X = _X;
	Coord_Y = _Y;
	Coord_Z = _Z;

	Identificator = _Identificator;
}

Punct::~Punct()
{
	//cout << "* Destructor pentru obiectul cu identificatorul \"" << this->Identificator << "\", de tip <Punct>. " << endl;
}

void Punct::AfisarePunct()
{
	std::cout << "-> Punct: " << this->Identificator << "(" << this->Coord_X << ", " << this->Coord_Y << ", " << this->Coord_Z << ") \n";
}

int Punct::GetX() const
{
	return this->Coord_X;
}

int Punct::GetY() const
{
	return this->Coord_Y;
}

int Punct::GetZ() const
{
	return this->Coord_Z;
}

char Punct::GetID() const
{
	return this->Identificator;
}

void Punct::ModificarePunct(int _X, int _Y, int _Z, char _ID)
{
	Coord_X = _X;
	Coord_Y = _Y;
	Coord_Z = _Z;

	Identificator = _ID;
}

Punct Punct::operator + (Punct _P)
{
	Punct PunctTemporar;

	PunctTemporar.Coord_X = this->Coord_X + _P.Coord_X;
	PunctTemporar.Coord_Y = this->Coord_Y + _P.Coord_Y;
	PunctTemporar.Coord_Z = this->Coord_Z + _P.Coord_Z;

	PunctTemporar.Identificator = this->Identificator;

	return PunctTemporar;
}

