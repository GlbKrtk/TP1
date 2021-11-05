#include "Fish.h"

Fish::Fish(string p1, string o1, string t1) {
	poroda = p1;
	okras = o1;
	typePitanie = t1;
	cout << "Вызван класс Fish, конструктор с параметрами\n";
}

Fish::Fish() {
	poroda = "";
	okras = "";
	typePitanie = "";
	cout << "Вызван класс Fish, конструктор без параметров\n";
}

Fish::Fish(const Fish& F1) {
	poroda = F1.poroda;
	okras = F1.okras;
	typePitanie = F1.typePitanie;
	cout << "Вызван класс Fish, конструктор копирования\n";
}

Fish::~Fish() {
	poroda = "";
	okras = "";
	typePitanie = "";
	cout << "Вызван класс Fish, деструктор\n";
}

void Fish::setTypePitanie(string t1) {
	typePitanie = t1;
}

string Fish::getTypePitanie() {
	return typePitanie;
}

string Fish::outputFBC() {
	string str = "Рыба: \nПорода: " + poroda + "\nОкрас: " + okras + "\nТип питания: " + typePitanie + "\n";
	return str;
}