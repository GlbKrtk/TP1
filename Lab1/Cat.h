#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Cat: public Animal {
public:
	void setFIO(string);
	string getFIO();
	void setNickname(string);
	string getNickname();
	Cat(string, string, string, string);
	Cat();
	Cat(const Cat& A1);
	~Cat();
	string outputFBC();
private:
	string fio;
	string nickname;
};