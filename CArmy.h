#ifndef CARMY
#define CARMY

#include "CUnit.h"

class CArmy : public IObject {
public:
	CArmy();
	~CArmy();
	friend class ArmyPrinter;
	void push_unit(CUnit* unit);
	CUnit* return_unit(int num) const;
	int return_size() const;
private:
	vector<CUnit*> army_vector;
};

class ArmyPrinter : public IPrinter {
public:
	void print(IObject* army) const;
};

#endif