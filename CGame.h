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
	void createArmy(int inf, int arc, int hm, int ber, int side);

private:
	vector<CArmy*> Player_army;
	CBattleField* bfield;
};

#endif