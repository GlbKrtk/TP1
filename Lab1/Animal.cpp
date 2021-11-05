#include "Animal.h"

Animal::Animal(string p1, string o1) {
	poroda = p1;
	okras = o1;
	cout << "������ ����� Animal, ����������� � �����������\n";
}

Animal::Animal() {
	poroda = "";
	okras = "";
	cout << "������ ����� Animal, ����������� ��� ����������\n";
}

Animal::Animal(const Animal& A1) {
	poroda = A1.poroda;
	okras = A1.okras;
	cout << "������ ����� Animal, ����������� �����������\n";
}

Animal::~Animal() {
	poroda = "";
	okras = "";
	cout << "������ ����� Animal, ����������\n";
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

string Animal::outputFBC() {
	return "";
}