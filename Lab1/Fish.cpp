#include "Fish.h"

Fish::Fish(string t1) {
	typePitanie = t1;
	cout << "Вызван класс Fish, конструктор с параметрами";
}

Fish::Fish() {
	typePitanie = "";
	cout << "Вызван класс Fish, конструктор без параметров";
}

Fish::Fish(const Fish& F1) {
	typePitanie = F1.typePitanie;
	cout << "Вызван класс Fish, конструктор копирования";
}

Fish::~Fish() {
	typePitanie = "";
	cout << "Вызван класс Fish, деструктор";
}

void Fish::setTypePitanie(string t1) {
	typePitanie = t1;
}

string Fish::getTypePitanie() {
	return typePitanie;
}