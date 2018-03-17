#include "CUnit.h"

void Unit::print_state() {
		cout << "State of unit:" << endl;
		cout << "Number: " << NUMBER << endl;
		cout << "Health points: " << HP << endl;
		cout << "Attack speed: " << ATTACK_SPEED << endl;
		cout << "Attack forse: " << ATTACK_FORSE << endl;
		cout << "Radius of loss: " << RADIUS << endl;
		cout << "Speed: " << SPEED << endl;
		cout << "Protection: " << PROTECTION << endl;
		cout << "Reward: " << REWARD << endl;
		cout << "Position:" << y << " " << x << endl;
		cout << endl;
	}

void Unit::set_position(int player, int number, int n, int m) {
		if (player == 1) {
			y = 0;
			x = number;
		}
		else {
			y = n - 1;
			x = m - number - 1;
		}
	}
Unit::~Unit() {}