#ifndef CFACTORY
#define CFACTORY

#include "CVarriors.h"

class CArmyFactory { // сюда скорее всего тоже надо будет класс расы, чтобы облегчить развилку
public:
	virtual CInfantryman* createInfantryman(int side, int number, RaceType _race) = 0;
	virtual CArcher* createArcher(int side, int number) = 0;
	virtual CHorseman* createHorseman(int side, int number) = 0;
	virtual CBerserk* createBerserk(int side, int number) = 0;
	virtual ~CArmyFactory() {}
};

#endif