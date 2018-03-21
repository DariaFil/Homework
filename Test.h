#ifndef TESTS
#define TESTS

#include "CGame.h"

void testHI() {
	CHumanInfantryman h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FOREST);
	vector<int> p = h.print_state();
	vector<int> ptest = { 1, 1, 50, 20, 10, 1, 2, 60, 20 };
	if (s == "Human Infantryman")
		cout << "HI info done" << endl;
	else
		cout << "HI info failure" << endl;
	if (p == ptest)
		cout << "HI state & bonus done" << endl;
	else
		cout << "HI state or bonus failure" << endl;
	if (h.x == 1)
		cout << "HI X done" << endl;
	else
		cout << "HI X failure" << endl;
	if (h.y == 0)
		cout << "HI Y done" << endl;
	else
		cout << "HI Y failure" << endl;
	if (h.SIDE == 1)
		cout << "HI Side done" << endl;
	else
		cout << "HI Side failure" << endl;
	if (h.NUMBER == 1)
		cout << "HI Number done" << endl;
	else
		cout << "HI  Number failure" << endl;
	if (h.return_name() == "HI")
		cout << "HI Return name done" << endl;
	else
		cout << "HI Return name failure" << endl;
}
void testHA() {
	CHumanArcher h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FOREST);
	vector<int> p = h.print_state();
	vector<int> ptest = { 1, 1, 40, 40, 8, 5, 1, 50, 10 };
	if (s == "Human Archer")
		cout << "HA info done" << endl;
	else
		cout << "HA info failure" << endl;
	if (p == ptest)
		cout << "HA state & bonus done" << endl;
	else
		cout << "HA state or bonus failure" << endl;
	if (h.x == 1)
		cout << "HA X done" << endl;
	else
		cout << "HA X failure" << endl;
	if (h.y == 0)
		cout << "HA Y done" << endl;
	else
		cout << "HA Y failure" << endl;
	if (h.SIDE == 1)
		cout << "HA Side done" << endl;
	else
		cout << "HA Side failure" << endl;
	if (h.NUMBER == 1)
		cout << "HA Number done" << endl;
	else
		cout << "HA Number failure" << endl;
	if (h.return_name() == "HA")
		cout << "HI Return name done" << endl;
	else
		cout << "HA Return name failure" << endl;
}
void testHH() {
	CHumanHorseman h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FOREST);
	vector<int> p = h.print_state();
	vector<int> ptest = { 1, 1, 60, 30, 15, 2, 3, 70, 30 };
	if (s == "Human Horseman")
		cout << "HH info done" << endl;
	else
		cout << "HH info failure" << endl;
	if (p == ptest)
		cout << "HH state & bonus done" << endl;
	else
		cout << "HH state or bonus failure" << endl;
	if (h.x == 1)
		cout << "HH X done" << endl;
	else
		cout << "HH X failure" << endl;
	if (h.y == 0)
		cout << "HH Y done" << endl;
	else
		cout << "HH Y failure" << endl;
	if (h.SIDE == 1)
		cout << "HH Side done" << endl;
	else
		cout << "HH Side failure" << endl;
	if (h.NUMBER == 1)
		cout << "HH Number done" << endl;
	else
		cout << "HH  Number failure" << endl;
	if (h.return_name() == "HH")
		cout << "HH Return name done" << endl;
	else
		cout << "HH Return name failure" << endl;
}
void testHB() {
	CHumanBerserk h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FOREST);
	vector<int> p = h.print_state();
	vector<int> ptest = { 1, 1, 90, 25, 15, 2, 2, 50, 30 };
	if (s == "Human Berserk")
		cout << "HB info done" << endl;
	else
		cout << "HB info failure" << endl;
	if (p == ptest)
		cout << "HB state & bonus done" << endl;
	else
		cout << "HB state or bonus failure" << endl;
	if (h.x == 1)
		cout << "HB X done" << endl;
	else
		cout << "HB X failure" << endl;
	if (h.y == 0)
		cout << "HB Y done" << endl;
	else
		cout << "HB Y failure" << endl;
	if (h.SIDE == 1)
		cout << "HB Side done" << endl;
	else
		cout << "HB Side failure" << endl;
	if (h.NUMBER == 1)
		cout << "HB Number done" << endl;
	else
		cout << "HB  Number failure" << endl;
	if (h.return_name() == "HB")
		cout << "HB Return name done" << endl;
	else
		cout << "HB Return name failure" << endl;
}
void testLI() {
	CLizardInfantryman h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(WATER);
	vector<int> p = h.print_state();
	vector<int> ptest = { 1, 1, 50, 20, 10, 1, 2, 60, 20 };
	if (s == "Lizard Infantryman")
		cout << "LI info done" << endl;
	else
		cout << "LI info failure" << endl;
	if (p == ptest)
		cout << "LI state & bonus done" << endl;
	else
		cout << "LI state or bonus failure" << endl;
	if (h.x == 1)
		cout << "LI X done" << endl;
	else
		cout << "LI X failure" << endl;
	if (h.y == 0)
		cout << "LI Y done" << endl;
	else
		cout << "LI Y failure" << endl;
	if (h.SIDE == 1)
		cout << "LI Side done" << endl;
	else
		cout << "LI Side failure" << endl;
	if (h.NUMBER == 1)
		cout << "LI Number done" << endl;
	else
		cout << "LI  Number failure" << endl;
	if (h.return_name() == "LI")
		cout << "LI Return name done" << endl;
	else
		cout << "LI Return name failure" << endl;
}
void testLA() {
	CLizardArcher h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(WATER);
	vector<int> p = h.print_state();
	vector<int> ptest = { 1, 1, 40, 40, 8, 5, 1, 50, 10 };
	if (s == "Lizard Archer")
		cout << "LA info done" << endl;
	else
		cout << "LA info failure" << endl;
	if (p == ptest)
		cout << "LA state & bonus done" << endl;
	else
		cout << "LA state or bonus failure" << endl;
	if (h.x == 1)
		cout << "LA X done" << endl;
	else
		cout << "LA X failure" << endl;
	if (h.y == 0)
		cout << "LA Y done" << endl;
	else
		cout << "LA Y failure" << endl;
	if (h.SIDE == 1)
		cout << "LA Side done" << endl;
	else
		cout << "LA Side failure" << endl;
	if (h.NUMBER == 1)
		cout << "LA Number done" << endl;
	else
		cout << "LA Number failure" << endl;
	if (h.return_name() == "LA")
		cout << "LA Return name done" << endl;
	else
		cout << "LA Return name failure" << endl;
}
void testLH() {
	CLizardHorseman h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(WATER);
	vector<int> p = h.print_state();
	vector<int> ptest = { 1, 1, 60, 30, 15, 2, 3, 70, 30 };
	if (s == "Lizard Horseman")
		cout << "LH info done" << endl;
	else
		cout << "LH info failure" << endl;
	if (p == ptest)
		cout << "LH state & bonus done" << endl;
	else
		cout << "LH state or bonus failure" << endl;
	if (h.x == 1)
		cout << "LH X done" << endl;
	else
		cout << "LH X failure" << endl;
	if (h.y == 0)
		cout << "LH Y done" << endl;
	else
		cout << "LH Y failure" << endl;
	if (h.SIDE == 1)
		cout << "LH Side done" << endl;
	else
		cout << "LH Side failure" << endl;
	if (h.NUMBER == 1)
		cout << "LH Number done" << endl;
	else
		cout << "LH  Number failure" << endl;
	if (h.return_name() == "LH")
		cout << "LH Return name done" << endl;
	else
		cout << "LH Return name failure" << endl;
}
void testLB() {
	CLizardBerserk h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(WATER);
	vector<int> p = h.print_state();
	vector<int> ptest = { 1, 1, 90, 25, 15, 2, 2, 50, 30 };
	if (s == "Lizard Berserk")
		cout << "LB info done" << endl;
	else
		cout << "LB info failure" << endl;
	if (p == ptest)
		cout << "LB state & bonus done" << endl;
	else
		cout << "LB state or bonus failure" << endl;
	if (h.x == 1)
		cout << "LB X done" << endl;
	else
		cout << "LB X failure" << endl;
	if (h.y == 0)
		cout << "LB Y done" << endl;
	else
		cout << "LB Y failure" << endl;
	if (h.SIDE == 1)
		cout << "LB Side done" << endl;
	else
		cout << "LB Side failure" << endl;
	if (h.NUMBER == 1)
		cout << "LB Number done" << endl;
	else
		cout << "LB  Number failure" << endl;
	if (h.return_name() == "LB")
		cout << "LB Return name done" << endl;
	else
		cout << "LB Return name failure" << endl;
}
void testBI() {
	CBeastInfantryman h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FIELD);
	vector<int> p = h.print_state();
	vector<int> ptest = { 1, 1, 50, 20, 10, 1, 2, 60, 20 };
	if (s == "Beast Infantryman")
		cout << "BI info done" << endl;
	else
		cout << "BI info failure" << endl;
	if (p == ptest)
		cout << "BI state & bonus done" << endl;
	else
		cout << "BI state or bonus failure" << endl;
	if (h.x == 1)
		cout << "BI X done" << endl;
	else
		cout << "BI X failure" << endl;
	if (h.y == 0)
		cout << "BI Y done" << endl;
	else
		cout << "BI Y failure" << endl;
	if (h.SIDE == 1)
		cout << "BI Side done" << endl;
	else
		cout << "BI Side failure" << endl;
	if (h.NUMBER == 1)
		cout << "BI Number done" << endl;
	else
		cout << "BI  Number failure" << endl;
	if (h.return_name() == "BI")
		cout << "BI Return name done" << endl;
	else
		cout << "BI Return name failure" << endl;
}
void testBA() {
	CBeastArcher h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FIELD);
	vector<int> p = h.print_state();
	vector<int> ptest = { 1, 1, 40, 40, 8, 5, 1, 50, 10 };
	if (s == "Beast Archer")
		cout << "BA info done" << endl;
	else
		cout << "BA info failure" << endl;
	if (p == ptest)
		cout << "BA state & bonus done" << endl;
	else
		cout << "BA state or bonus failure" << endl;
	if (h.x == 1)
		cout << "BA X done" << endl;
	else
		cout << "BA X failure" << endl;
	if (h.y == 0)
		cout << "BA Y done" << endl;
	else
		cout << "BA Y failure" << endl;
	if (h.SIDE == 1)
		cout << "BA Side done" << endl;
	else
		cout << "BA Side failure" << endl;
	if (h.NUMBER == 1)
		cout << "BA Number done" << endl;
	else
		cout << "BA  Number failure" << endl;
	if (h.return_name() == "BA")
		cout << "BA Return name done" << endl;
	else
		cout << "BA Return name failure" << endl;
}
void testBH() {
	CBeastHorseman h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FIELD);
	vector<int> p = h.print_state();
	vector<int> ptest = { 1, 1, 60, 30, 15, 2, 3, 70, 30 };
	if (s == "Beast Horseman")
		cout << "BH info done" << endl;
	else
		cout << "BH info failure" << endl;
	if (p == ptest)
		cout << "BH state & bonus done" << endl;
	else
		cout << "BH state or bonus failure" << endl;
	if (h.x == 1)
		cout << "BH X done" << endl;
	else
		cout << "BH X failure" << endl;
	if (h.y == 0)
		cout << "BH Y done" << endl;
	else
		cout << "BH Y failure" << endl;
	if (h.SIDE == 1)
		cout << "BH Side done" << endl;
	else
		cout << "BH Side failure" << endl;
	if (h.NUMBER == 1)
		cout << "BH Number done" << endl;
	else
		cout << "BH  Number failure" << endl;
	if (h.return_name() == "BH")
		cout << "BH Return name done" << endl;
	else
		cout << "BH Return name failure" << endl;
}
void testBB() {
	CBeastBerserk h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FIELD);
	vector<int> p = h.print_state();
	vector<int> ptest = { 1, 1, 90, 25, 15, 2, 2, 50, 30 };
	if (s == "Beast Berserk")
		cout << "BB info done" << endl;
	else
		cout << "BB info failure" << endl;
	if (p == ptest)
		cout << "BB state & bonus done" << endl;
	else
		cout << "BB state or bonus failure" << endl;
	if (h.x == 1)
		cout << "BB X done" << endl;
	else
		cout << "BB X failure" << endl;
	if (h.y == 0)
		cout << "BB Y done" << endl;
	else
		cout << "BB Y failure" << endl;
	if (h.SIDE == 1)
		cout << "BB Side done" << endl;
	else
		cout << "BB Side failure" << endl;
	if (h.NUMBER == 1)
		cout << "BB Number done" << endl;
	else
		cout << "BB  Number failure" << endl;
	if (h.return_name() == "BB")
		cout << "BB Return name done" << endl;
	else
		cout << "BB Return name failure" << endl;
}
void testLeader() {
	CLeader h;
	h.createUnit(1, 1);
	h.set_race(HUMAN);
	h.set_ability(RUNNING);
	h.set_weapon(SWORD);
	h.set_armor(LIGHT);
	h.set_mount(HORSE);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FOREST);
	h.ability_attack_bonus(FIELD);
	vector<int> p = h.print_state();
	vector<int> ptest = { 1, 1, 100, 30, 40, 3, 4, 70, 80 };
	if (s == "Your leader of human race has running ability, is armred with sword and light armor and rides the horse")
		cout << "Leader info done" << endl;
	else
		cout << "Leader info failure" << endl;
	if (p == ptest)
		cout << "Leader state & bonuses done" << endl;
	else
		cout << "Leader state or bonuses failure" << endl;
	if (h.x == 1)
		cout << "Leader X done" << endl;
	else
		cout << "Leader X failure" << endl;
	if (h.y == 0)
		cout << "Leader Y done" << endl;
	else
		cout << "Leader Y failure" << endl;
	if (h.SIDE == 1)
		cout << "Leader Side done" << endl;
	else
		cout << "Leader Side failure" << endl;
	if (h.NUMBER == 1)
		cout << "Leader Number done" << endl;
	else
		cout << "Leader  Number failure" << endl;
	if (h.return_name() == "HL")
		cout << "Leader Return name done" << endl;
	else
		cout << "Leader Return name failure" << endl;
}
void testLeaderBuilder() {
	CDirector dir;
	CArmyLeaderBuilder l_builder;
	CLeader* main_unit = dir.ConstructLeader(l_builder, 1);
	main_unit->info();
	main_unit->print_state();
	delete main_unit;
}
void testBattlefield() {
	CBattleField b(5, 5);
	b.set_position(1, 2, "HH");
	if (b.BF[2][1].second == "HH")
		cout << "Battlefield Position done" << endl;
	else
		cout << "Battlefield Position failure" << endl;
	b.print_battlefield();
}
void testGame() {
	CGame g;
	g.createBattleField(5, 5);
	g.createArmy(1, 1, 1, 1, 1);
}

void all_tests() {
	testHI();
	testHA();
	testHH();
	testHB();
	testLI();
	testLA();
	testLH();
	testLB();
	testBI();
	testBA();
	testBH();
	testBB();
	testLeader();
	testLeaderBuilder();
	testBattlefield();
	testGame();
}
#endif