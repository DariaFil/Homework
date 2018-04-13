#ifndef CHUMAN
#define CHUMAN

#include "CVarriors.h"

class CHumanInfantryman : public CInfantryman {
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
	void set_InField(const FieldType field);
};

class CHumanArcher : public CArcher {
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
	void set_InField(const FieldType field);
};

class CHumanHorseman : public CHorseman {
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
	void set_InField(const FieldType field);
};

class CHumanBerserk : public CBerserk
{
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
	void set_InField(const FieldType field);
};

#endif