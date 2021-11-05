#include "Animal.h"

Animal::Animal(string p1, string o1) {
	poroda = p1;
	okras = o1;
	cout << "Вызван класс Animal, конструктор с параметрами";
}

Animal::Animal() {
	poroda = "";
	okras = "";
	cout << "Вызван класс Animal, конструктор без параметров";
}

Animal::Animal(const Animal& A1) {
	poroda = A1.poroda;
	okras = A1.okras;
	cout << "Вызван класс Animal, конструктор копирования";
}

Animal::~Animal() {
	poroda = "";
	okras = "";
	cout << "Вызван класс Animal, деструктор";
}

void Animal::setPoroda(string p1) {
	poroda = p1;
}

string Animal::getPoroda() {
	return poroda;
}

void Animal::setOkras(string o1) {
	okras = o1;
}

string Animal::getOkras() {
	return okras;
}
