#ifndef CLEADER
#define CLEADER

#include "CUnit.h"

using namespace std;

enum RaceType { HUMAN, LIZARD, BEAST };
enum AbilityType { RUNNING, SWIMMING, FLYING };
enum WeaponType { SWORD, LANCE, BOW, MAGIC };
enum ArmorType { LIGHT, MEDIUM, HARD };
enum MountType { HORSE, LION, GRIFFIN, NONE };

class Leader : public Unit {
public:
	Leader();
	~Leader();

	void createUnit(int side, int number);

	void set_race(const RaceType& m_race);
	void set_ability(const AbilityType& m_abil);
	void set_weapon(const WeaponType& m_weapon);
	void set_armor(const ArmorType& m_armor);
	void set_mount(const MountType& m_mount);

	RaceType get_race();

	void info();

	string return_name();
	void ability_attack_bonus(const string& field_type);
	void race_protection_bonus(const string& field_type);
private:
	RaceType race;
	AbilityType abil;
	WeaponType weapon;
	ArmorType armor;
	MountType mount;
};

//-------------------------------------------------------------------------------

class LeaderBuilder {
protected:
	Leader* unit;
public:
	LeaderBuilder();
	virtual ~LeaderBuilder() {}

	virtual void createNewLeader(int side) = 0;
	virtual void build_race() = 0;
	virtual void build_ability() = 0;
	virtual void build_weapon() = 0;
	virtual void build_armor() = 0;
	virtual void build_mount() = 0;

	Leader* getLeader();
};

//-------------------------------------------------------------------------------

class ArmyLeaderBuilder : public LeaderBuilder {
public:
	ArmyLeaderBuilder();
	~ArmyLeaderBuilder();

	void createNewLeader(int side);
	void build_race();
	void build_ability();
	void build_weapon();
	void build_armor();
	void build_mount();
private:
	string RACE;
	string ABILITY;
	string WEAPON;
	string ARMOR;
	string MOUNT;
};

//-------------------------------------------------------------------------------

class Director {
public:
	Leader* ConstructLeader(ArmyLeaderBuilder &unit_builder, int side);
};

#endif