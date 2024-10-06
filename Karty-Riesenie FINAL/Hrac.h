#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "Karta.h"

using namespace std;

class Hrac {
private:
	string Meno;
	vector<Karta> karty;
	int vyhraneKola = 0;
public:
	Hrac(string meno);
	string getMeno();
	void pridajKartu(Karta karta);
	Karta dajKartu(int index);
	void vypis();
	void pridajKolo();
	int getVyhraneKola();

};