#ifndef CVARRIORS
#define CVARRIORS

#include"CUnit.h"

using namespace std;

class Infantryman : public Unit {
public:
	void createUnit(int side, int number);
	virtual void info() = 0;
	virtual void race_protection_bonus(const string& field_type) = 0;
};

class Archer : public Unit {
public:
	virtual void info() = 0;
	virtual void race_protection_bonus(const string& field_type) = 0;
	void createUnit(int side, int number);
};

class Horseman : public Unit {
public:
	virtual void info() = 0;
	virtual void race_protection_bonus(const string& field_type) = 0;
	void createUnit(int side, int number);
};

class Berserk : public Unit {
public:
	virtual void info() = 0;
	virtual void race_protection_bonus(const string& field_type) = 0;
	void createUnit(int side, int number);
};

#endif