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
CUnit* CArmy::choose_unit() {
	int chosen_num = -1;
	set<int> alive_units;
	for (int i = 0; i < army_vector.size(); ++i) {
		CUnit* cur_unit = army_vector[i];
		if (cur_unit->Alive) {
			cout << cur_unit->NUMBER << " " << cur_unit->return_name() << " " << cur_unit->x << " " << cur_unit->y << endl;
			alive_units.insert(cur_unit->NUMBER);
		}
	}
	while (alive_units.find(chosen_num) == alive_units.end()) {
		cout << "Choose unit:" << endl;
		cin >> chosen_num;
	}
	return army_vector[chosen_num];
}
vector<int> CArmy::distances_to_units(int main_x, int main_y) {
	vector<int> dists(army_vector.size(), -1);
	for (int i = 0; i < army_vector.size(); ++i)
		if (army_vector[i]->Alive) {
			dists[i] = army_vector[i]->dist(main_x, main_y);
	}
	return dists;
}
int CArmy::return_size() const {
	return(army_vector.size());
}
RaceType CArmy::return_race() const {
	CLeader* leader = dynamic_cast<CLeader*>(army_vector[0]);
	return leader->get_race();
}
bool CArmy::is_dead() {
	if (!army_vector[0]->Alive)
		return false;
	else
		return true;
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