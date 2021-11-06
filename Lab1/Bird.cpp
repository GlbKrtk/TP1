#include "Bird.h"

Bird::Bird(string p1, string o1, string c1, string g1) {
	poroda = p1;
	okras = o1;
	chemPitaetsa = c1;
	gdeObitaet = g1;
	cout << "Вызван класс Bird, конструктор с параметрами\n";
}

Bird::Bird() {
	poroda = "";
	okras = "";
	chemPitaetsa = "";
	gdeObitaet = "";
	cout << "Вызван класс Bird, конструктор без параметров\n";
}

Bird::Bird(const Bird& B1) {
	poroda = B1.poroda;
	okras = B1.okras;
	chemPitaetsa = B1.chemPitaetsa;
	gdeObitaet = B1.gdeObitaet;
	cout << "Вызван класс Bird, конструктор копирования\n";
}

Bird::~Bird() {
	poroda = "";
	okras = "";
	chemPitaetsa = "";
	gdeObitaet = "";
	cout << "Вызван класс Bird, деструктор\n";
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
	string str = "Птица: \nПорода: " + poroda + "\nОкрас: " + okras + "\nЧем питается: " + chemPitaetsa + "\nГде обитает: " + gdeObitaet + "\n";
	return str;
}

void Bird::changeType() {
	int k1;
	string k2;
	cout << "Введите: \n1, чтобы поменять породу\n2, чтобы поменять окрас\n3, чтобы поменять чем питается\n4, чтобы поменять где обитает птица" << endl;
	cin >> k1;
	cout << "Введите новый параметр:" << endl;
	cin >> k2;
	if (k1 == 1)
	{
		setPoroda(k2);
	}
	else if (k1 == 2)
	{
		setOkras(k2);
	}
	else if (k1 == 3)
	{
		setChemPitaetsa(k2);
	}
	else if (k1 == 4)
	{
		setGdeObitaet(k2);
	}
}