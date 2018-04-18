#include "Test.h"
#include <gtest/gtest.h>

TEST(ProjTest, HItest) {
	CHumanInfantryman h;
	h.createUnit(1, 1);
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

TEST(ProjTest, HAtest) {
	CHumanArcher h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
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
TEST(ProjTest, HHtest) {
	CHumanHorseman h;
	h.createUnit(1, 1);
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
TEST(ProjTest, HBtest) {
	CHumanBerserk h;
	h.createUnit(1, 1);
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
TEST(ProjTest, LItest) {
	CLizardInfantryman h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(WATER);
	vector<int> p = h.return_state();
	vector<int> ptest = { 1, 1, 50, 20, 10, 1, 2, 60, 20 };
	EXPECT_EQ(s, "Lizard Infantryman");
	EXPECT_EQ(p, ptest);
	EXPECT_EQ(h.x, 1);
	EXPECT_EQ(h.y, 0);
	EXPECT_EQ(h.SIDE, 1);
	EXPECT_EQ(h.NUMBER, 1);
	EXPECT_EQ(h.return_name(), "LI");
}
TEST(ProjTest, LAtest) {
	CLizardArcher h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(WATER);
	vector<int> p = h.return_state();
	vector<int> ptest = { 1, 1, 40, 40, 8, 5, 1, 50, 10 };
	EXPECT_EQ(s, "Lizard Archer");
	EXPECT_EQ(p, ptest);
	EXPECT_EQ(h.x, 1);
	EXPECT_EQ(h.y, 0);
	EXPECT_EQ(h.SIDE, 1);
	EXPECT_EQ(h.NUMBER, 1);
	EXPECT_EQ(h.return_name(), "LA");
}
TEST(ProjTest, LHtest) {
	CLizardHorseman h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(WATER);
	vector<int> p = h.return_state();
	vector<int> ptest = { 1, 1, 60, 30, 15, 2, 3, 70, 30 };
	EXPECT_EQ(s, "Lizard Horseman");
	EXPECT_EQ(p, ptest);
	EXPECT_EQ(h.x, 1);
	EXPECT_EQ(h.y, 0);
	EXPECT_EQ(h.SIDE, 1);
	EXPECT_EQ(h.NUMBER, 1);
	EXPECT_EQ(h.return_name(), "LH");
}
TEST(ProjTest, LBtest) {
	CLizardBerserk h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(WATER);
	vector<int> p = h.return_state();
	vector<int> ptest = { 1, 1, 90, 25, 15, 2, 2, 50, 30 };
	EXPECT_EQ(s, "Lizard Berserk");
	EXPECT_EQ(p, ptest);
	EXPECT_EQ(h.x, 1);
	EXPECT_EQ(h.y, 0);
	EXPECT_EQ(h.SIDE, 1);
	EXPECT_EQ(h.NUMBER, 1);
	EXPECT_EQ(h.return_name(), "LB");
}
TEST(ProjTest, BItest) {
	CBeastInfantryman h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FIELD);
	vector<int> p = h.return_state();
	vector<int> ptest = { 1, 1, 50, 20, 10, 1, 2, 60, 20 };
	EXPECT_EQ(s, "Beast Infantryman");
	EXPECT_EQ(p, ptest);
	EXPECT_EQ(h.x, 1);
	EXPECT_EQ(h.y, 0);
	EXPECT_EQ(h.SIDE, 1);
	EXPECT_EQ(h.NUMBER, 1);
	EXPECT_EQ(h.return_name(), "BI");
}
TEST(ProjTest, BAtest) {
	CBeastArcher h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FIELD);
	vector<int> p = h.return_state();
	vector<int> ptest = { 1, 1, 40, 40, 8, 5, 1, 50, 10 };
	EXPECT_EQ(s, "Beast Archer");
	EXPECT_EQ(p, ptest);
	EXPECT_EQ(h.x, 1);
	EXPECT_EQ(h.y, 0);
	EXPECT_EQ(h.SIDE, 1);
	EXPECT_EQ(h.NUMBER, 1);
	EXPECT_EQ(h.return_name(), "BA");
}
TEST(ProjTest, BHtest) {
	CBeastHorseman h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FIELD);
	vector<int> p = h.return_state();
	vector<int> ptest = { 1, 1, 60, 30, 15, 2, 3, 70, 30 };
	EXPECT_EQ(s, "Beast Horseman");
	EXPECT_EQ(p, ptest);
	EXPECT_EQ(h.x, 1);
	EXPECT_EQ(h.y, 0);
	EXPECT_EQ(h.SIDE, 1);
	EXPECT_EQ(h.NUMBER, 1);
	EXPECT_EQ(h.return_name(), "BH");
}
TEST(ProjTest, BBtest) {
	CBeastBerserk h;
	h.createUnit(1, 1);
	h.set_position(h.SIDE, h.NUMBER, 1, 1);
	string s = h.info();
	h.race_protection_bonus(FIELD);
	vector<int> p = h.return_state();
	vector<int> ptest = { 1, 1, 90, 25, 15, 2, 2, 50, 30 };
	EXPECT_EQ(s, "Beast Berserk");
	EXPECT_EQ(p, ptest);
	EXPECT_EQ(h.x, 1);
	EXPECT_EQ(h.y, 0);
	EXPECT_EQ(h.SIDE, 1);
	EXPECT_EQ(h.NUMBER, 1);
	EXPECT_EQ(h.return_name(), "BB");
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
	EXPECT_EQ(s, "Your leader of human race has running ability, is armred with sword and light armor and rides the horse");
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
