#include "CGame.h"

Direction ToDir(string dir) {
	if (dir == "Up")
		return UP;
	else if (dir == "Down")
		return DOWN;
	else if (dir == "Left")
		return LEFT;
	else if (dir == "Right")
		return RIGHT;
	else return WRONG;
}

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

CUnit* CGame::choose_unit(int side) {
	int chosen_num = -1;
	cout << "Choose unit:" << endl;
	set<int> alive_units;
	for (int i = 0; i < Player_army[side]->return_size(); ++i) {
		CUnit* cur_unit = Player_army[side]->return_unit(i);
		if (cur_unit->return_state()[2] > 0) { // 3 элемент списка показателей - здоровье
			cout << cur_unit->NUMBER << " " << cur_unit->return_name() << " " << cur_unit->x << " " << cur_unit->y << endl;
			alive_units.insert(cur_unit->NUMBER);
		}
	}
	while (alive_units.find(chosen_num) == alive_units.end()) {
		cin >> chosen_num;
	}
	return Player_army[side]->return_unit(chosen_num);
}

void CGame::player_step(int side, CUnit* current_unit) {
	//make 'for' to unit's current speed
	string dir = "";
	int steps = current_unit->return_state()[6]; // 7-ой элемент списка показателей - скорость
	cout << "You have " << steps << " steps" << endl;
	int counter = 0;
	int first_x = current_unit->x;
	int first_y = current_unit->y;
	while (dir != "Stop" && counter < steps) {
		//check if direction is correct
		bool cor_step = false;
		while (!cor_step && dir != "Stop") {
			cout << "Set a direction for step: Up, Down, Left, Right, Stop" << endl;
			cin >> dir;
			if (dir.size() < 6 && ToDir(dir) != WRONG)
				cor_step = bfield->correct_direction(current_unit->x, current_unit->y, ToDir(dir));
		}
		//make unit step
		string controle_dir = dir; // controle_dir нужен для того, чтобы без введения пользователем Stop остановиться после максимального количества шагов и выполнить поведение при шаге и остановке одновременно
		if (counter == steps - 1)
			controle_dir = "Stop";
		if (dir != "Stop") {
			current_unit->step(ToDir(dir));
			++counter;
			cout << current_unit->return_name() << " made step to " << current_unit->x << " " << current_unit->y << endl;
		}
		if (controle_dir == "Stop") {
			//update unit state after stopping
			string name = current_unit->return_name();
			FieldType cur_field = bfield->BF[current_unit->y][current_unit->x].first;
			current_unit->set_InField(cur_field);
			if (name == "HL" || name == "LL" || name == "BL") {
				CLeader* current_leader = dynamic_cast<CLeader*>(current_unit);
				current_leader->ability_attack_bonus(cur_field);
			}
			current_unit->race_protection_bonus(cur_field);
			bfield->set_position(first_x, first_y, "");
			bfield->set_position(current_unit->x, current_unit->y, name);
		}
	}
	BattlefieldPrinter fp;
	fp.print(bfield);
}

CGame::~CGame() {
	delete bfield;
	for (int i = 0; i < 1; ++i)
		delete Player_army[i];
}