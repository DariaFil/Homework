#include "CHuman.h"

void CHumanInfantryman::info() const {
	cout << "Human Infantryman" << endl;
}
void CHumanInfantryman::race_protection_bonus(const FieldType& field_type) {
	if (field_type == FOREST && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != FOREST && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CHumanInfantryman::return_name() const {
	return "HI";
}

void CHumanArcher::info() const {
	cout << "Human Archer" << endl;
}
void CHumanArcher::race_protection_bonus(const FieldType& field_type) {
	if (field_type == FOREST && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != FOREST && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CHumanArcher::return_name() const {
	return "HA";
}

void CHumanHorseman::info() const {
	cout << "Human Horseman" << endl;
}
void CHumanHorseman::race_protection_bonus(const FieldType& field_type) {
	if (field_type == FOREST && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != FOREST && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CHumanHorseman::return_name() const {
	return "HH";
}

void CHumanBerserk::info() const {
	cout << "Human Berserk" << endl;
}
void CHumanBerserk::race_protection_bonus(const FieldType& field_type) {
	if (field_type == FOREST && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != FOREST && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CHumanBerserk::return_name() const {
	return "HB";
}