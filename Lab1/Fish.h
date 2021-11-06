#pragma once

#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Fish : public Animal {
public:
	void setTypePitanie(string);
	string getTypePitanie();
	Fish(string, string, string);
	Fish();
	Fish(const Fish&);
	~Fish();
	string outputFBC();
	void changeType();
private:
	string typePitanie;

};