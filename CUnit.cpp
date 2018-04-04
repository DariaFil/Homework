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

void CUnit::set_position(int player, int number, int n, int m) {
		if (player == 1) {
			y = 0;
			x = number;
		}
		else {
			y = n - 1;
			x = m - number - 1;
		}
	}
CUnit::~CUnit() {}

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