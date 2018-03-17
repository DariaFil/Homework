#include "CBeast.h"

void BeastInfantryman::info() {
	cout << "Beast Infantryman" << endl;
}
void BeastInfantryman::race_protection_bonus(const string& field_type) {
	if (field_type == "Field" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Field" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string BeastInfantryman::return_name() { return "BI"; }

void BeastArcher::info() {
	cout << "Beast Archer" << endl;
}
void BeastArcher::race_protection_bonus(const string& field_type) {
	if (field_type == "Field" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Field" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string BeastArcher::return_name() { return "BA"; }

void BeastHorseman::info() {
	cout << "Beast Horseman" << endl;
}
void BeastHorseman::race_protection_bonus(const string& field_type) {
	if (field_type == "Field" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Field" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string BeastHorseman::return_name() { return "BH"; }

void BeastBerserk::info() {
	cout << "Beast Berserk" << endl;
}
void BeastBerserk::race_protection_bonus(const string& field_type) {
	if (field_type == "Field" && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != "Field" && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string BeastBerserk::return_name() { return "BB"; }