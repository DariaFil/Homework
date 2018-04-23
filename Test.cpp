#include <gtest/gtest.h>
#include "CGame.h"

TEST(ProjTest, army_test) {
	CArmy army;
	CInfantryman* h = new CInfantryman;
	h->createUnit(1, 0);
	h->set_race(HUMAN);
	h->set_position(h->SIDE, h->NUMBER, 1, 1);
	army.push_unit(h);
	EXPECT_EQ(army.return_unit(0), h);
	EXPECT_EQ(army.return_size(), 1);
	EXPECT_EQ(army.return_race(), HUMAN);
	vector<int> dist_control;
	dist_control.push_back(5);
	EXPECT_EQ(army.distances_to_units(2, 3), dist_control);
	CUnit* h1 = army.choose_unit();
	EXPECT_EQ(h1, h);
	EXPECT_EQ(army.is_dead(), false);
}
void test_punched() {
	CInfantryman h;
	h.createUnit(1, 1);
	h.set_race(HUMAN);
	h.punched(50, 40);
	EXPECT_EQ(h.return_state()[2], 5);
	EXPECT_EQ(h.Alive, true);
	h.punched(5, 50);
	EXPECT_EQ(h.Alive, false);
}
TEST(ProjTest, race_test) {
	HumanRace h;
	int prot_b1 = h.add_protection_bonus(FOREST, false);
	int prot_b2 = h.add_protection_bonus(FIELD, true);
	string info = h.race_info();
	string symbol = h.return_race_name();
	EXPECT_EQ(prot_b1, 10);
	EXPECT_EQ(prot_b2, -10);
	EXPECT_EQ(info, "Human");
	EXPECT_EQ(symbol, "H");
}
TEST(ProjTest, step_test) {
	CInfantryman h;
	h.createUnit(1, 1);
	h.set_race(HUMAN);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	h.step(DOWN);
	EXPECT_EQ(h.y, 1);
	h.step(UP);
	EXPECT_EQ(h.y, 0);
	h.step(RIGHT);
	EXPECT_EQ(h.x, 2);
	h.step(LEFT);
	EXPECT_EQ(h.x, 1);
}
TEST(ProjTest, damage_test) {
	CInfantryman i;
	i.createUnit(1, 1);
	i.set_race(HUMAN);
	int dam = i.damage(10, 30);
	EXPECT_EQ(dam, 8);
	CArcher a;
	a.createUnit(1, 1);
	a.set_race(HUMAN);
	dam = a.damage(10, 30);
	EXPECT_EQ(dam, 9);
	CHorseman h;
	h.createUnit(1, 1);
	h.set_race(HUMAN);
	dam = h.damage(10, 30);
	EXPECT_EQ(dam, 7);
	CBerserk b;
	b.createUnit(1, 1);
	b.set_race(HUMAN);
	dam = b.damage(10, 30);
	EXPECT_EQ(dam, 9);
}
TEST(ProjTest, dist_test) {
	CInfantryman i;
	i.createUnit(1, 1);
	i.set_position(i.SIDE, i.NUMBER, 1, 1);
	i.set_race(HUMAN);
	int dist = i.dist(2, 4);
	EXPECT_EQ(dist, 5);
	dist = i.dist(0, 0);
	EXPECT_EQ(dist, 1);
	dist = i.dist(20, 21);
	EXPECT_EQ(dist, 40);
	dist = i.dist(42, 3);
	EXPECT_EQ(dist, 44);
}

TEST(ProjTest, Infantryman_test) {
	CInfantryman h;
	h.createUnit(1, 1);
	h.set_race(HUMAN);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FOREST);
	vector<int> p = h.return_state();
	vector<int> ptest = { 1, 1, 50, 20, 10, 1, 2, 60, 20 };
	EXPECT_EQ(s, "Human Infantryman");
	EXPECT_EQ(p, ptest);
	EXPECT_EQ(h.x, 1);
	EXPECT_EQ(h.y, 0);
	EXPECT_EQ(h.SIDE, 1);
	EXPECT_EQ(h.NUMBER, 1);
	EXPECT_EQ(h.return_name(), "HI");
}

