#include "Cat.h"

Cat::Cat(string f1, string n1) {
	fio = f1;
	nickname = n1;
	cout << "������ ����� Cat, ����������� � �����������";
}

Cat::Cat() {
	fio = "";
	nickname = "";
	cout << "������ ����� Cat, ����������� ��� ����������";
}

Cat::Cat(const Cat& C1) {
	fio = C1.fio;
	nickname = C1.nickname;
	cout << "������ ����� Cat, ����������� �����������";
}

Cat::~Cat() {
	fio = "";
	nickname = "";
	cout << "������ ����� Cat, ����������";
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
