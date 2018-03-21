#ifndef CHUMAN
#define CHUMAN

#include "CVarriors.h"

class CHumanInfantryman : public CInfantryman {
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
};

class CHumanArcher : public CArcher {
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
};

class CHumanHorseman : public CHorseman {
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
};

class CHumanBerserk : public CBerserk
{
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
};

#endif