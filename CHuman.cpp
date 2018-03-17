#include "CHuman.h"

void HumanInfantryman::info() {
	cout << "Human Infantryman" << endl;
}
void HumanInfantryman::race_protection_bonus(const string& field_type) {
	if (field_type == "Forest" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Forest" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string HumanInfantryman::return_name() { return "HI"; }

void HumanArcher::info() {
	cout << "Human Archer" << endl;
}
void HumanArcher::race_protection_bonus(const string& field_type) {
	if (field_type == "Forest" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Forest" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string HumanArcher::return_name() { return "HA"; }

void HumanHorseman::info() {
	cout << "Human Horseman" << endl;
}
void HumanHorseman::race_protection_bonus(const string& field_type) {
	if (field_type == "Forest" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Forest" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string HumanHorseman::return_name() { return "HH"; }

void HumanBerserk::info() {
	cout << "Human Berserk" << endl;
}
void HumanBerserk::race_protection_bonus(const string& field_type) {
	if (field_type == "Forest" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Forest" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string HumanBerserk::return_name() { return "HB"; }