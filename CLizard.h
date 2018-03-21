#ifndef CLIZARD
#define CLIZARD

#include "CVarriors.h"

class CLizardInfantryman : public CInfantryman {
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
};

class CLizardArcher : public CArcher {
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
};

class CLizardHorseman : public CHorseman {
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
};

class CLizardBerserk : public CBerserk {
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
};

#endif