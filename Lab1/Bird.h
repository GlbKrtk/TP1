#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Bird:Animal {
public:
	void setChemPitaetsa(string);
	string getChemPitaetsa();
	void setGdeObitaet(string);
	string getGdeObitaet();
	Bird(string, string);
	Bird();
	Bird(const Bird&);
	~Bird();
private:
	string chemPitaetsa;
	string gdeObitaet;

};