#include "CRace.h"

int BeastRace::add_protection_bonus(const FieldType& field, bool in_field) {
	if (!in_field && field == FIELD)
		return 10;
	else if (in_field && field != FIELD)
		return -10;
	else
		return 0;
}
string BeastRace::race_info() {
	return "Beast";
}
string BeastRace::return_race_name() const {
	return "B";
}
bool BeastRace::set_race_InField(const FieldType field) {
	if (field == FIELD)
		return true;
	else
		return false;
}

int HumanRace::add_protection_bonus(const FieldType& field, bool in_field) {
	if (!in_field && field == FOREST)
		return 10;
	else if (in_field && field != FOREST)
		return -10;
	else
		return 0;
}
string HumanRace::race_info() {
	return "Human";
}
string HumanRace::return_race_name() const {
	return "H";
}
bool HumanRace::set_race_InField(const FieldType field) {
	if (field == FOREST)
		return true;
	else
		return false;
}

int LizardRace::add_protection_bonus(const FieldType& field, bool in_field) {
	if (!in_field && field == WATER)
		return 10;
	else if (in_field && field != WATER)
		return -10;
	else
		return 0;
}
string LizardRace::race_info() {
	return "Lizard";
}
string LizardRace::return_race_name() const {
	return "L";
}
bool LizardRace::set_race_InField(const FieldType field) {
	if (field == WATER)
		return true;
	else
		return false;
}