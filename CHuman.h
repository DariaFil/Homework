#ifndef CHUMAN
#define CHUMAN

#include "CVarriors.h"

class HumanInfantryman : public Infantryman {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class HumanArcher : public Archer {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class HumanHorseman : public Horseman {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class HumanBerserk : public Berserk
{
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

#endif