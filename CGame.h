#ifndef CGAME
#define CGAME

#include "CArmy.h"
#include "CBattlefield.h"
#include "CLeader.h"
#include "CRaceFactory.h"

class Game {
public:
	Game();
	~Game();
	void createBattleField(int n, int m);
	void createArmy(int inf, int arc, int hm, int ber, int side);

private:
	vector<Army*> Player_army;
	BattleField* bfield;
};

#endif