#include "Cat.h"

Cat::Cat(string f1, string n1) {
	fio = f1;
	nickname = n1;
	cout << "Вызван класс Cat, конструктор с параметрами";
}

Cat::Cat() {
	fio = "";
	nickname = "";
	cout << "Вызван класс Cat, конструктор без параметров";
}

Cat::Cat(const Cat& C1) {
	fio = C1.fio;
	nickname = C1.nickname;
	cout << "Вызван класс Cat, конструктор копирования";
}

Cat::~Cat() {
	fio = "";
	nickname = "";
	cout << "Вызван класс Cat, деструктор";
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
