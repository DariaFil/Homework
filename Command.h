#pragma once
#include "CGame.h"

class Command {
public:
	Command() {}
	virtual ~Command() {}
	virtual void execute(Memento* mem) = 0;
protected:
	CGame* cur_game;
};

class CreateGameCommand : public Command {
public:
	CreateGameCommand(CGame* p);
	void execute(Memento* mem);
};

class LoadCheckpointCommand : public Command {
public:
	LoadCheckpointCommand(CGame* p);
	void execute(Memento* mem);
};

class SaveGameCommand : public Command {
public:
	SaveGameCommand(CGame* p);
	void execute(Memento* mem);
};

class MakeMoveCommand : public Command {
public:
	MakeMoveCommand(CGame* p);
	void execute(Memento* mem);
};

class ChangePlayerCommand : public Command {
public:
	ChangePlayerCommand(CGame* p);
	void execute(Memento* mem);
};