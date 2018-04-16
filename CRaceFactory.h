#ifndef CRACEFACTORY
#define CRACEFACTORY

#include "IFactory.h"
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

class CRevivalFactory : public CArmyFactory {
public:
	CRevivalFactory(CArmyFactory* fact, int sum);
	CInfantryman* createInfantryman(int side, int number);
	CArcher* createArcher(int side, int number);
	CHorseman* createHorseman(int side, int number);
	CBerserk* createBerserk(int side, int number);
	int update_sum();
private:
	CArmyFactory* factory;
	int player_sum;
};
#endif