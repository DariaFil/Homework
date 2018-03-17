#include "CRaceFactory.h"

Infantryman* HumanArmyFactory::createInfantryman(int side, int number) {
	HumanInfantryman* H = new HumanInfantryman;
	H->createUnit(side, number);
	return H;
}
Archer* HumanArmyFactory::createArcher(int side, int number) {
	HumanArcher* H = new HumanArcher;
	H->createUnit(side, number);
	return H;
}
Horseman* HumanArmyFactory::createHorseman(int side, int number) {
	HumanHorseman* H = new HumanHorseman;
	H->createUnit(side, number);
	return H;
}
Berserk* HumanArmyFactory::createBerserk(int side, int number) {
	HumanBerserk* H = new HumanBerserk;
	H->createUnit(side, number);
	return H;
}

Infantryman* LizardArmyFactory::createInfantryman(int side, int number) {
	LizardInfantryman* L = new LizardInfantryman;
	L->createUnit(side, number);
	return L;
}
Archer* LizardArmyFactory::createArcher(int side, int number) {
	LizardArcher* L = new LizardArcher;
	L->createUnit(side, number);
	return L;
}
Horseman* LizardArmyFactory::createHorseman(int side, int number) {
	LizardHorseman* L = new LizardHorseman;
	L->createUnit(side, number);
	return L;
}
Berserk* LizardArmyFactory::createBerserk(int side, int number) {
	LizardBerserk* L = new LizardBerserk;
	L->createUnit(side, number);
	return L;
}

Infantryman* BeastArmyFactory::createInfantryman(int side, int number) {
	BeastInfantryman* B = new BeastInfantryman;
	B->createUnit(side, number);
	return B;
}
Archer* BeastArmyFactory::createArcher(int side, int number) {
	BeastArcher* B = new BeastArcher;
	B->createUnit(side, number);
	return B;
}
Horseman* BeastArmyFactory::createHorseman(int side, int number) {
	BeastHorseman* B = new BeastHorseman;
	B->createUnit(side, number);
	return B;
}
Berserk* BeastArmyFactory::createBerserk(int side, int number) {
	BeastBerserk* B = new BeastBerserk;
	B->createUnit(side, number);
	return B;
}