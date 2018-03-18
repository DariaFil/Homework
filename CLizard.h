#ifndef CLIZARD
#define CLIZARD

#include "CVarriors.h"

class CLizardInfantryman : public CInfantryman {
public:
	void info() const;
	void race_protection_bonus(const string& field_type);
	string return_name() const;
};

class CLizardArcher : public CArcher {
public:
	void info() const;
	void race_protection_bonus(const string& field_type);
	string return_name() const;
};

class CLizardHorseman : public CHorseman {
public:
	void info() const;
	void race_protection_bonus(const string& field_type);
	string return_name() const;
};

class CLizardBerserk : public CBerserk {
public:
	void info() const;
	void race_protection_bonus(const string& field_type);
	string return_name() const;
};

#endif