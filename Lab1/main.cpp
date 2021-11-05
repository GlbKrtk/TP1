#include <iostream>
#include "Keeper.h"
#include "Animal.h"
#include "Fish.h"
#include "Bird.h"
#include "Cat.h"


int main()
{
	setlocale(LC_ALL, "rus");
	Fish F1("Poroda1", "Okras1", "TypePitanie1");
	Bird B1("Poroda2", "Okras2", "ChemPitaetsa2", "GdeObitaet2");
	Cat C1("Poroda3", "Okras3", "FIO3", "Nickname3");
	Keeper K1(6);
	K1.addAnimal(F1);
	K1.addAnimal(B1);
	K1.addAnimal(C1);
	K1.outputContainer();
	return 0;
}