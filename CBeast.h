#ifndef CBEAST
#define CBEAST

#include "CVarriors.h"

class CBeastInfantryman : public CInfantryman {
public:
	void info() const;
	void race_protection_bonus(const string& field_type);
	string return_name() const;
};

class CBeastArcher : public CArcher {
public:
	void info() const;
	void race_protection_bonus(const string& field_type);
	string return_name() const;
};

class CBeastHorseman : public CHorseman {
public:
	void info() const;
	void race_protection_bonus(const string& field_type);
	string return_name() const;
};

class CBeastBerserk : public CBerserk {
public:
	void info() const;
	void race_protection_bonus(const string& field_type);
	string return_name() const;
};

#endif