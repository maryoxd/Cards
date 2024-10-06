#include "Hra.h"

Hra::Hra()
{
}

void Hra::nacitajKartyAhracov()
{
	this->hraci.push_back(Hrac("Milan"));
	this->hraci.push_back(Hrac("Jozef"));
	this->hraci.push_back(Hrac("Ignac"));
	this->hraci.push_back(Hrac("Magda"));

	for (int i = 0; i < 8; i++) {
		this->karty.push_back(Karta("A", i + 1));
	}
	for (int i = 0; i < 8; i++) {
		this->karty.push_back(Karta("B", i + 1));
	}
	for (int i = 0; i < 8; i++) {
		this->karty.push_back(Karta("B", i + 1));
	}
	for (int i = 0; i < 8; i++) {
		this->karty.push_back(Karta("B", i + 1));
	}
	srand(time(0));
	random_shuffle(this->karty.begin(), this->karty.end());
	for (int i = 0; i < 8; i++) {
		this->hraci[0].pridajKartu(this->karty[i]);
	}
	for (int i = 8; i < 16; i++) {
		this->hraci[1].pridajKartu(this->karty[i]);
	}
	for (int i = 16; i < 24; i++) {
		this->hraci[2].pridajKartu(this->karty[i]);
	}
	for (int i = 24; i < 32; i++) {
		this->hraci[3].pridajKartu(this->karty[i]);
	}
}

Hrac Hra::porovnajKartyHracom(Hrac hrac1, Hrac hrac2,int k)
{
	if (hrac1.dajKartu(k).getCislo() == hrac2.dajKartu(k).getCislo()) {
		if (hrac1.dajKartu(k).getPismeno() < hrac2.dajKartu(k).getPismeno()) {
			return hrac1;
		}
		else {
			return hrac2;
		}
	}
	else {
		if (hrac1.dajKartu(k).getCislo() > hrac2.dajKartu(k).getCislo()) {
			return hrac1;
		}
		else {
			return hrac2;
		}
	}
}

void Hra::hrajHru()
{
	for (int k = 0; k < this->hraci.size(); k++) {
		cout << this->hraci[k].getMeno() << "    ";
	}
	cout << endl;
	int c = 0;
	for (int i = 0; i < 8; i++) {
		for (int m = 0; m < 4; m++) {
			cout << this->hraci[m].dajKartu(c).getCislo() << this->hraci[m].dajKartu(c).getPismeno() << "       ";
		}
		Hrac vyhra = this->porovnajKartyHracom(this->porovnajKartyHracom(this->hraci[0], this->hraci[1],c), this->porovnajKartyHracom(this->hraci[2], this->hraci[3],c),c);
		cout << " : " << vyhra.getMeno() << " " << vyhra.dajKartu(c).getCislo() << vyhra.dajKartu(c).getPismeno();
		cout << endl;
		for (int l = 0; l < 4; l++) {
			if (this->hraci[l].dajKartu(c).getCislo() == vyhra.dajKartu(c).getCislo() && this->hraci[l].dajKartu(c).getPismeno() == vyhra.dajKartu(c).getPismeno()) {
				this->hraci[l].pridajKolo();
			}
		}
		c++;

	
	}
	cout << endl << "VYSLEDOK: " << endl;
	for (int n = 0; n < 4; n++) {
		cout << this->hraci[n].getMeno() << " " << this->hraci[n].getVyhraneKola() << endl;
	}
}
