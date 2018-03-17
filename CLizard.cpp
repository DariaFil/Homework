#include "CLizard.h"

void LizardInfantryman::info() {
	cout << "Lizard Infantryman" << endl;
}
void LizardInfantryman::race_protection_bonus(const string& field_type) {
	if (field_type == "Water" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Water" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string LizardInfantryman::return_name() { return "LI"; }

void LizardArcher::info() {
	cout << "Lizard Archer" << endl;
}
void LizardArcher::race_protection_bonus(const string& field_type) {
	if (field_type == "Water" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Water" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string LizardArcher::return_name() { return "LA"; }

void LizardHorseman::info() {
	cout << "Lizard Horseman" << endl;
}
void LizardHorseman::race_protection_bonus(const string& field_type) {
	if (field_type == "Water" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Water" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string LizardHorseman::return_name() { return "LH"; }

void LizardBerserk::info() {
	cout << "Lizard Berserk" << endl;
}
void LizardBerserk::race_protection_bonus(const string& field_type) {
	if (field_type == "Water" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Water" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string LizardBerserk::return_name() { return "LB"; }