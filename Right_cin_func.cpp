#include "Right_cin_func.h"

bool isParam(string line) {
	char* p;
	strtol(line.c_str(), &p, 10);
	return *p == 0;
}

bool right_cin(string data, int min_param, int max_param) {
	if (data.size() < 9 && isParam(data) && stoi(data) >= min_param && stoi(data) <= max_param)
		return true;
	else
		return false;
}