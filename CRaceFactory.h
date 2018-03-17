#ifndef CRACEFACTORY
#define CRACEFACTORY

#include "CFactory.h"
#include "CHuman.h"
#include "CLizard.h"
#include "CBeast.h"

class HumanArmyFactory : public ArmyFactory {
public:
	Infantryman* createInfantryman(int side, int number);
	Archer* createArcher(int side, int number);
	Horseman* createHorseman(int side, int number);
	Berserk* createBerserk(int side, int number);
};

class LizardArmyFactory : public ArmyFactory {
public:
	Infantryman* createInfantryman(int side, int number);
	Archer* createArcher(int side, int number);
	Horseman* createHorseman(int side, int number);
	Berserk* createBerserk(int side, int number);
};

class BeastArmyFactory : public ArmyFactory {
public:
	Infantryman* createInfantryman(int side, int number);
	Archer* createArcher(int side, int number);
	Horseman* createHorseman(int side, int number);
	Berserk* createBerserk(int side, int number);
};
#endif