#ifndef CLIZARD
#define CLIZARD

#include "CVarriors.h"

class LizardInfantryman : public Infantryman {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class LizardArcher : public Archer {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class LizardHorseman : public Horseman {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class LizardBerserk : public Berserk {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

#endif