#include "Farmacie_abstracta.h"
Farmacie_abstracta::Farmacie_abstracta() {
	denumire = " ";
}
Farmacie_abstracta::Farmacie_abstracta(string _denumire) {
	denumire = _denumire;
}
Farmacie_abstracta::Farmacie_abstracta(const Farmacie_abstracta& r) {
	Farmacie_abstracta::operator=(r);
}
string Farmacie_abstracta::getDenumire() {
	return denumire;
}
void Farmacie_abstracta::setDenumire(string s) {
	denumire = s;
}
void Farmacie_abstracta::operator=(const Farmacie_abstracta& D) {
	denumire = D.denumire;
}
istream& operator>>(istream& os, Farmacie_abstracta& dt) {
	os >> dt.denumire;
	return os;
}

