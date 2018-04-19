#ifndef CFACTORY
#define CFACTORY

#include "CVarriors.h"

class CArmyFactory {
public:
	CArmyFactory(RaceType _race);
	CArmyFactory() {};
	CInfantryman* createInfantryman(int side, int number);
	CArcher* createArcher(int side, int number);
	CHorseman* createHorseman(int side, int number);
	CBerserk* createBerserk(int side, int number);
	virtual ~CArmyFactory() {}
protected:
	RaceType race_type;
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