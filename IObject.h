#ifndef COBJECT
#define COBJECT

#ifndef FUNCTIONS_DEFINED
#define FUNCTIONS_DEFINED
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::set;
using std::abs;
#endif

class IObject {
public:
	virtual ~IObject() {};
};

#endif