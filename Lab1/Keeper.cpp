#include "Keeper.h"

Keeper::Keeper(int s1) {
	ptrclass = new Animal*[s1];
	size = s1;
	index = 0;
	cout << "������ ����� Keeper, ����������� � �����������";
}

Keeper::Keeper() {
	size = 0;
	ptrclass = NULL;
	index = 0;
	cout << "������ ����� Keeper, ����������� ��� ����������";
}

Keeper::Keeper(const Keeper& K1) {
	size = K1.size;
	ptrclass = new Animal*[size];
	for (int i = 0; i < size; i++)
		ptrclass[i] = K1.ptrclass[i];
	index = K1.index;
	cout << "������ ����� Keeper, ����������� �����������";
}

Keeper::~Keeper() {
	for (int i = 0; i < size; i++)
		delete ptrclass[i];
	delete[] ptrclass;
	size = 0;
	index = 0;
	cout << "������ ����� Keeper, ����������";
}

void Keeper::addAnimal(Animal &K1) {
	ptrclass[index] = &K1;
	index++;
}

void Keeper::deleteAnimal() {
	delete ptrclass[index];
	index--;
}
