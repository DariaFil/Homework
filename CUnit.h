#ifndef CUNIT
#define CUNIT

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

#ifndef FIELDTYPE_DEFINED
#define FIELDTYPE_DEFINED
enum FieldType { FIELD = 0, FOREST, WATER };
#endif

class CUnit {
public:
	virtual void createUnit(int side, int number) = 0;
	virtual string info() const = 0;
	virtual void race_protection_bonus(const FieldType& field_type) = 0;
	vector<int> print_state() const;

	void set_position(int player, int number, int n, int m);

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

#endif