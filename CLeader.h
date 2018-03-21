#ifndef CLEADER
#define CLEADER

#include "CUnit.h"

using namespace std;

enum RaceType { HUMAN, LIZARD, BEAST };
enum AbilityType { RUNNING, SWIMMING, FLYING };
enum WeaponType { SWORD, LANCE, BOW, MAGIC };
enum ArmorType { LIGHT, MEDIUM, HARD };
enum MountType { HORSE, LION, GRIFFIN, NONE };

class CLeader : public CUnit {
public:
	CLeader();
	~CLeader();

	void createUnit(int side, int number);

	void set_race(const RaceType& m_race);
	void set_ability(const AbilityType& m_abil);
	void set_weapon(const WeaponType& m_weapon);
	void set_armor(const ArmorType& m_armor);
	void set_mount(const MountType& m_mount);

	RaceType get_race() const;

	string info() const;

	string return_name() const;
	void ability_attack_bonus(const FieldType& field_type);
	void race_protection_bonus(const FieldType& field_type);
private:
	RaceType race;
	AbilityType abil;
	WeaponType weapon;
	ArmorType armor;
	MountType mount;
};

//-------------------------------------------------------------------------------

class CLeaderBuilder {
protected:
	CLeader* unit;
public:
	CLeaderBuilder();
	virtual ~CLeaderBuilder() {}

	virtual void createNewLeader(int side) = 0;
	virtual void build_race() = 0;
	virtual void build_ability() = 0;
	virtual void build_weapon() = 0;
	virtual void build_armor() = 0;
	virtual void build_mount() = 0;

	CLeader* getLeader();
};

//-------------------------------------------------------------------------------

class CArmyLeaderBuilder : public CLeaderBuilder {
public:
	CArmyLeaderBuilder();
	~CArmyLeaderBuilder();

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

class CDirector {
public:
	CLeader* ConstructLeader(CArmyLeaderBuilder &unit_builder, int side);
};

#endif