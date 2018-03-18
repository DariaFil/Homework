#ifndef CBATTLEFIELD
#define CBATTLEFIELD

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class CBattleField {
public:
	CBattleField();
	CBattleField(int n, int m);
	~CBattleField();
	void print_battlefield() const;
	void set_position(int i, int j, const string& data);

	vector<vector<pair<string, string>>> BF;
};

#endif