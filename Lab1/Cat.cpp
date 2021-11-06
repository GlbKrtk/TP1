#include "Cat.h"

Cat::Cat(string p1, string o1, string f1, string n1) {
	poroda = p1;
	okras = o1;
	fio = f1;
	nickname = n1;
	cout << "������ ����� Cat, ����������� � �����������\n";
}

Cat::Cat() {
	poroda = "";
	okras = "";
	fio = "";
	nickname = "";
	cout << "������ ����� Cat, ����������� ��� ����������\n";
}

Cat::Cat(const Cat& C1) {
	poroda = C1.poroda;
	okras = C1.okras;
	fio = C1.fio;
	nickname = C1.nickname;
	cout << "������ ����� Cat, ����������� �����������\n";
}

Cat::~Cat() {
	poroda = "";
	okras = "";
	fio = "";
	nickname = "";
	cout << "������ ����� Cat, ����������\n";
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
	string str = "�����/���: \n������: " + poroda + "\n�����: " + okras + "\n��� ���������: " + fio + "\n������: " + nickname + "\n";
	return str;
}

void Cat::changeType() {
	int k1;
	string k2;
	cout << "�������: \n1, ����� �������� ������\n2, ����� �������� �����\n3, ����� �������� ��� ���������\n4, ����� �������� ������ �����" << endl;
	cin >> k1;
	cout << "������� ����� ��������:" << endl;
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
		setFIO(k2);
	}
	else if (k1 == 4)
	{
		setNickname(k2);
	}
}