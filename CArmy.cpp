#include "CArmy.h"

Army::~Army() {
	int i;
	for (i = 0; i < army_vector.size(); ++i)
		delete army_vector[i];
}

void Army::army_state() {
	int i;
	for (i = 0; i < army_vector.size(); ++i)
	{
		army_vector[i]->info();
		army_vector[i]->print_state();
	}
}