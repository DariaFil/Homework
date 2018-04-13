#ifndef CUNIT
#define CUNIT

#include "IObject.h"
#include "IPrinter.h"

#ifndef FIELDTYPE_DEFINED
#define FIELDTYPE_DEFINED
enum Direction { UP = 0, DOWN, LEFT, RIGHT, WRONG };
enum FieldType { FIELD = 0, FOREST, WATER };
#endif

class CUnit : public IObject {
public:
	virtual void createUnit(int side, int number) = 0;
	virtual string info() const = 0;
	virtual void race_protection_bonus(const FieldType& field_type) = 0;
	vector<int> return_state() const;
	friend class UnitPrinter;

	void set_position(int player, int number, int n, int m);
	virtual void set_InField(const FieldType field) = 0;

	void step(Direction direction);
	//void punch(CUnit* enemy);

	virtual std::string return_name() const = 0;
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
};

class UnitPrinter : public IPrinter {
public:
	void print(IObject* unit) const;
};
#endif