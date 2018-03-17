#include "CBattlefield.h"

BattleField::BattleField() {}
BattleField::BattleField(int n, int m) {
	BF.resize(m);
	for (int i = 0; i < m; ++i) {
		BF[i].resize(n);
		for (int j = 0; j < n; ++j) {
			int r = rand();
			if (r % 3 == 1)
				BF[i][j].first = "Field";
			else if (r % 3 == 2)
				BF[i][j].first = "Forest";
			else
				BF[i][j].first = "Water";
		}
	}
}
BattleField::~BattleField() {}

void BattleField::print_battlefield() {
	for (int i = 0; i < BF.size(); ++i) {
		for (int j = 0; j < BF[i].size(); ++j)
			if (BF[i][j].second == "") {
				if (BF[i][j].first == "Field")
					cout << "_  ";
				else if (BF[i][j].first == "Forest")
					cout << "F  ";
				else if (BF[i][j].first == "Water")
					cout << "~  ";
			}
			else
				cout << BF[i][j].second << " ";
		cout << endl;
	}
}
void BattleField::set_position(int i, int j, const string& data) {
	BF[j][i].second = data;
}