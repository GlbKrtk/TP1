#include "Bird.h"

Bird::Bird(string p1, string o1, string c1, string g1) {
	poroda = p1;
	okras = o1;
	chemPitaetsa = c1;
	gdeObitaet = g1;
	cout << "������ ����� Bird, ����������� � �����������\n";
}

Bird::Bird() {
	poroda = "";
	okras = "";
	chemPitaetsa = "";
	gdeObitaet = "";
	cout << "������ ����� Bird, ����������� ��� ����������\n";
}

Bird::Bird(const Bird& B1) {
	poroda = B1.poroda;
	okras = B1.okras;
	chemPitaetsa = B1.chemPitaetsa;
	gdeObitaet = B1.gdeObitaet;
	cout << "������ ����� Bird, ����������� �����������\n";
}

Bird::~Bird() {
	poroda = "";
	okras = "";
	chemPitaetsa = "";
	gdeObitaet = "";
	cout << "������ ����� Bird, ����������\n";
}

void Bird::setChemPitaetsa(string c1) {
	chemPitaetsa = c1;
}

string Bird::getChemPitaetsa() {
	return chemPitaetsa;
}

void Bird::setGdeObitaet(string g1) {
	gdeObitaet = g1;
}

string Bird::getGdeObitaet() {
	return gdeObitaet;
}

string Bird::outputFBC() {
	string str = "�����: \n������: " + poroda + "\n�����: " + okras + "\n��� ��������: " + chemPitaetsa + "\n��� �������: " + gdeObitaet + "\n";
	return str;
}
