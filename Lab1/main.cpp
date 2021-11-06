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
	cout << "Введите размер контейнера" << endl;
	while (k2<=0) {
		cin >> k2;
	}
	Keeper K(k2);
	cout << "1 - добавить\n2 - удалить\n3 - вывести на экран\n4 - изменить данные\n";
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
				cout << "Выберите животное, которое хотите добавить:\n"
					"1-Рыба\n2-Птица\n3-Кошка\n";
				cin >> k1;
				Animal* F;
				if (k1 == 1)
				{
					cout << "Введите породу рыбы: " << endl;
					cin >> S1;
					cout << "Введите окрас рыбы: " << endl;
					cin >> S2;
					cout << "Введите тип питания рыбы: " << endl;
					cin >> S3;
					F = new Fish(S1, S2, S3);
				}
				else if (k1 == 2)
				{
					cout << "Введите породу птицы: " << endl;
					cin >> S1;
					cout << "Введите окрас птицы: " << endl;
					cin >> S2;
					cout << "Введите чем питается птица: " << endl;
					cin >> S3;
					cout << "Введите где обитает птица: " << endl;
					cin >> S4;
					F = new Bird(S1, S2, S3, S4);
				}
				else if (k1 == 3)
				{
					cout << "Введите породу кошки: " << endl;
					cin >> S1;
					cout << "Введите окрас кошки: " << endl;
					cin >> S2;
					cout << "Введите ФИО владельца кошки: " << endl;
					cin >> S3;
					cout << "Введите кличку кошки: " << endl;
					cin >> S4;
					F = new Cat(S1, S2, S3, S4);
				}
				else
				{
					cout << "Ошибка.";
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
			cout << "Введите номер животного, которое хотите изменить\n";
			cin >> k3;
			k3--;
			if (k3 < 0 || k3 >= k2)
			{
				cout << "Ошибка, животного с таким номером не может быть" << endl;
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