#ifndef CBATTLEFIELD
#define CBATTLEFIELD

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "IObject.h"
#include "IPrinter.h"

#ifndef FIELDTYPE_DEFINED
#define FIELDTYPE_DEFINED
enum FieldType { FIELD = 0, FOREST, WATER };
#endif

class CBattleField : public IObject {
public:
	CBattleField();
	CBattleField(int n, int m);
	~CBattleField();
	friend class BattlefieldPrinter;
	void set_position(int i, int j, const std::string& data);

	std::vector<std::vector<std::pair<FieldType, std::string>>> BF;
};

class BattlefieldPrinter : public IPrinter {
public:
	void print(IObject* battlefield) const;
};
#endif