#ifndef CVARRIORS
#define CVARRIORS

#include"CUnit.h"

using namespace std;

class CInfantryman : public CUnit {
public:
	void createUnit(int side, int number);
};

class CArcher : public CUnit {
public:
	void createUnit(int side, int number);
};

class CHorseman : public CUnit {
public:
	void createUnit(int side, int number);
};

class CBerserk : public CUnit {
public:
	void createUnit(int side, int number);
};

#endif