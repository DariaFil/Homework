#ifndef CBEAST
#define CBEAST

#include "CVarriors.h"

class BeastInfantryman : public Infantryman {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class BeastArcher : public Archer {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class BeastHorseman : public Horseman {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

class BeastBerserk : public Berserk {
public:
	void info();
	void race_protection_bonus(const string& field_type);
	string return_name();
};

#endif