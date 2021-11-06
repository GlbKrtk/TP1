#include "Fish.h"

Fish::Fish(string p1, string o1, string t1) {
	poroda = p1;
	okras = o1;
	typePitanie = t1;
	cout << "������ ����� Fish, ����������� � �����������\n";
}

Fish::Fish() {
	poroda = "";
	okras = "";
	typePitanie = "";
	cout << "������ ����� Fish, ����������� ��� ����������\n";
}

Fish::Fish(const Fish& F1) {
	poroda = F1.poroda;
	okras = F1.okras;
	typePitanie = F1.typePitanie;
	cout << "������ ����� Fish, ����������� �����������\n";
}

Fish::~Fish() {
	poroda = "";
	okras = "";
	typePitanie = "";
	cout << "������ ����� Fish, ����������\n";
}

void Fish::setTypePitanie(string t1) {
	typePitanie = t1;
}

string Fish::getTypePitanie() {
	return typePitanie;
}

string Fish::outputFBC() {
	string str = "����: \n������: " + poroda + "\n�����: " + okras + "\n��� �������: " + typePitanie + "\n";
	return str;
}


void Fish::changeType() {
	int k1;
	string k2;
	cout << "�������: \n1, ����� �������� ������\n2, ����� �������� �����\n3, ����� �������� ��� ������� ����" << endl;
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
		setTypePitanie(k2);
	}
}