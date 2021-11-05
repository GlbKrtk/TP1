#include "Cat.h"

Cat::Cat(string p1, string o1, string f1, string n1) {
	poroda = p1;
	okras = o1;
	fio = f1;
	nickname = n1;
	cout << "Вызван класс Cat, конструктор с параметрами\n";
}

Cat::Cat() {
	poroda = "";
	okras = "";
	fio = "";
	nickname = "";
	cout << "Вызван класс Cat, конструктор без параметров\n";
}

Cat::Cat(const Cat& C1) {
	poroda = C1.poroda;
	okras = C1.okras;
	fio = C1.fio;
	nickname = C1.nickname;
	cout << "Вызван класс Cat, конструктор копирования\n";
}

Cat::~Cat() {
	poroda = "";
	okras = "";
	fio = "";
	nickname = "";
	cout << "Вызван класс Cat, деструктор\n";
}

void Cat::setFIO(string f1) {
	fio = f1;
}

string Cat::getFIO() {
	return fio;
}

void Cat::setNickname(string n1) {
	nickname = n1;
}

string Cat::getNickname() {
	return nickname;
}

string Cat::outputFBC() {
	string str = "Кошка/Кот: \nПорода: " + poroda + "\nОкрас: " + okras + "\nФИО владельца: " + fio + "\nКличка: " + nickname + "\n";
	return str;
}