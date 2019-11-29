#pragma once
#include <string>
#include <iostream>
using namespace std;



class Farmacie_abstracta
{protected:
	string denumire;
public:
	virtual int calcul_venit() = 0;
	Farmacie_abstracta();
	Farmacie_abstracta(string _denumire);
	Farmacie_abstracta(const Farmacie_abstracta& r);
	string getDenumire();
	void setDenumire(string s);
	void operator = (const Farmacie_abstracta& D);
	friend istream& operator >> (istream& os, Farmacie_abstracta& dt);
	~Farmacie_abstracta() {};

};

