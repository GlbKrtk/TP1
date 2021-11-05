#pragma once

#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Fish:Animal {
public:
	void setTypePitanie(string);
	string getTypePitanie();
	Fish(string);
	Fish();
	Fish(const Fish&);
	~Fish();
private:
	string typePitanie;

};