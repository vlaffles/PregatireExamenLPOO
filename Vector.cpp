// Fisier sursa ce defineste functiile clasei "Vector".
// Pentru o orientare cat mai usoara, se pastreaza acelasi nume pentru header si fisier sursa.

#include "stdafx.h"

#include <iostream>
#include "Vector.h"


Vector::Vector()
{
	Origine.ModificarePunct(0, 0, 0, '0');
	Varf.ModificarePunct(0, 0, 0, '0');

	strcpy(Identificator, "00");
}

Vector::Vector(Punct _Origine, Punct _Varf)
{
	Origine = _Origine;
	Varf = _Varf;

	char aux_origine[3], aux_varf[2];
	
	Identificator[0] = Origine.GetID();
	Identificator[1] = Varf.GetID();
	Identificator[2] = NULL;
}

Vector::~Vector()
{
	//std::cout << "* Destructor pentru obiectul cu identificatorul \"" << this->Identificator << "\", de tip <Vector>. " << std::endl;
}

void Vector::AfisareVector()
{
	std::cout << "-> Vector: " << this->Identificator << std::endl;
	std::cout << "\t";
	Origine.AfisarePunct();
	std::cout << "\t";
	Varf.AfisarePunct();
	std::cout << std::endl;
}

Vector Vector::operator + (Vector _V)
{
	Vector VecTemporar;

	VecTemporar.Origine = this->Origine + _V.Origine;
	VecTemporar.Varf = this->Varf + _V.Varf;

	VecTemporar.Identificator[0] = this->Identificator[0];
	VecTemporar.Identificator[1] = _V.Identificator[1];
	VecTemporar.Identificator[2] = NULL;

	return VecTemporar;
}

