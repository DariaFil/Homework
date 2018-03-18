#ifndef CUNIT
#define CUNIT

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class CUnit {
public:
	virtual void createUnit(int side, int number) = 0;
	virtual void info() = 0;
	virtual void race_protection_bonus(const string& field_type) = 0;
	//void Move(const string& direction, vector<vector<string>> bf) = 0;
	void print_state();

	void set_position(int player, int number, int n, int m);

	virtual string return_name() = 0;
	~CUnit();
	int x;
	int y;
	int SIDE;
	int NUMBER;
protected:
	int PROTECTION;
	bool InField = false;
	int HP;
	int ATTACK_SPEED;
	int ATTACK_FORSE;
	int RADIUS;
	int SPEED;
	int REWARD;
};

#endif
