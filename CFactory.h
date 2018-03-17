#ifndef CFACTORY
#define CFACTORY

#include "CVarriors.h"

using namespace std;

class ArmyFactory {
public:
	virtual Infantryman* createInfantryman(int side, int number) = 0;
	virtual Archer* createArcher(int side, int number) = 0;
	virtual Horseman* createHorseman(int side, int number) = 0;
	virtual Berserk* createBerserk(int side, int number) = 0;
	virtual ~ArmyFactory() {}
};

#endif