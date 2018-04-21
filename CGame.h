#ifndef CGAME
#define CGAME

enum VarriorType { INFANTRYMAN = 0, ARCHER, HORSEMAN, BERSERK, WRONGTYPE };
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

	void player_step(int side);
	void player_punch(int side);
	bool check_end();
	void choose_unit_to_buy(int side);
	void reviveUnit(CArmy* army, int side, VarriorType type, CArmyFactory* factory);
private:
	std::vector<CArmy*> Player_army;
	int varriors_number;
	int player_reward = 0;
	CBattleField* bfield;
};

#endif