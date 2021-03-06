#include "CLeader.h"

CLeader::CLeader() {}
CLeader::~CLeader() {}

void CLeader::createUnit(int side, int number) {
	HP = 100;
	ATTACK_SPEED = 30;
	ATTACK_FORSE = 20;
	RADIUS = 3;
	SPEED = 3;
	PROTECTION = 50;
	REWARD = 50;
	SIDE = side;
	NUMBER = number;
}

void CLeader::set_ability(const AbilityType& m_abil) {
	abil = m_abil;
}
void CLeader::set_weapon(const WeaponType& m_weapon) {
	weapon = m_weapon;
	if (weapon == SWORD) {
		ATTACK_FORSE += 10;
		REWARD += 20;
	}
	else if (weapon == LANCE) {
		RADIUS += 1;
		ATTACK_SPEED += 5;
		REWARD += 30;
	}
	else if (weapon == BOW) {
		ATTACK_SPEED += 10;
		ATTACK_FORSE -= 5;
		RADIUS += 3;
		REWARD += 10;
	}
	else if (weapon == MAGIC) {
		ATTACK_FORSE += 5;
		RADIUS += 1;
	}
}
void CLeader::set_armor(const ArmorType& m_armor) {
	armor = m_armor;
	if (armor == LIGHT)
		PROTECTION += 10;
	else if (armor == MEDIUM) {
		PROTECTION += 20;
		SPEED -= 1;
		REWARD += 10;
	}
	else if (armor == HARD) {
		PROTECTION += 30;
		SPEED -= 2;
		REWARD += 20;
	}
}
void CLeader::set_mount(const MountType& m_mount) {
	mount = m_mount;
	if (mount == HORSE) {
		SPEED += 1;
		ATTACK_FORSE += 10;
		REWARD += 10;
	}
	else if (mount == LION) {
		ATTACK_SPEED += 20;
		ATTACK_FORSE += 10;
		REWARD += 20;
	}
	else if (mount == GRIFFIN) {
		SPEED += 2;
		ATTACK_SPEED += 20;
		REWARD += 30;
	}
}

string CLeader::info() const {
	string s = "Your leader of ";
	s += race->race_info();
	s += " race has ";
	if (abil == RUNNING)
		s += "running";
	else if (abil == SWIMMING)
		s += "swimming";
	else if (abil == FLYING)
		s += "flying";
	s += " ability, is armred with ";
	if (weapon == SWORD)
		s += "sword";
	else if (weapon == LANCE)
		s += "lance";
	else if (weapon == BOW)
		s += "bow";
	else if (weapon == MAGIC)
		s += "magic";
	s += " and ";
	if (armor == LIGHT)
		s += "light";
	else if (armor == MEDIUM)
		s += "medium";
	else if (armor == HARD)
		s += "hard";
	s += " armor";
	if (mount != NONE) {
		s += " and rides the ";
		if (mount == HORSE)
			s += "horse";
		else if (mount == LION)
			s += "lion";
		else if (mount == GRIFFIN)
			s += "griffin";
	}
	cout << s << endl;
	return s;
}

string CLeader::return_name() const {
	return race->return_race_name() + "L";
}
void CLeader::ability_attack_bonus(const FieldType& field_type) {
	if (field_type == FIELD && abil == RUNNING && !InAbilField) {
		ATTACK_SPEED += 10;
		InField = true;
	}
	if (field_type == WATER && abil == SWIMMING && !InAbilField) {
		ATTACK_SPEED += 10;
		InField = true;
	}
	if (field_type == WATER && abil == FLYING && !InAbilField) {
		ATTACK_SPEED -= 10;
		InField = true;
	}
	if ((field_type == FIELD || field_type == FOREST) && abil == FLYING && !InAbilField) {
		ATTACK_SPEED += 10;
		InField = true;
	}
	if (field_type != FIELD && abil == RUNNING && InAbilField) {
		ATTACK_SPEED -= 10;
		InField = false;
	}
	if (field_type != WATER && abil == SWIMMING && InAbilField) {
		ATTACK_SPEED -= 10;
		InField = false;
	}
	if (field_type == WATER && abil == FLYING && InAbilField) {
		ATTACK_SPEED += 20;
	}
	if ((field_type == FIELD || field_type == FOREST) && abil == FLYING && InAbilField) {
		ATTACK_SPEED += 20;
	}
}

