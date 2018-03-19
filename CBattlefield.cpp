#include "CBattlefield.h"

CBattleField::CBattleField() {}
CBattleField::CBattleField(int n, int m) {
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
CBattleField::~CBattleField() {}

void CBattleField::print_battlefield() const {
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
void CBattleField::set_position(int i, int j, const string& data) {
	BF[j][i].second = data;
}