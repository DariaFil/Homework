#ifndef CARMY
#define CARMY

#include "CUnit.h"

class Army {
public:
	~Army();
	void army_state();
	vector<Unit*> army_vector;
};

#endif