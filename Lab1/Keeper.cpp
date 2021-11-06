#include "Keeper.h"
#include "Fish.h"

Keeper::Keeper(int s1) {
	if (s1 <= 0)
	{
		throw exception("������ ������� - ������������� �����");
	}
	ptrclass = new Animal*[s1];
	size = s1;
	index = 0;
	cout << "������ ����� Keeper, ����������� � �����������\n";
	
}

Keeper::Keeper() {
	size = 0;
	ptrclass = NULL;
	index = 0;
	cout << "������ ����� Keeper, ����������� ��� ����������\n";
}

Keeper::Keeper(const Keeper& K1) {
	size = K1.size;
	ptrclass = new Animal*[size];
	for (int i = 0; i < size; i++)
		ptrclass[i] = K1.ptrclass[i];
	index = K1.index;
	cout << "������ ����� Keeper, ����������� �����������\n";
}

Keeper::~Keeper() {
	for (int i = 0; i < index; i++)
		delete ptrclass[i];
	delete[] ptrclass;
	size = 0;
	index = 0;
	cout << "������ ����� Keeper, ����������\n";
}

void Keeper::addAnimal(Animal &K1) {
	if (index >= size)
		throw exception("����� �� ������� �������");
	ptrclass[index] = &K1;
	index++;
}

void Keeper::deleteAnimal() {
	if (index > 0)
	{
		delete ptrclass[index-1];
		index--;
	}
	else
		cout << "������ ����" << endl;
}

void Keeper::outputContainer() {
	if (index > 0)
	{
		for (int i = 0; i < index; i++)
		{
			cout << ptrclass[i]->outputFBC();
		}
	}
	else
		cout << "������ ����" << endl;
}

void Keeper::changeParameter(int k) {
	if (k >= index)
	{
		cout << "�������� � ���� ������� ��� �� �������" << endl;
	}
	else
	{
		ptrclass[k]->changeType();
	}
}