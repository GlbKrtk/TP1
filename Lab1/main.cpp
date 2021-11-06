#include <iostream>
#include "Keeper.h"
#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
#include "Cat.h"

int main()
{
	setlocale(LC_ALL, "rus");
	int k = 1;
	int k1 = 0;
	int k2 = -1;
	int k3 = 0;
	string S1, S2, S3, S4;
	cout << "������� ������ ����������" << endl;
	while (k2<=0) {
		cin >> k2;
	}
	Keeper K(k2);
	cout << "1 - ��������\n2 - �������\n3 - ������� �� �����\n4 - �������� ������\n";
	while (k != 0)
	{
		//if (cin.fail())
		//{
		//	std::cin.clear();
		//	std::cin.ignore(32767, '\n');
		//}
		cin >> k;
		switch (k) {
		case 1:
			while (k1 < 1 || k1>3)
			{
				cout << "�������� ��������, ������� ������ ��������:\n"
					"1-����\n2-�����\n3-�����\n";
				cin >> k1;
				Animal* F;
				if (k1 == 1)
				{
					cout << "������� ������ ����: " << endl;
					cin >> S1;
					cout << "������� ����� ����: " << endl;
					cin >> S2;
					cout << "������� ��� ������� ����: " << endl;
					cin >> S3;
					F = new Fish(S1, S2, S3);
				}
				else if (k1 == 2)
				{
					cout << "������� ������ �����: " << endl;
					cin >> S1;
					cout << "������� ����� �����: " << endl;
					cin >> S2;
					cout << "������� ��� �������� �����: " << endl;
					cin >> S3;
					cout << "������� ��� ������� �����: " << endl;
					cin >> S4;
					F = new Bird(S1, S2, S3, S4);
				}
				else if (k1 == 3)
				{
					cout << "������� ������ �����: " << endl;
					cin >> S1;
					cout << "������� ����� �����: " << endl;
					cin >> S2;
					cout << "������� ��� ��������� �����: " << endl;
					cin >> S3;
					cout << "������� ������ �����: " << endl;
					cin >> S4;
					F = new Cat(S1, S2, S3, S4);
				}
				else
				{
					cout << "������.";
					continue;
				}

				try
				{
					K.addAnimal(*F);
				}
				catch (exception s)
				{
					cout << s.what() << endl;
				}

			}
			k1 = 0;
			break;
		case 2:
			K.deleteAnimal();
			break;
		case 3:
			K.outputContainer();
			break;
		case 4:
			cout << "������� ����� ���������, ������� ������ ��������\n";
			cin >> k3;
			k3--;
			if (k3 < 0 || k3 >= k2)
			{
				cout << "������, ��������� � ����� ������� �� ����� ����" << endl;
			}
			else
			{
				K.changeParameter(k3);
			}
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			break;
		}

	}

	

	return 0;
}