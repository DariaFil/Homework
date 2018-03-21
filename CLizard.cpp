#include "CLizard.h"

void CLizardInfantryman::info() const {
	cout << "Lizard Infantryman" << endl;
}
void CLizardInfantryman::race_protection_bonus(const FieldType& field_type) {
	if (field_type == WATER && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != WATER && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CLizardInfantryman::return_name() const {
	return "LI";
}

void CLizardArcher::info() const {
	cout << "Lizard Archer" << endl;
}
void CLizardArcher::race_protection_bonus(const FieldType& field_type) {
	if (field_type == WATER && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != WATER && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CLizardArcher::return_name() const {
	return "LA";
}

void CLizardHorseman::info() const {
	cout << "Lizard Horseman" << endl;
}
void CLizardHorseman::race_protection_bonus(const FieldType& field_type) {
	if (field_type == WATER && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != WATER && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CLizardHorseman::return_name() const {
	return "LH";
}

void CLizardBerserk::info() const {
	cout << "Lizard Berserk" << endl;
}
void CLizardBerserk::race_protection_bonus(const FieldType& field_type) {
	if (field_type == WATER && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != WATER && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CLizardBerserk::return_name() const {
	return "LB";
}