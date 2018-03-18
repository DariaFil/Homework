#include "CGame.h"

CGame::CGame() { Player_army.resize(2); }
void CGame::createBattleField(int n, int m) {
	bfield = new CBattleField(n, m);
	bfield->print_battlefield();
}
void CGame::createArmy(int inf, int arc, int hm, int ber, int side) {
	CDirector dir;
	CArmyLeaderBuilder l_builder;
	CLeader* main_unit = dir.ConstructLeader(l_builder, side);
	int army_count = 0;
	main_unit->set_position(side, army_count++, bfield->BF.size(), bfield->BF[0].size());
	bfield->set_position(main_unit->x, main_unit->y, main_unit->return_name());
	CArmy* p = new CArmy;
	RaceType race = main_unit->get_race();
	CArmyFactory* factory;
	if (race == HUMAN)
		factory = new CHumanArmyFactory;
	if (race == LIZARD)
		factory = new CLizardArmyFactory;
	if (race == BEAST)
		factory = new CBeastArmyFactory;
	p->army_vector.push_back(main_unit);
	for (int i = 0; i < inf; ++i) {
		p->army_vector.push_back(factory->createInfantryman(side, army_count));
		p->army_vector[p->army_vector.size() - 1]->set_position(side, p->army_vector.size() - 1, bfield->BF.size(), bfield->BF[0].size());
		bfield->set_position(p->army_vector[p->army_vector.size() - 1]->x, p->army_vector[p->army_vector.size() - 1]->y, p->army_vector[p->army_vector.size() - 1]->return_name());
		++army_count;
	}
	for (int i = 0; i < arc; ++i) {
		p->army_vector.push_back(factory->createArcher(side, army_count));
		p->army_vector[p->army_vector.size() - 1]->set_position(side, p->army_vector.size() - 1, bfield->BF.size(), bfield->BF[0].size());
		bfield->set_position(p->army_vector[p->army_vector.size() - 1]->x, p->army_vector[p->army_vector.size() - 1]->y, p->army_vector[p->army_vector.size() - 1]->return_name());
		++army_count;
	}
	for (int i = 0; i < hm; ++i) {
		p->army_vector.push_back(factory->createHorseman(side, army_count));
		p->army_vector[p->army_vector.size() - 1]->set_position(side, p->army_vector.size() - 1, bfield->BF.size(), bfield->BF[0].size());
		bfield->set_position(p->army_vector[p->army_vector.size() - 1]->x, p->army_vector[p->army_vector.size() - 1]->y, p->army_vector[p->army_vector.size() - 1]->return_name());
		++army_count;
	}
	for (int i = 0; i < ber; ++i) {
		p->army_vector.push_back(factory->createBerserk(side, army_count));
		p->army_vector[p->army_vector.size() - 1]->set_position(side, p->army_vector.size() - 1, bfield->BF.size(), bfield->BF[0].size());
		bfield->set_position(p->army_vector[p->army_vector.size() - 1]->x, p->army_vector[p->army_vector.size() - 1]->y, p->army_vector[p->army_vector.size() - 1]->return_name());
		++army_count;
	}
	p->army_state();
	bfield->print_battlefield();
	Player_army[side - 1] = p;
	delete factory;
}

CGame::~CGame() {
	delete bfield;
	for (int i = 0; i < 1; ++i)
		delete Player_army[i];
}