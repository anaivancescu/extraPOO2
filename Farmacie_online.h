#pragma once
#include "Farmacie_abstracta.h"
class Farmacie_online : public Farmacie_abstracta
{
	string adresa_web;
	int nr_vizitatori;
	static const float medie;
public:
	Farmacie_online();
	Farmacie_online(string _adresa_web, int _nr_vizitatori);
	Farmacie_online(const Farmacie_online& r);
	int getNr_vizitatori();
	string getAdresa_web();
	void setAdresa_web(string s);	
	void operator = (const Farmacie_online& D);
	int calcul_venit() {
		return nr_vizitatori * medie;
	}
	friend istream& operator >> (istream& os, Farmacie_online& dt);
	~Farmacie_online() {};
};

 const float Farmacie_online::medie = 123;