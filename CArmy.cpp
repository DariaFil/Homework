#include "CArmy.h"

CArmy::CArmy() {}
CArmy::~CArmy() {
	int i;
	for (i = 0; i < army_vector.size(); ++i)
		delete army_vector[i];
}

void CArmy::army_state() const {
	int i;
	for (i = 0; i < army_vector.size(); ++i) {
		army_vector[i]->info();
		army_vector[i]->print_state();
	}
}

void CArmy::push_unit(CUnit* unit) {
	army_vector.push_back(unit);
}
CUnit* CArmy::return_unit(int num) const {
	return army_vector[num];
}
int CArmy::return_size() const {
	return(army_vector.size());
}