#include "CHuman.h"

void CHumanInfantryman::info() {
	cout << "Human Infantryman" << endl;
}
void CHumanInfantryman::race_protection_bonus(const string& field_type) {
	if (field_type == "Forest" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Forest" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CHumanInfantryman::return_name() { return "HI"; }

void CHumanArcher::info() {
	cout << "Human Archer" << endl;
}
void CHumanArcher::race_protection_bonus(const string& field_type) {
	if (field_type == "Forest" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Forest" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CHumanArcher::return_name() { return "HA"; }

void CHumanHorseman::info() {
	cout << "Human Horseman" << endl;
}
void CHumanHorseman::race_protection_bonus(const string& field_type) {
	if (field_type == "Forest" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Forest" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CHumanHorseman::return_name() { return "HH"; }

void CHumanBerserk::info() {
	cout << "Human Berserk" << endl;
}
void CHumanBerserk::race_protection_bonus(const string& field_type) {
	if (field_type == "Forest" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Forest" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CHumanBerserk::return_name() { return "HB"; }