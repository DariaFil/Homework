#include "CLizard.h"

void CLizardInfantryman::info() {
	cout << "Lizard Infantryman" << endl;
}
void CLizardInfantryman::race_protection_bonus(const string& field_type) {
	if (field_type == "Water" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Water" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CLizardInfantryman::return_name() { return "LI"; }

void CLizardArcher::info() {
	cout << "Lizard Archer" << endl;
}
void CLizardArcher::race_protection_bonus(const string& field_type) {
	if (field_type == "Water" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Water" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CLizardArcher::return_name() { return "LA"; }

void CLizardHorseman::info() {
	cout << "Lizard Horseman" << endl;
}
void CLizardHorseman::race_protection_bonus(const string& field_type) {
	if (field_type == "Water" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Water" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CLizardHorseman::return_name() { return "LH"; }

void CLizardBerserk::info() {
	cout << "Lizard Berserk" << endl;
}
void CLizardBerserk::race_protection_bonus(const string& field_type) {
	if (field_type == "Water" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Water" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CLizardBerserk::return_name() { return "LB"; }