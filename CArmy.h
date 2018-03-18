#ifndef CARMY
#define CARMY

#include "CUnit.h"

class CArmy {
public:
	CArmy();
	~CArmy();
	void army_state();
	vector<CUnit*> army_vector;
};

#endif