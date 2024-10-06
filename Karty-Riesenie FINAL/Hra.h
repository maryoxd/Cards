#pragma once
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include <iostream>
#include "Hrac.h"
#include "Karta.h"

using namespace std;

class Hra {
private:
	vector<Hrac> hraci;
	vector<Karta> karty;
public:
	Hra();
	void nacitajKartyAhracov();
	Hrac porovnajKartyHracom(Hrac hrac1, Hrac hrac2, int k);
	void hrajHru();

};