#include "CBeast.h"

void CBeastInfantryman::info() const {
	cout << "Beast Infantryman" << endl;
}
void CBeastInfantryman::race_protection_bonus(const string& field_type) {
	if (field_type == "Field" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Field" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CBeastInfantryman::return_name() const {
	return "BI";
}

void CBeastArcher::info() const {
	cout << "Beast Archer" << endl;
}
void CBeastArcher::race_protection_bonus(const string& field_type) {
	if (field_type == "Field" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Field" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CBeastArcher::return_name() const {
	return "BA";
}

void CBeastHorseman::info() const {
	cout << "Beast Horseman" << endl;
}
void CBeastHorseman::race_protection_bonus(const string& field_type) {
	if (field_type == "Field" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Field" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CBeastHorseman::return_name() const {
	return "BH";
}

void CBeastBerserk::info() const {
	cout << "Beast Berserk" << endl;
}
void CBeastBerserk::race_protection_bonus(const string& field_type) {
	if (field_type == "Field" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Field" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CBeastBerserk::return_name() const {
	return "BB";
}
