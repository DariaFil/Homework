#ifndef CVARRIORS
#define CVARRIORS

#include"CUnit.h"

class CInfantryman : public CUnit {
public:
	void createUnit(int side, int number);
	string info() const;
	string return_name() const;
};

class CArcher : public CUnit {
public:
	void createUnit(int side, int number);
	string info() const;
	string return_name() const;
};

class CHorseman : public CUnit {
public:
	void createUnit(int side, int number);
	string info() const;
	string return_name() const;
};

class CBerserk : public CUnit {
public:
	void createUnit(int side, int number);
	string info() const;
	string return_name() const;
};

#endif