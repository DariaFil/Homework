#include "CGame.h"

CGame::CGame() {
	Player_army.resize(2);
}
void CGame::createBattleField(int n, int m) {
	bfield = new CBattleField(n, m);
}

void CGame::createInf(CArmy* p, int amount, int side, CArmyFactory* factory, int& army_count) {
	for (int i = 0; i < amount; ++i) {
		p->push_unit(factory->createInfantryman(side, army_count));
		p->return_unit(p->return_size() - 1)->set_position(side, p->return_size() - 1, bfield->BF.size(), bfield->BF[0].size());
		bfield->set_position(p->return_unit(p->return_size() - 1)->x, p->return_unit(p->return_size() - 1)->y, p->return_unit(p->return_size() - 1)->return_name());
		++army_count;
	}
}
void CGame::createArc(CArmy* p, int amount, int side, CArmyFactory* factory, int& army_count) {
	for (int i = 0; i < amount; ++i) {
		p->push_unit(factory->createArcher(side, army_count));
		p->return_unit(p->return_size() - 1)->set_position(side, p->return_size() - 1, bfield->BF.size(), bfield->BF[0].size());
		bfield->set_position(p->return_unit(p->return_size() - 1)->x, p->return_unit(p->return_size() - 1)->y, p->return_unit(p->return_size() - 1)->return_name());
		++army_count;
	}
}
void CGame::createHor(CArmy* p, int amount, int side, CArmyFactory* factory, int& army_count) {
	for (int i = 0; i < amount; ++i) {
		p->push_unit(factory->createHorseman(side, army_count));
		p->return_unit(p->return_size() - 1)->set_position(side, p->return_size() - 1, bfield->BF.size(), bfield->BF[0].size());
		bfield->set_position(p->return_unit(p->return_size() - 1)->x, p->return_unit(p->return_size() - 1)->y, p->return_unit(p->return_size() - 1)->return_name());
		++army_count;
	}
}
void CGame::createBer(CArmy* p, int amount, int side, CArmyFactory* factory, int& army_count) {
	for (int i = 0; i < amount; ++i) {
		p->push_unit(factory->createBerserk(side, army_count));
		p->return_unit(p->return_size() - 1)->set_position(side, p->return_size() - 1, bfield->BF.size(), bfield->BF[0].size());
		bfield->set_position(p->return_unit(p->return_size() - 1)->x, p->return_unit(p->return_size() - 1)->y, p->return_unit(p->return_size() - 1)->return_name());
		++army_count;
	}
}

void CGame::createArmy(int inf, int arc, int hm, int ber, int side) {
	CArmy* p = new CArmy;

	CDirector dir;
	CArmyLeaderBuilder l_builder;
	CLeader* main_unit = dir.ConstructLeader(l_builder, side);
	int army_count = 0;
	main_unit->set_position(side, army_count++, bfield->BF.size(), bfield->BF[0].size());
	bfield->set_position(main_unit->x, main_unit->y, main_unit->return_name());

	RaceType race = main_unit->get_race();
	CArmyFactory* factory;
	if (race == HUMAN)
		factory = new CHumanArmyFactory;
	if (race == LIZARD)
		factory = new CLizardArmyFactory;
	if (race == BEAST)
		factory = new CBeastArmyFactory;
	p->push_unit(main_unit);

	createInf(p, inf, side, factory, army_count);
	createArc(p, arc, side, factory, army_count);
	createHor(p, hm, side, factory, army_count);
	createBer(p, ber, side, factory, army_count);
	Player_army[side - 1] = p;
	BattlefieldPrinter fp;
	fp.print(bfield);
	delete factory;
}

CGame::~CGame() {
	delete bfield;
	for (int i = 0; i < 1; ++i)
		delete Player_army[i];
}