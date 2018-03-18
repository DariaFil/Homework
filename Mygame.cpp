//#include "Test.h"
#define MAINWORK
#include "CGame.h"

bool isParam(string line)
{
	char* p;
	strtol(line.c_str(), &p, 10);
	return *p == 0;
}

bool right_cin(string data, int min_param, int max_param)
{
	if (data.size() < 9 && isParam(data) && stoi(data) >= min_param && stoi(data) <= max_param)
		return true;
	else 
		return false;
}

int main() {

#ifdef TESTS
	all_tests();
#undef MAINWORK
#endif
	
#ifdef MAINWORK

	CGame game;
	string size1 = "0";
	string size2 = "0";
	while (!right_cin(size1, 10, 50)) {
		cout << "Choose field width:" << endl;
		cin >> size1;
	}
	while (!right_cin(size2, 10, 50)) {
		cout << "Choose field hight:" << endl;
		cin >> size2;
	}
	game.createBattleField(stoi(size1), stoi(size2));
	
	string asize = "1";
	while (!right_cin(asize, 2, min(stoi(size1), stoi(size2)))) {
		cout << "Choose army size:" << endl;
		cin >> asize;
	}
	for (int p = 0; p < 2; ++p) {
		cout << "Player " << p + 1 << ":" << endl;
		string i = asize;
		string a = asize;
		string h = asize;
		string b = asize; 
		while (stoi(i) + stoi(a) + stoi(b) + stoi(h) != stoi(asize) - 1) {
			i = asize;
			a = asize;
			h = asize;
			b = asize;
			while (!right_cin(i, 0, stoi(asize) - 1)) {
				cout << "Choose number of infantrymen:" << endl;
				cin >> i;
			}
			while (!right_cin(a, 0, stoi(asize) - 1)) {
				cout << "Choose number of archers:" << endl;
				cin >> a;
			}
			while (!right_cin(h, 0, stoi(asize) - 1)) {
				cout << "Choose number of horsemen:" << endl;
				cin >> h;
			}
			while (!right_cin(b, 0, stoi(asize) - 1)) {
				cout << "Choose number of berserks:" << endl;
				cin >> b;
			}
		}

		game.createArmy(stoi(i), stoi(a), stoi(h), stoi(b), p + 1);
	}

#endif
	return 0;
}