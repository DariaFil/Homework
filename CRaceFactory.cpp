#include "CRaceFactory.h"

CArmyFactory::CArmyFactory(RaceType _race) {
	race_type = _race;
}

CInfantryman* CArmyFactory::createInfantryman(int side, int number) {
	CInfantryman* H = new CInfantryman;
	H->createUnit(side, number);
	H->set_race(race_type);
	return H;
}
CArcher* CArmyFactory::createArcher(int side, int number) {
	CArcher* H = new CArcher;
	H->createUnit(side, number);
	H->set_race(race_type);
	return H;
}
CHorseman* CArmyFactory::createHorseman(int side, int number) {
	CHorseman* H = new CHorseman;
	H->createUnit(side, number);
	H->set_race(race_type);
	return H;
}
CBerserk* CArmyFactory::createBerserk(int side, int number) {
	CBerserk* H = new CBerserk;
	H->createUnit(side, number);
	H->set_race(race_type);
	return H;
}

CRevivalFactory::CRevivalFactory(CArmyFactory* fact, int sum) {
	factory = fact;
	player_sum = sum;
}
CInfantryman* CRevivalFactory::createInfantryman(int side, int number) {
	CInfantryman* I = factory->createInfantryman(side, number);
	player_sum -= I->return_state[8];
	return I;
}
CArcher* CRevivalFactory::createArcher(int side, int number) {
	CArcher* A = factory->createArcher(side, number);
	player_sum -= A->return_state[8];
	return A;
}
CHorseman* CRevivalFactory::createHorseman(int side, int number) {
	CHorseman* H = factory->createHorseman(side, number);
	player_sum -= H->return_state[8];
	return H;
}
CBerserk* CRevivalFactory::createBerserk(int side, int number) {
	CBerserk* B = factory->createBerserk(side, number);
	player_sum -= B->return_state[8];
	return B;
}
int CRevivalFactory::update_sum() {
	return player_sum;
}