#ifndef CUNIT
#define CUNIT

#include "IObject.h"
#include "IPrinter.h"
#include "CRace.h"

#ifndef FIELDTYPE_DEFINED
#define FIELDTYPE_DEFINED
enum FieldType { FIELD = 0, FOREST, WATER };
#endif

#ifndef  DIRETOIN_DFINED
#define DIRETOIN_DFINED
enum Direction { UP = 0, DOWN, LEFT, RIGHT, WRONG };
#endif


class CUnit : public IObject {
public:
	virtual void createUnit(int side, int number) = 0; // сюда же передавать класс расы
	virtual string info() const = 0;
	void race_protection_bonus(const FieldType& field_type);
	vector<int> return_state() const;
	virtual string return_name() const = 0;
	friend class UnitPrinter;

	void set_race(RaceType _race);
	RaceType get_race();
	void set_position(int player, int number, int n, int m);
	void set_InField(const FieldType field);

	void step(Direction direction);
	//void punch(CUnit* enemy);
	~CUnit();
	int x;
	int y;
	int SIDE;
	int NUMBER;
protected:
	int PROTECTION;
	bool InField = false;
	int HP;
	int ATTACK_SPEED;
	int ATTACK_FORSE;
	int RADIUS;
	int SPEED;
	int REWARD;
	IRace* race;
};

class UnitPrinter : public IPrinter {
public:
	void print(IObject* unit) const;
};
#endif