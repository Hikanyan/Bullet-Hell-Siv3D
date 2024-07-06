#pragma once
#include "../System/StateMachine.h"

class TitleState : public State
{
public:
	TitleState(StateMachine* machine) : State(machine)
	{
	}

	Font font{50};

	void Enter() override;
	void Update() override;
	void Exit() override;
};
