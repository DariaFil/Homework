#include "CGame.h"

VarriorType ToVarrior(string varr) {
	if (varr == "Infantryman")
		return INFANTRYMAN;
	else if (varr == "Archer")
		return ARCHER;
	else if (varr == "Horseman")
		return HORSEMAN;
	else if (varr == "Berserk")
		return BERSERK;
	else return WRONGTYPE;
}
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
	varriors_number.resize(2);
	player_reward.resize(2);
}
void CGame::createBattleField(int n, int m) {
	bfield = new CBattleField(n, m);
}

void CGame::createInf(CArmy* p, int amount, int side, CArmyFactory* factory, int& army_count) {
	for (int i = 0; i < amount; ++i) {
		CUnit* cur = factory->createInfantryman(side, army_count);
		p->push_unit(cur);
		cur->set_position(side, p->return_size() - 1, bfield->BF.size(), bfield->BF[0].size());
		cur->race_protection_bonus(bfield->BF[cur->y][cur->x].first);
		bfield->set_position(cur->x, cur->y, cur->return_name());
		++army_count;
	}
}
void CGame::createArc(CArmy* p, int amount, int side, CArmyFactory* factory, int& army_count) {
	for (int i = 0; i < amount; ++i) {
		CUnit* cur = factory->createArcher(side, army_count);
		p->push_unit(cur);
		cur->set_position(side, p->return_size() - 1, bfield->BF.size(), bfield->BF[0].size());
		cur->race_protection_bonus(bfield->BF[cur->y][cur->x].first);
		bfield->set_position(cur->x, cur->y, cur->return_name()); 
		++army_count;
	}
}
void CGame::createHor(CArmy* p, int amount, int side, CArmyFactory* factory, int& army_count) {
	for (int i = 0; i < amount; ++i) {
		CUnit* cur = factory->createHorseman(side, army_count);
		p->push_unit(cur);
		cur->set_position(side, p->return_size() - 1, bfield->BF.size(), bfield->BF[0].size());
		cur->race_protection_bonus(bfield->BF[cur->y][cur->x].first);
		bfield->set_position(cur->x, cur->y, cur->return_name()); 
		++army_count;
	}
}
void CGame::createBer(CArmy* p, int amount, int side, CArmyFactory* factory, int& army_count) {
	for (int i = 0; i < amount; ++i) {
		CUnit* cur = factory->createBerserk(side, army_count);
		p->push_unit(cur);
		cur->set_position(side, p->return_size() - 1, bfield->BF.size(), bfield->BF[0].size());
		cur->race_protection_bonus(bfield->BF[cur->y][cur->x].first);
		bfield->set_position(cur->x, cur->y, cur->return_name()); 
		++army_count;
	}
}

void CGame::createArmy(int inf, int arc, int hm, int ber, int side) {
	Player_army[side - 1] = new CArmy;
	varriors_number[side - 1] = inf + arc + hm + ber;
	player_reward[side - 1] = 0;

	CDirector dir;
	CArmyLeaderBuilder l_builder;
	CLeader* main_unit = dir.ConstructLeader(l_builder, side);
	int army_count = 0;
	main_unit->set_position(side, army_count++, bfield->BF.size(), bfield->BF[0].size());
	main_unit->race_protection_bonus(bfield->BF[main_unit->y][main_unit->x].first);
	main_unit->ability_attack_bonus(bfield->BF[main_unit->y][main_unit->x].first);
	bfield->set_position(main_unit->x, main_unit->y, main_unit->return_name());

	RaceType race = main_unit->get_race();
	CArmyFactory* factory = new CArmyFactory(race);
	Player_army[side - 1]->push_unit(main_unit);

	createInf(Player_army[side - 1], inf, side, factory, army_count);
	createArc(Player_army[side - 1], arc, side, factory, army_count);
	createHor(Player_army[side - 1], hm, side, factory, army_count);
	createBer(Player_army[side - 1], ber, side, factory, army_count);
	BattlefieldPrinter fp;
	fp.print(bfield);
	delete factory;
}

