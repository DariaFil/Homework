#ifndef CGAME
#define CGAME

#include "CArmy.h"
#include "CBattlefield.h"
#include "CLeader.h"
#include "CRaceFactory.h"

class CGame {
public:
	CGame();
	~CGame();
	void createBattleField(int n, int m);
	void createInf(CArmy* p, int amount, int side, CArmyFactory* factory, int& army_count);
	void createArc(CArmy* p, int amount, int side, CArmyFactory* factory, int& army_count);
	void createHor(CArmy* p, int amount, int side, CArmyFactory* factory, int& army_count);
	void createBer(CArmy* p, int amount, int side, CArmyFactory* factory, int& army_count);
	void createArmy(int inf, int arc, int hm, int ber, int side);

private:
	std::vector<CArmy*> Player_army;
	CBattleField* bfield;
};

#endif