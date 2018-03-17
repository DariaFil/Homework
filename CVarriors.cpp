#include "CVarriors.h"

void Infantryman::createUnit(int side, int number) {
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

void Archer::createUnit(int side, int number) {
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

void Horseman::createUnit(int side, int number) {
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

void Berserk::createUnit(int side, int number) {
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