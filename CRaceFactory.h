#ifndef CRACEFACTORY
#define CRACEFACTORY

#include "CFactory.h"
#include "CHuman.h"
#include "CLizard.h"
#include "CBeast.h"

class CHumanArmyFactory : public CArmyFactory {
public:
	CInfantryman* createInfantryman(int side, int number);
	CArcher* createArcher(int side, int number);
	CHorseman* createHorseman(int side, int number);
	CBerserk* createBerserk(int side, int number);
};

class CLizardArmyFactory : public CArmyFactory {
public:
	CInfantryman* createInfantryman(int side, int number);
	CArcher* createArcher(int side, int number);
	CHorseman* createHorseman(int side, int number);
	CBerserk* createBerserk(int side, int number);
};

class CBeastArmyFactory : public CArmyFactory {
public:
	CInfantryman* createInfantryman(int side, int number);
	CArcher* createArcher(int side, int number);
	CHorseman* createHorseman(int side, int number);
	CBerserk* createBerserk(int side, int number);
};
#endif