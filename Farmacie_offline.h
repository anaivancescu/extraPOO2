#pragma once
#include "Farmacie_abstracta.h"
#include <vector>
class Farmacie_offline : public Farmacie_abstracta
{
	int nr_luni;
	vector<Farmacie_offline*>cifra_afaceri_luna;
public:
	Farmacie_offline();
	Farmacie_offline(string _denumire, int _nr_luni);
	Farmacie_offline(const Farmacie_offline& r);
	int getnr_luni();
	void operator = (const Farmacie_offline& D);
	int calcul_venit() {
		for (int i = 0; i < nr_luni; i++) {
			cifra_afaceri_luna.push_back(new Farmacie_offline);
		}
		return 0;
	}
	friend istream& operator >> (istream& os, Farmacie_offline& dt);
	~Farmacie_offline() {};
};