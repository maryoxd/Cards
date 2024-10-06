#pragma once
#include <string>
#include <iostream>

using namespace std;

class Karta {
private:
	string Pismeno;
	int Cislo;
public:
	Karta(string pismeno, int cislo);
	string getPismeno();
	int getCislo();
};