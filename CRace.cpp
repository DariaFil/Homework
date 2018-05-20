#include "CRace.h"

int BeastRace::add_protection_bonus(const FieldType& field, bool in_field) {
	if (!in_field && field == FIELD)
		return 10;
	else if (in_field && field != FIELD)
		return -10;
	else
		return 0;
}
string BeastRace::race_info() const {
	return "Beast";
}
string BeastRace::return_race_name() const {
	return "B";
}

int HumanRace::add_protection_bonus(const FieldType& field, bool in_field) {
	if (!in_field && field == FOREST)
		return 10;
	else if (in_field && field != FOREST)
		return -10;
	else
		return 0;
}
string HumanRace::race_info() const {
	return "Human";
}
string HumanRace::return_race_name() const {
	return "H";
}

int LizardRace::add_protection_bonus(const FieldType& field, bool in_field) {
	if (!in_field && field == WATER)
		return 10;
	else if (in_field && field != WATER)
		return -10;
	else
		return 0;
}
string LizardRace::race_info() const {
	return "Lizard";
}
string LizardRace::return_race_name() const {
	return "L";
}