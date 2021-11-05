#include "Bird.h"

Bird::Bird(string c1, string g1) {
	chemPitaetsa = c1;
	gdeObitaet = g1;
	cout << "Вызван класс Bird, конструктор с параметрами";
}

Bird::Bird() {
	chemPitaetsa = "";
	gdeObitaet = "";
	cout << "Вызван класс Bird, конструктор без параметров";
}

Bird::Bird(const Bird& B1) {
	chemPitaetsa = B1.chemPitaetsa;
	gdeObitaet = B1.gdeObitaet;
	cout << "Вызван класс Bird, конструктор копирования";
}

Bird::~Bird() {
	chemPitaetsa = "";
	gdeObitaet = "";
	cout << "Вызван класс Bird, деструктор";
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
