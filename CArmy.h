#ifndef CARMY
#define CARMY

#include "CUnit.h"
#include "CLeader.h"
#include "Right_cin_func.h"

class CArmy : public IObject {
public:
	CArmy();
	~CArmy();
	friend class ArmyPrinter;
	void push_unit(CUnit* unit);
	CUnit* return_unit(int num) const;
	CUnit* choose_unit();
	vector<int> distances_to_units(int main_x, int main_y);
	int return_size() const;
	RaceType return_race() const;
	bool is_dead();
private:
	vector<CUnit*> army_vector;
};

class ArmyPrinter : public IPrinter {
public:
	void print(IObject* army) const;
};

#endif