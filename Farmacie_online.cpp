#include "Farmacie_online.h"
istream& operator>>(istream& os, Farmacie_online& dt) {
	os >> dt.adresa_web >> dt.nr_vizitatori;
	return os;
}
int Farmacie_online::getNr_vizitatori() {
	return nr_vizitatori;
}
Farmacie_online::Farmacie_online(){
	nr_vizitatori = 0;
	adresa_web = " ";
}
Farmacie_online::Farmacie_online(string _adresa_web, int _nr_vizitatori) {
	nr_vizitatori = _nr_vizitatori;
	adresa_web = _adresa_web;
}
Farmacie_online::Farmacie_online(const Farmacie_online& r) {
	Farmacie_online::operator=(r);
}
void Farmacie_online::operator=(const Farmacie_online& D) {
	adresa_web = D.adresa_web;
	nr_vizitatori = D.nr_vizitatori;
}