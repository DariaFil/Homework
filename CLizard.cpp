#include "CLizard.h"

string CLizardInfantryman::info() const {
	cout << "Lizard Infantryman" << endl;
	return "Lizard Infantryman";
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
void CLizardInfantryman::set_InField(const FieldType field) {
	if (field == WATER)
		InField = true;
	else
		InField = false;
}

string CLizardArcher::info() const {
	cout << "Lizard Archer" << endl;
	return "Lizard Archer";
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
void CLizardArcher::set_InField(const FieldType field) {
	if (field == WATER)
		InField = true;
	else
		InField = false;
}

string CLizardHorseman::info() const {
	cout << "Lizard Horseman" << endl;
	return "Lizard Horseman";
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
void CLizardHorseman::set_InField(const FieldType field) {
		if (field == WATER)
			InField = true;
		else
			InField = false;
}

string CLizardBerserk::info() const {
	cout << "Lizard Berserk" << endl;
	return"Lizard Berserk";
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
void CLizardBerserk::set_InField(const FieldType field) {
	if (field == WATER)
		InField = true;
	else
		InField = false;
}