#include "Fish.h"

Fish::Fish(string t1) {
	typePitanie = t1;
	cout << "������ ����� Fish, ����������� � �����������";
}

Fish::Fish() {
	typePitanie = "";
	cout << "������ ����� Fish, ����������� ��� ����������";
}

Fish::Fish(const Fish& F1) {
	typePitanie = F1.typePitanie;
	cout << "������ ����� Fish, ����������� �����������";
}

Fish::~Fish() {
	typePitanie = "";
	cout << "������ ����� Fish, ����������";
}

void Fish::setTypePitanie(string t1) {
	typePitanie = t1;
}

string Fish::getTypePitanie() {
	return typePitanie;
}