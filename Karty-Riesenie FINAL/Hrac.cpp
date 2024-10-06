#include "Hrac.h"

Hrac::Hrac(string meno)
{
	this->Meno = meno;
}

string Hrac::getMeno()
{
	return this->Meno;
}

void Hrac::pridajKartu(Karta karta)
{
	this->karty.push_back(karta);
}

Karta Hrac::dajKartu(int index)
{
	return this->karty[index];
}

void Hrac::vypis()
{
	cout << this->Meno;
}

void Hrac::pridajKolo()
{
	this->vyhraneKola++;
}

int Hrac::getVyhraneKola()
{
	return this->vyhraneKola;
}
