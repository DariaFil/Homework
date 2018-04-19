#include "CVarriors.h"

void CInfantryman::createUnit(int side, int number) {
	PROTECTION = 50;
	HP = 50;
	ATTACK_SPEED = 20;
	ATTACK_FORSE = 10;
	RADIUS = 1;
	SPEED = 2;
	REWARD = 20;
	SIDE = side;
	NUMBER = number;
}
string CInfantryman::info() const {
	cout << race->race_info() << " Infantryman" << endl;
	return race->race_info() + " Infantryman";
}
string CInfantryman::return_name() const {
	return race->return_race_name() + "I";
}

void CArcher::createUnit(int side, int number) {
	PROTECTION = 40;
	HP = 40;
	ATTACK_SPEED = 40;
	ATTACK_FORSE = 8;
	RADIUS = 5;
	SPEED = 1;
	REWARD = 10;
	SIDE = side;
	NUMBER = number;
}
string CArcher::info() const {
	cout << race->race_info() << " Archer" << endl;
	return race->race_info() + " Archer";
}
string CArcher::return_name() const {
	return race->return_race_name() + "A";
}

void CHorseman::createUnit(int side, int number) {
	PROTECTION = 60;
	HP = 60;
	ATTACK_SPEED = 30;
	ATTACK_FORSE = 15;
	RADIUS = 2;
	SPEED = 3;
	REWARD = 30;
	SIDE = side;
	NUMBER = number;
}
string CHorseman::info() const {
	cout << race->race_info() << " Horseman" << endl;
	return race->race_info() + " Horseman";
}
string CHorseman::return_name() const {
	return race->return_race_name() + "H";
}

void CBerserk::createUnit(int side, int number) {
	PROTECTION = 40;
	HP = 90;
	ATTACK_SPEED = 25;
	ATTACK_FORSE = 15;
	RADIUS = 2;
	SPEED = 2;
	REWARD = 30;
	SIDE = side;
	NUMBER = number;
}
string CBerserk::info() const {
	cout << race->race_info() << " Berserk" << endl;
	return race->race_info() + " Berserk";
}
string CBerserk::return_name() const {
	return race->return_race_name() + "B";
}