#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Bird: public Animal {
public:
	void setChemPitaetsa(string);
	string getChemPitaetsa();
	void setGdeObitaet(string);
	string getGdeObitaet();
	Bird(string, string, string, string);
	Bird();
	Bird(const Bird&);
	~Bird();
	string outputFBC();
	void changeType();
private:
	string chemPitaetsa;
	string gdeObitaet;

};