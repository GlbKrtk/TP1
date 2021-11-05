#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void setPoroda(string);
	string getPoroda();
	void setOkras(string);
	string getOkras();
	Animal(string, string);
	Animal();
	Animal(const Animal&);
	virtual ~Animal();
private:
	string poroda;
	string okras;

};