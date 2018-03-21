#ifndef CBEAST
#define CBEAST

#include "CVarriors.h"

class CBeastInfantryman : public CInfantryman {
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
};

class CBeastArcher : public CArcher {
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
};

class CBeastHorseman : public CHorseman {
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
};

class CBeastBerserk : public CBerserk {
public:
	string info() const;
	void race_protection_bonus(const FieldType& field_type);
	string return_name() const;
};

#endif