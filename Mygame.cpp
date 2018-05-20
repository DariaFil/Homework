#include "Command.h"
#include <queue>

int main() {
	CGame* game = new CGame;
	queue<Command*> list_of_commands;
	Command* create_command = new CreateGameCommand(game);
	Memento* undo_game = new Memento();
	list_of_commands.push(create_command);
	
	int winner = 0;
	string ans = "";
	cout << "Continue? Yes, No" << endl;
	cin >> ans;
	while (ans != "NO") {
		while (!list_of_commands.empty()) {
			Command* cur_command = list_of_commands.front();
			list_of_commands.pop();
			cur_command->execute(undo_game);
			delete cur_command;
		}
		cout << "Would you like to save the game? Press YES to save game" << endl;
		cin >> ans;
		if (ans == "YES") {
			Command* save_command = new SaveGameCommand(game);
			list_of_commands.push(save_command);
		}
		else {
			cout << "Would you like to rollback the game? Press YES to rollback" << endl;
			cin >> ans;
			if (ans == "YES") {
				Command* rollback_command = new LoadCheckpointCommand(game);
				list_of_commands.push(rollback_command);
				Command* step_command = new MakeMoveCommand(game);
				list_of_commands.push(step_command);
			}
			else {
				Command* step_command = new MakeMoveCommand(game);
				Command* change_command = new ChangePlayerCommand(game);
				list_of_commands.push(step_command);
				list_of_commands.push(change_command);
			}
		}
		if (winner = game->check_end())
			break;
		cout << "Continue? Press NO to stop game" << endl;
		cin >> ans;
	}
	while (!list_of_commands.empty()) {
		Command* cur_command = list_of_commands.front();
		list_of_commands.pop();
		delete cur_command;
	}	
	if (!winner)
		cout << "Game was stopped by players" << endl;
	else
		cout << "Player " << winner << " win! Congatulations!!!" << endl;
	delete game;
	return 0;
}