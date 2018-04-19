#include "CBattlefield.h"

CBattleField::CBattleField() {}
CBattleField::CBattleField(int n, int m) {
	BF.resize(m);
	for (int i = 0; i < m; ++i) {
		BF[i].resize(n);
		for (int j = 0; j < n; ++j) {
			int r = rand();
			if (r % 3 == 1)
				BF[i][j].first = FIELD;
			else if (r % 3 == 2)
				BF[i][j].first = FOREST;
			else
				BF[i][j].first = WATER;
		}
	}
}
CBattleField::~CBattleField() {}

void CBattleField::set_position(int i, int j, const string& data) {
	BF[j][i].second = data;
}

bool CBattleField::correct_direction(int x, int y, Direction dir) const {
	switch (dir) {
	case UP:
		if (y - 1 >= 0 && BF[y - 1][x].second == "")
			return true;
		else
			return false;
	case DOWN:
		if (y + 1 < BF.size() && BF[y + 1][x].second == "")
			return true;
		else
			return false;
	case LEFT:
		if (x - 1 >= 0 && BF[y][x - 1].second == "")
			return true;
		else
			return false;
	case RIGHT:
		if (x + 1 < BF[0].size() && BF[y][x + 1].second == "")
			return true;
		else
			return false;
	default:
		return false;
	}
}

void BattlefieldPrinter::print(IObject* battlefield) const {
	CBattleField* bf = dynamic_cast<CBattleField*>(battlefield);
	for (int i = 0; i < bf->BF.size(); ++i) {
		for (int j = 0; j < bf->BF[i].size(); ++j)
			if (bf->BF[i][j].second == "") {
				if (bf->BF[i][j].first == FIELD)
					cout << "_  ";
				else if (bf->BF[i][j].first == FOREST)
					cout << "F  ";
				else if (bf->BF[i][j].first == WATER)
					cout << "~  ";
			}
			else
				cout << bf->BF[i][j].second << " ";
		cout << endl;
	}
}