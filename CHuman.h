#ifndef CHUMAN
#define CHUMAN

#include "CVarriors.h"

class CHumanInfantryman : public CInfantryman {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class CHumanArcher : public CArcher {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class CHumanHorseman : public CHorseman {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class CHumanBerserk : public CBerserk
{
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

#endif