TEST(ProjTest, Archer_test) {
	CArcher h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	h.set_race(HUMAN);
	string s = h.info();
	h.race_protection_bonus(FOREST);
	vector<int> p = h.return_state();
	vector<int> ptest = { 1, 1, 40, 40, 8, 5, 1, 50, 10 };
	EXPECT_EQ(s, "Human Archer");
	EXPECT_EQ(p, ptest);
	EXPECT_EQ(h.x, 1);
	EXPECT_EQ(h.y, 0);
	EXPECT_EQ(h.SIDE, 1);
	EXPECT_EQ(h.NUMBER, 1);
	EXPECT_EQ(h.return_name(), "HA");
}
TEST(ProjTest, Horseman_test) {
	CHorseman h;
	h.createUnit(1, 1);
	h.set_race(HUMAN);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FOREST);
	vector<int> p = h.return_state();
	vector<int> ptest = { 1, 1, 60, 30, 15, 2, 3, 70, 30 };
	EXPECT_EQ(s, "Human Horseman");
	EXPECT_EQ(p, ptest);
	EXPECT_EQ(h.x, 1);
	EXPECT_EQ(h.y, 0);
	EXPECT_EQ(h.SIDE, 1);
	EXPECT_EQ(h.NUMBER, 1);
	EXPECT_EQ(h.return_name(), "HH");
}
TEST(ProjTest, Berserk_test) {
	CBerserk h;
	h.createUnit(1, 1);
	h.set_race(HUMAN);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FOREST);
	vector<int> p = h.return_state();
	vector<int> ptest = { 1, 1, 90, 25, 15, 2, 2, 50, 30 };
	EXPECT_EQ(s, "Human Berserk");
	EXPECT_EQ(p, ptest);
	EXPECT_EQ(h.x, 1);
	EXPECT_EQ(h.y, 0);
	EXPECT_EQ(h.SIDE, 1);
	EXPECT_EQ(h.NUMBER, 1);
	EXPECT_EQ(h.return_name(), "HB");
}
TEST(ProjTest, LEADERtest) {
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
	vector<int> p = h.return_state();
	vector<int> ptest = { 1, 1, 100, 40, 40, 3, 4, 70, 80 };
	EXPECT_EQ(s, "Your leader of Human race has running ability, is armred with sword and light armor and rides the horse");
	EXPECT_EQ(p, ptest);
	EXPECT_EQ(h.x, 1);
	EXPECT_EQ(h.y, 0);
	EXPECT_EQ(h.SIDE, 1);
	EXPECT_EQ(h.NUMBER, 1);
	EXPECT_EQ(h.return_name(), "HL");
}
void testLeaderBuilder() {
	CDirector dir;
	CArmyLeaderBuilder l_builder;
	CLeader* main_unit = dir.ConstructLeader(l_builder, 1);
	main_unit->info();
	main_unit->return_state();
	delete main_unit;
}
TEST(ProjTest, BATTLEFIELDtest) {
	CBattleField b(5, 5);
	b.set_position(1, 2, "HH");
	EXPECT_EQ(b.BF[2][1].second, "HH");
}
TEST(ProjTest, factory_test) {
	CArmyFactory* fact = new CArmyFactory(HUMAN);
	CUnit* inf = fact->createInfantryman(1, 0);
	CUnit* arc = fact->createArcher(1, 1);
	CUnit* hor = fact->createHorseman(1, 2);
	CUnit* ber = fact->createBerserk(1, 3);
	EXPECT_EQ(inf->get_race(), HUMAN);
	EXPECT_EQ(inf->return_name(), "HI");
	EXPECT_EQ(arc->get_race(), HUMAN);
	EXPECT_EQ(arc->return_name(), "HA");
	EXPECT_EQ(hor->get_race(), HUMAN);
	EXPECT_EQ(hor->return_name(), "HH");
	EXPECT_EQ(ber->get_race(), HUMAN);
	EXPECT_EQ(ber->return_name(), "HB");
	delete fact;
	delete inf;
	delete arc;
	delete hor;
	delete ber;
}
TEST(ProjTest, revival_factory_test) {
	CArmyFactory* fact = new CArmyFactory(HUMAN);
	CRevivalFactory* rev = new CRevivalFactory(fact, 90);
	CUnit* inf = rev->createInfantryman(1, 0);
	int sum = rev->update_sum();
	EXPECT_EQ(sum, 70);
	CUnit* arc = rev->createArcher(1, 1);
	sum = rev->update_sum();
	EXPECT_EQ(sum, 60);
	CUnit* hor = rev->createHorseman(1, 2);
	sum = rev->update_sum();
	EXPECT_EQ(sum, 30);
	CUnit* ber = rev->createBerserk(1, 3);
	sum = rev->update_sum();
	EXPECT_EQ(sum, 0);
	EXPECT_EQ(inf->get_race(), HUMAN);
	EXPECT_EQ(inf->return_name(), "HI");
	EXPECT_EQ(arc->get_race(), HUMAN);
	EXPECT_EQ(arc->return_name(), "HA");
	EXPECT_EQ(hor->get_race(), HUMAN);
	EXPECT_EQ(hor->return_name(), "HH");
	EXPECT_EQ(ber->get_race(), HUMAN);
	EXPECT_EQ(ber->return_name(), "HB");
	delete fact;
	delete rev;
	delete inf;
	delete arc;
	delete hor;
	delete ber;
}
void testGame() {
	CGame g;
	g.createBattleField(5, 5);
	g.createArmy(1, 1, 1, 1, 1);
}

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
	testLeaderBuilder();
	testGame();
}
