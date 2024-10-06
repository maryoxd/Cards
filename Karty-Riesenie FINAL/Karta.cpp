#include "Karta.h"

Karta::Karta(string pismeno, int cislo)
{
	this->Pismeno = pismeno;
	this->Cislo = cislo;
}

string Karta::getPismeno()
{
	return this->Pismeno;
}

int Karta::getCislo()
{
	return this->Cislo;
}
