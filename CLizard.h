#ifndef CLIZARD
#define CLIZARD

#include "CVarriors.h"

class CLizardInfantryman : public CInfantryman {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class CLizardArcher : public CArcher {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class CLizardHorseman : public CHorseman {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class CLizardBerserk : public CBerserk {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

#endif