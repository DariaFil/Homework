#include <gtest/gtest.h>
#include "CGame.h"

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
	vector<int> ptest = { 1, 1, 100, 30, 40, 3, 4, 70, 80 };
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
