#ifndef CBATTLEFIELD
#define CBATTLEFIELD

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class BattleField {
public:
	BattleField();
	BattleField(int n, int m);
	~BattleField();
	void print_battlefield();
	void set_position(int i, int j, const string& data);

	vector<vector<pair<string, string>>> BF;
};

#endif