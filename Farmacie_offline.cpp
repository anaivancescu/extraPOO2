#include "Farmacie_offline.h"
Farmacie_offline::Farmacie_offline() {
	nr_luni = 0;
	}
Farmacie_offline::Farmacie_offline(string _denumire, int _nr_luni){
	nr_luni = _nr_luni;
	denumire = _denumire;
}
Farmacie_offline::Farmacie_offline(const Farmacie_offline& r) {
	Farmacie_offline::operator=(r);
}
void Farmacie_offline::operator=(const Farmacie_offline& D) {
	denumire = D.denumire;
	nr_luni = D.nr_luni;
}
istream& operator>>(istream& os, Farmacie_offline& dt) {
	os >> dt.nr_luni;
	return os;
}
int Farmacie_offline::getnr_luni() {
	return nr_luni;
}
