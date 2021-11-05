#pragma once
#include "Animal.h"

class Keeper {
public:
	void addAnimal(Animal&);
	void deleteAnimal();
	Keeper(int);
	Keeper();
	Keeper(const Keeper&);
	~Keeper();
private:
	Animal **ptrclass;
	int size;
	int index;
};