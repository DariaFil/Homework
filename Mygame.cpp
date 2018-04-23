#include "CGame.h"


int main() {CGame game;
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
	
	int side = 0;
	int winner = -1;
	string ans = "";
	cout << "Continue? YES, NO" << endl;
	cin >> ans;
	while (ans != "NO") {
		cout << "Player " << side + 1 << " step" << endl;
		string ans1;
		cout << "Do you want to check state of army or unit? Press YES if you want" << endl;
		cin >> ans1;
		if (ans1 == "YES")
			game.print_item(side);
		game.player_step(side);
		game.player_punch(side);
		if (game.check_end()) {
			winner = side + 1;
			break;
		}
		else {
			cout << "Do you want to buy unit? Press YES if you want" << endl;
			cin >> ans1;
			if (ans1 == "YES")
				game.choose_unit_to_buy(side);
		}
		cout << "Continue? Press NO to stop game" << endl;
		cin >> ans;
		side = (side + 1) % 2;
	}
	if (winner == -1)
		cout << "Game was stopped by players" << endl;
	else
		cout << "Player " << winner << " win! Congatulations!!!" << endl;
	return 0;
}
