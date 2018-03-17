#ifndef CVARRIORS
#define CVARRIORS

#include"CUnit.h"

using namespace std;

class Infantryman : public Unit {
public:
	void createUnit(int side, int number);
};

class Archer : public Unit {
public:
	void createUnit(int side, int number);
};

class Horseman : public Unit {
public:
	void createUnit(int side, int number);
};

class Berserk : public Unit {
public:
	void createUnit(int side, int number);
};

#endif