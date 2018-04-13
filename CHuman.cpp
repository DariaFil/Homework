#include "CHuman.h"

string CHumanInfantryman::info() const {
	cout << "Human Infantryman" << endl;
	return "Human Infantryman";
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
void CHumanInfantryman::set_InField(const FieldType field) {
	if (field == FOREST)
		InField = true;
	else
		InField = false;
}

string CHumanArcher::info() const {
	cout << "Human Archer" << endl;
	return "Human Archer";
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
void CHumanArcher::set_InField(const FieldType field) {
	if (field == FOREST)
		InField = true;
	else
		InField = false;
}

string CHumanHorseman::info() const {
	cout << "Human Horseman" << endl;
	return "Human Horseman";
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
void CHumanHorseman::set_InField(const FieldType field) {
	if (field == FOREST)
		InField = true;
	else
		InField = false;
}

string CHumanBerserk::info() const {
	cout << "Human Berserk" << endl;
	return "Human Berserk";
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
void CHumanBerserk::set_InField(const FieldType field) {
	if (field == FOREST)
		InField = true;
	else
		InField = false;
}