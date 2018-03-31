#ifndef CBATTLEFIELD
#define CBATTLEFIELD

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

#ifndef FIELDTYPE_DEFINED
#define FIELDTYPE_DEFINED
enum FieldType { FIELD = 0, FOREST, WATER };
#endif

class CBattleField {
public:
	CBattleField();
	CBattleField(int n, int m);
	~CBattleField();
	void print_battlefield() const;
	void set_position(int i, int j, const std::string& data);

	std::vector<std::vector<std::pair<FieldType, std::string>>> BF;
};

#endif