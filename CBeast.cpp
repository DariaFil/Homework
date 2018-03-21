#include "CBeast.h"

string CBeastInfantryman::info() const {
	cout << "Beast Infantryman" << endl;
	return "Beast Infantryman";
}
void CBeastInfantryman::race_protection_bonus(const FieldType& field_type) {
	if (field_type == FIELD && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != FIELD && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CBeastInfantryman::return_name() const {
	return "BI";
}

string CBeastArcher::info() const {
	cout << "Beast Archer" << endl;
	return "Beast Archer";
}
void CBeastArcher::race_protection_bonus(const FieldType& field_type) {
	if (field_type == FIELD && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != FIELD && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CBeastArcher::return_name() const {
	return "BA";
}

string CBeastHorseman::info() const {
	cout << "Beast Horseman" << endl;
	return "Beast Horseman";
}
void CBeastHorseman::race_protection_bonus(const FieldType& field_type) {
	if (field_type == FIELD && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != FIELD && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CBeastHorseman::return_name() const {
	return "BH";
}

string CBeastBerserk::info() const {
	cout << "Beast Berserk" << endl;
	return "Beast Berserk";
}
void CBeastBerserk::race_protection_bonus(const FieldType& field_type) {
	if (field_type == FIELD && !InField) {
		PROTECTION += 10;
		InField = true;
	}
	else if (field_type != FIELD && InField) {
		PROTECTION -= 10;
		InField = false;
	}
}
string CBeastBerserk::return_name() const {
	return "BB";
}