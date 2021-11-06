#include "Keeper.h"
#include "Fish.h"
#include "Bird.h"
#include "Cat.h"
#include <fstream>

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

void Keeper::fileRead() {
	ifstream fin;
	Animal *F;
	string f1, S1, S2, S3, S4;
	fin.open("file.txt");
	if (fin.is_open())
	{
		if (index > 0)
		{
			throw exception("��������� �����");
		}
		fin >> index;
		if (index >= size)
		{
			throw exception("����� �� ������� ����������");
		}
		for (int i = 0; i < index; i++)
		{
			fin >> f1;
			if (f1 == "����:")
			{
				fin >> S1 >> S1;
				fin >> S2 >> S2;
				fin >> S3 >> S3 >> S3;
				F = new Fish(S1, S2, S3);
			}
			else if (f1 == "�����:")
			{
				fin >> S1 >> S1;
				fin >> S2 >> S2;
				fin >> S3 >> S3 >> S3;
				fin >> S4 >> S4 >> S4;
				F = new Bird(S1, S2, S3, S4);
			}
			else if (f1 == "�����/���:")
			{
				fin >> S1 >> S1;
				fin >> S2 >> S2;
				fin >> S3 >> S3;
				fin >> S4 >> S4;
				F = new Cat(S1, S2, S3, S4);
			}
			else
			{
				index = i;
				throw exception("���� ������������");
			}
			ptrclass[i] = F;
		}
	}
	else
	{
		throw exception("File does not exist");
	}
}

void Keeper::fileWrite() {
	ofstream fout;
	fout.open("file.txt");
	if (fout.is_open())
	{
		fout << index << endl;
		for (int i = 0; i < index; i++)
		{
			fout << ptrclass[i]->outputFBC();
		}
	}
	else
	{
		throw exception("File does not exist");
	}
}