void CGame::player_step(int side) {
	CUnit* current_unit = Player_army[side]->choose_unit();
	string dir = "";
	int steps = current_unit->return_state()[6];
	cout << "You have " << steps << " steps" << endl;
	int counter = 0;
	int first_x = current_unit->x;
	int first_y = current_unit->y;
	while (dir != "Stop" && counter < steps) {
		bool cor_step = false;
		while (!cor_step && dir != "Stop") {
			cout << "Set a direction for step: Up, Down, Left, Right, Stop" << endl;
			cin >> dir;
			if (dir.size() < 6 && ToDir(dir) != WRONG)
				cor_step = bfield->correct_direction(current_unit->x, current_unit->y, ToDir(dir));
		}
		string controle_dir = dir;
		if (counter == steps - 1)
			controle_dir = "Stop";
		if (dir != "Stop") {
			current_unit->step(ToDir(dir));
			++counter;
			cout << current_unit->return_name() << " made step to " << current_unit->x << " " << current_unit->y << endl;
		}
		if (controle_dir == "Stop") {
			string name = current_unit->return_name();
			FieldType cur_field = bfield->BF[current_unit->y][current_unit->x].first;
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
void CGame::player_punch(int side) {
	CUnit* current_unit = Player_army[side]->choose_unit();
	int radius = current_unit->return_state()[5];
	cout << "Your radius of damage: " << radius << endl;
	set<int> alive_enemies;
	vector<int> enemies = Player_army[(side + 1) % 2]->distances_to_units(current_unit->x, current_unit->y);
	cout << "Choose enemy:" << endl;
	int count_enemies = 0;
	for (int i = 0; i < enemies.size(); ++i)
		if (enemies[i] <= radius) {
			CUnit* enemy = Player_army[(side + 1) % 2]->return_unit(i);
			alive_enemies.insert(enemy->NUMBER);
			cout << enemy->NUMBER << " " << enemy->return_name() << " " << enemy->x << " " << enemy->y << " " << enemies[i] << endl;
			++count_enemies;
		}
	if (count_enemies == 0) {
		cout << "There are no enemies available for punch for this unit" << endl;;
		return;
	}
	string enemy_num = "-1";
	while (!right_cin(enemy_num, 0, Player_army[(side + 1) % 2]->return_size()) || alive_enemies.find(stoi(enemy_num)) == alive_enemies.end()) {
		cin >> enemy_num;
	}
	int at_speed = current_unit->return_state()[3];
	int at_forse = current_unit->return_state()[4];
	int old_rew = player_reward[side];
	CUnit* cur_enemy = Player_army[(side + 1) % 2]->return_unit(stoi(enemy_num));
	player_reward[side] += cur_enemy->punched(at_forse, at_speed);
	if (old_rew != player_reward[side]) {
		bfield->set_position(cur_enemy->x, cur_enemy->y, "");
		BattlefieldPrinter printer;
		printer.print(bfield);
	}
}

void CGame::choose_unit_to_buy(int side) {
	if (player_reward[side] == 0) {
		cout << "Not enough money to buy any unit" << endl;
		return;
	}
	RaceType race = Player_army[side]->return_race();
	CArmyFactory* factory = new CArmyFactory(race);

	cout << "Your reward: " << player_reward[side] << endl;
	string type = "";
	while (ToVarrior(type) == WRONGTYPE) {
		cout << "Choose type of unit to buy: Infantryman, Archer, Horseman, Berserk" << endl;
		cin >> type;
	}
	VarriorType vtype = ToVarrior(type);
	reviveUnit(Player_army[side], side, vtype, factory);
	delete factory;
}
void CGame::reviveUnit(CArmy* army, int side, VarriorType type, CArmyFactory* factory) {
	CRevivalFactory revFact(factory, player_reward[side]);
	CUnit* unit;
	switch (type) {
	case INFANTRYMAN:
		if (player_reward[side] < 20) {
			cout << "Not enough money to buy this unit" << endl;
			return;
		}
		else
			unit = revFact.createInfantryman(side, varriors_number[side] + 1);
		break;
	case ARCHER:
		if (player_reward[side] < 10) {
			cout << "Not enough money to buy this unit" << endl;
			return;
		}
		else
			unit = revFact.createArcher(side, varriors_number[side] + 1);
		break;
	case HORSEMAN:
		if (player_reward[side] < 30) {
			cout << "Not enough money to buy this unit" << endl;
			return;
		}
		else
			unit = revFact.createHorseman(side, varriors_number[side] + 1);
		break;
	case BERSERK:
		if (player_reward[side] < 30) {
			cout << "Not enough money to buy this unit" << endl;
			return;
		}
		else
			unit = revFact.createBerserk(side, varriors_number[side] + 1);
		break;
	}
	player_reward[side] = revFact.update_sum();
	army->push_unit(unit);
	++varriors_number[side];
	int player_side = 0;
	if (side == 2)
		player_side = bfield->BF.size() - 1;
	int i = 0;
	while (bfield->BF[player_side][varriors_number[side] + i].second != "") {
		if (i < bfield->BF.size())
			++i;
		else {
			i = 0;
			++player_side;
		}
	}
	army->return_unit(army->return_size() - 1)->set_position(0, 0, player_side, i);
	bfield->set_position(i, player_side, army->return_unit(army->return_size() - 1)->return_name());
}
bool CGame::check_end() {
	if (Player_army[0]->is_dead() || Player_army[1]->is_dead())
		return true;
	else
		return false;
}

void CGame::print_item(int side) {
	string item;
	cout << "What do you want to see? Army, Unit" << endl;
	while (item != "Army" && item != "Unit") {
		cin >> item;
		if (item == "Army") {
			ArmyPrinter* printer = new ArmyPrinter;
			printer->print(Player_army[side]);
			delete printer;
		}
		else if (item == "Unit") {
			CUnit* unit = Player_army[side]->choose_unit();
			UnitPrinter* printer = new UnitPrinter;
			printer->print(unit);
			delete printer;
		}
	}
}
CGame::~CGame() {
	delete bfield;
	for (int i = 0; i < 1; ++i)
		delete Player_army[i];
}
