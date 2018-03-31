#ifndef CARMY
#define CARMY

#include "CUnit.h"

class CArmy {
public:
	CArmy();
	~CArmy();
	void army_state() const;
	void push_unit(CUnit* unit);
	CUnit* return_unit(int num) const;
	int return_size() const;
private:
	vector<CUnit*> army_vector;
};

#endif