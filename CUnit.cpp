#include "CUnit.h"

vector<int> CUnit::return_state() const {
	vector<int> params;
	params.push_back(SIDE);
	params.push_back(NUMBER);
	params.push_back(HP);
	params.push_back(ATTACK_SPEED);
	params.push_back(ATTACK_FORSE);
	params.push_back(RADIUS);
	params.push_back(SPEED);
	params.push_back(PROTECTION);
	params.push_back(REWARD);
	return params;
}

void CUnit::set_race(RaceType _race) {
	switch (_race) {
	case HUMAN:
		race = new HumanRace;
		break;
	case LIZARD:
		race = new LizardRace;
		break;
	case BEAST:
		race = new BeastRace;
		break;
	}
}
RaceType CUnit::get_race() {
	return race->race_type;
}
void CUnit::set_position(int player, int number, int n, int m) {
	if (player == 0) {
		y = n;
		x = m;
	}
	else if (player == 1) {
		y = 0;
		x = number;
	}
	else {
		y = n - 1;
		x = m - number - 1;
	}
}
void CUnit::race_protection_bonus(const FieldType& field_type) {
	int old_prot = PROTECTION;
	PROTECTION += race->add_protection_bonus(field_type, InField);
	if (old_prot != PROTECTION)
		InField = !InField;
}
CUnit::~CUnit() {
	delete race;
}

void UnitPrinter::print(IObject* unit) const {
	CUnit* u = dynamic_cast<CUnit*>(unit);
	cout << "State of unit of " << u->SIDE << " side number " << u->NUMBER << ":" << endl;
	cout << "Health points: " << u->HP << endl;
	cout << "Attack speed: " << u->ATTACK_SPEED << endl;
	cout << "Attack forse: " << u->ATTACK_FORSE << endl;
	cout << "Radius of loss: " << u->RADIUS << endl;
	cout << "Speed: " << u->SPEED << endl;
	cout << "Protection: " << u->PROTECTION << endl;
	cout << "Reward: " << u->REWARD << endl;
	cout << "Position:" << u->y << " " << u->x << endl;
	cout << endl;
}

void CUnit::step(Direction direction) {
	switch(direction) {
	case UP:
		y -= 1;
		break;
	case DOWN:
		y += 1;
		break;
	case LEFT:
		x -= 1;
		break;
	case RIGHT:
		x += 1;
		break;
	}
}
int CUnit::punched(int forse, int speed) {
	int lost = damage(forse, speed);
	HP -= lost;
	if (HP <= 0) {
		cout << return_name() << " " << NUMBER << " died" << endl;
		Alive = false;
		return REWARD;
	}
	else {
		cout << return_name() << " lost " << lost << " health points" << endl;
		return 0;
	}
}
int CUnit::damage(int forse, int speed) {
	double prot = 1 - (PROTECTION - speed) * 0.01;
	if (prot > 1)
		prot = 1;
	if (prot < 0)
		prot = 0;
	return round(forse * prot);
}
int CUnit::dist(int other_x, int other_y) {
	return abs(x - other_x + y - other_y);
}