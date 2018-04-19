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

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::set;
#endif

class IRace {
public:
	~IRace() {};
	virtual int add_protection_bonus(const FieldType& field, bool in_field) = 0;
	virtual string race_info() = 0;
	virtual string return_race_name() const = 0;
	virtual bool set_race_InField(const FieldType field) = 0;
	RaceType race_type;
};

class BeastRace : public IRace {
public:
	int add_protection_bonus(const FieldType& field, bool in_field);
	string race_info();
	string return_race_name() const;
	bool set_race_InField(const FieldType field);
	RaceType race_type = BEAST;
};

class HumanRace : public IRace {
public:
	int add_protection_bonus(const FieldType& field, bool in_field);
	string race_info();
	string return_race_name() const;
	bool set_race_InField(const FieldType field);
	RaceType race_type = HUMAN;
};

class LizardRace : public IRace {
public:
	int add_protection_bonus(const FieldType& field, bool in_field);
	string race_info();
	string return_race_name() const;
	bool set_race_InField(const FieldType field);
	RaceType race_type = LIZARD;
};