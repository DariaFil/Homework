#pragma once

enum RaceType { HUMAN, LIZARD, BEAST };
#ifndef FIELDTYPE_DEFINED
#define FIELDTYPE_DEFINED
enum FieldType { FIELD = 0, FOREST, WATER };
#endif

#ifndef FUNCTIONS_DEFINED
#define FUNCTIONS_DEFINED
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::set;
using std::abs;
#endif

class IRace {
public:
	~IRace() {};
	virtual int add_protection_bonus(const FieldType& field, bool in_field) = 0;
	virtual string race_info() const = 0;
	virtual string return_race_name() const = 0;
	RaceType race_type;
};

class BeastRace : public IRace {
public:
	BeastRace() { race_type = BEAST; }
	int add_protection_bonus(const FieldType& field, bool in_field);
	string race_info() const;
	string return_race_name() const;
};

class HumanRace : public IRace {
public:
	HumanRace() { race_type = HUMAN; }
	int add_protection_bonus(const FieldType& field, bool in_field);
	string race_info() const;
	string return_race_name() const;
};

class LizardRace : public IRace {
public:
	LizardRace() { race_type = LIZARD; }
	int add_protection_bonus(const FieldType& field, bool in_field);
	string race_info() const;
	string return_race_name() const;
};