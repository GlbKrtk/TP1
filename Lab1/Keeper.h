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
	void outputContainer();
	void changeParameter(int);
	void fileRead();
	void fileWrite();
private:
	Animal **ptrclass;
	int size;
	int index;
};