//-------------------------------------------------------------------------------

CLeaderBuilder::CLeaderBuilder() {}
CLeader* CLeaderBuilder::getLeader() {
	return unit;
}

//-------------------------------------------------------------------------------

CArmyLeaderBuilder::CArmyLeaderBuilder() : CLeaderBuilder() {}
CArmyLeaderBuilder::~CArmyLeaderBuilder() {}

void CArmyLeaderBuilder::createNewLeader(int side) {
	unit = new CLeader();
	unit->createUnit(side, 0);
}
void CArmyLeaderBuilder::build_race() {
	int answer = 0;
	do {
		answer = 0;
		cout << "Choose your race: Human, Lizard, Beast" << endl;
		cin >> RACE;
		if (RACE == "Human")
			unit->set_race(HUMAN);
		else if (RACE == "Lizard")
			unit->set_race(LIZARD);
		else if (RACE == "Beast")
			unit->set_race(BEAST);
		else
			answer = 1;
	} while (answer);
}
void CArmyLeaderBuilder::build_ability() {
	int answer = 0;
	do {
		answer = 0;
		cout << "Choose your ability: Running, Swimming, Flying" << endl;
		cin >> ABILITY;
		if (ABILITY == "Running")
			unit->set_ability(RUNNING);
		else if (ABILITY == "Swimming")
			unit->set_ability(SWIMMING);
		else if (ABILITY == "Flying")
			unit->set_ability(FLYING);
		else
			answer = 1;
	} while (answer);
}
void CArmyLeaderBuilder::build_weapon() {
	int answer = 1;
	do {
		answer = 0;
		cout << "Choose your weapon: Sword, Lance, Bow, Magic" << endl;
		cin >> WEAPON;
		if (WEAPON == "Sword")
			unit->set_weapon(SWORD);
		else if (WEAPON == "Lance")
			unit->set_weapon(LANCE);
		else if (WEAPON == "Bow")
			unit->set_weapon(BOW);
		else if (WEAPON == "Magic")
			unit->set_weapon(MAGIC);
		else
			answer = 1;
	} while (answer);
}
void CArmyLeaderBuilder::build_armor() {
	int answer = 0;
	do {
		answer = 0;
		cout << "Choose your armor: Light, Medium, Hard" << endl;
		cin >> ARMOR;
		if (ARMOR == "Light")
			unit->set_armor(LIGHT);
		else if (ARMOR == "Medium")
			unit->set_armor(MEDIUM);
		else if (ARMOR == "Hard")
			unit->set_armor(HARD);
		else
			answer = 1;
	} while (answer);
}
void CArmyLeaderBuilder::build_mount() {
	int answer = 0;
	do {
		answer = 0;
		cout << "Choose your mount: Horse, Lion, Griffin, None" << endl;
		cin >> MOUNT;
		if (MOUNT == "Horse")
			unit->set_mount(HORSE);
		else if (MOUNT == "Lion")
			unit->set_mount(LION);
		else if (MOUNT == "Griffin")
			unit->set_mount(GRIFFIN);
		else if (MOUNT == "None")
			unit->set_mount(NONE);
		else
			answer = 1;
	} while (answer);
}

//-------------------------------------------------------------------------------

CLeader* CDirector::ConstructLeader(CArmyLeaderBuilder &unit_builder, int side) {
	unit_builder.createNewLeader(side);
	unit_builder.build_race();
	unit_builder.build_ability();
	unit_builder.build_weapon();
	unit_builder.build_armor();
	unit_builder.build_mount();
	return(unit_builder.getLeader());
}