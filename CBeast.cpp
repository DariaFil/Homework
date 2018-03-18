#include "CBeast.h"

void CBeastInfantryman::info() {
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
string CBeastInfantryman::return_name() { return "BI"; }

void CBeastArcher::info() {
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
string CBeastArcher::return_name() { return "BA"; }

void CBeastHorseman::info() {
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
string CBeastHorseman::return_name() { return "BH"; }

void CBeastBerserk::info() {
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
string CBeastBerserk::return_name() { return "BB"; }