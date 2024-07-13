#pragma once
#include "../System/StateMachine.h"

class ResultState : public State
{
public:
	int finalScore;
	int remainingLives;
	bool isGameClear;
	Font font = Font(40);

	ResultState(StateMachine* machine) : State(machine)
	{
	}

	void Enter() override;

	void Update() override;

	void Exit() override;
};
