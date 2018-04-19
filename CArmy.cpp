#include "CArmy.h"

CArmy::CArmy() {}
CArmy::~CArmy() {
	int i;
	for (i = 0; i < army_vector.size(); ++i)
		delete army_vector[i];
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
RaceType CArmy::return_race() const {
	CLeader* leader = dynamic_cast<CLeader*>(army_vector[0]);
	return leader->get_race();
}

void ArmyPrinter::print(IObject* army) const {
	CArmy* a = dynamic_cast<CArmy*>(army);
	cout << a->return_race() << " army" << endl;
	int i;
	UnitPrinter printer;
	for (i = 0; i < a->army_vector.size(); ++i) {
		a->army_vector[i]->info();
		printer.print(a->army_vector[i]);
	}
}