#ifndef CBEAST
#define CBEAST

#include "CVarriors.h"

class CBeastInfantryman : public CInfantryman {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class CBeastArcher : public CArcher {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class CBeastHorseman : public CHorseman {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class CBeastBerserk : public CBerserk {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

#endif