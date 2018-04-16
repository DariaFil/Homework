#include "CRaceFactory.h"

CInfantryman* CHumanArmyFactory::createInfantryman(int side, int number) {
	CHumanInfantryman* H = new CHumanInfantryman;
	H->createUnit(side, number);
	return H;
}
CArcher* CHumanArmyFactory::createArcher(int side, int number) {
	CHumanArcher* H = new CHumanArcher;
	H->createUnit(side, number);
	return H;
}
CHorseman* CHumanArmyFactory::createHorseman(int side, int number) {
	CHumanHorseman* H = new CHumanHorseman;
	H->createUnit(side, number);
	return H;
}
CBerserk* CHumanArmyFactory::createBerserk(int side, int number) {
	CHumanBerserk* H = new CHumanBerserk;
	H->createUnit(side, number);
	return H;
}

CInfantryman* CLizardArmyFactory::createInfantryman(int side, int number) {
	CLizardInfantryman* L = new CLizardInfantryman;
	L->createUnit(side, number);
	return L;
}
CArcher* CLizardArmyFactory::createArcher(int side, int number) {
	CLizardArcher* L = new CLizardArcher;
	L->createUnit(side, number);
	return L;
}
CHorseman* CLizardArmyFactory::createHorseman(int side, int number) {
	CLizardHorseman* L = new CLizardHorseman;
	L->createUnit(side, number);
	return L;
}
CBerserk* CLizardArmyFactory::createBerserk(int side, int number) {
	CLizardBerserk* L = new CLizardBerserk;
	L->createUnit(side, number);
	return L;
}

CInfantryman* CBeastArmyFactory::createInfantryman(int side, int number) {
	CBeastInfantryman* B = new CBeastInfantryman;
	B->createUnit(side, number);
	return B;
}
CArcher* CBeastArmyFactory::createArcher(int side, int number) {
	CBeastArcher* B = new CBeastArcher;
	B->createUnit(side, number);
	return B;
}
CHorseman* CBeastArmyFactory::createHorseman(int side, int number) {
	CBeastHorseman* B = new CBeastHorseman;
	B->createUnit(side, number);
	return B;
}
CBerserk* CBeastArmyFactory::createBerserk(int side, int number) {
	CBeastBerserk* B = new CBeastBerserk;
	B->createUnit(side, number);
	return B;
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