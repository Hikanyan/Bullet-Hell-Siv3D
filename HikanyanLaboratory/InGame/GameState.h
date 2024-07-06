#pragma once

#include "../System/StateMachine.h"

class GameState : public State
{
public:
	bool isGameClear;

	GameState(StateMachine* machine) : State(machine), isGameClear(false)
	{
	}

	void GameClearCheck();

	void Enter() override
	{
	}

	void Update() override;

	void Exit() override
	{
	}
};
