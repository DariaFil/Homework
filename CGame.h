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

	CUnit* choose_unit(int side);
	void player_step(int side, CUnit* current_unit);
	void choose_unit_to_buy(int side, int sum);
	void reviveUnit(CArmy* army, int side, int sum, VarriorType type, CArmyFactory* factory);
private:
	std::vector<CArmy*> Player_army;
	int varriors_number;
	CBattleField* bfield;
};

#endif