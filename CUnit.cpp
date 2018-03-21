#include "CUnit.h"

vector<int> CUnit::print_state() const {
	vector<int> params;
	cout << "State of unit of " << SIDE << " side number " << NUMBER << ":" << endl;
	cout << "Health points: " << HP << endl;
	cout << "Attack speed: " << ATTACK_SPEED << endl;
	cout << "Attack forse: " << ATTACK_FORSE << endl;
	cout << "Radius of loss: " << RADIUS << endl;
	cout << "Speed: " << SPEED << endl;
	cout << "Protection: " << PROTECTION << endl;
	cout << "Reward: " << REWARD << endl;
	cout << "Position:" << y << " " << x << endl;
	cout << endl;
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