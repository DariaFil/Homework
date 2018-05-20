#include "Command.h"

CreateGameCommand::CreateGameCommand(CGame* p) {
	cur_game = p;
}
void CreateGameCommand::execute(Memento* mem) {
	cur_game->create();
	mem = new Memento(cur_game);
}

LoadCheckpointCommand::LoadCheckpointCommand(CGame* p) {
	cur_game = p;
}
void LoadCheckpointCommand::execute(Memento* mem) {
	cur_game->reinstate_memento(mem);
}

SaveGameCommand::SaveGameCommand(CGame* p) {
	cur_game = p;
}
void SaveGameCommand::execute(Memento* mem) {
	delete mem;
	mem = cur_game->create_memento();
}

MakeMoveCommand::MakeMoveCommand(CGame* p) {
	cur_game = p;
}
void MakeMoveCommand::execute(Memento* mem) {
	cur_game->player_move();
}

ChangePlayerCommand::ChangePlayerCommand(CGame* p) {
	cur_game = p;
}
void ChangePlayerCommand::execute(Memento* mem) {
	cur_game->change_player();
}