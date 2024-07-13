#pragma once

#include "../System/StateMachine.h"

class GameState : public State
{
public:
	bool isGameClear;
	const Texture tree{U"🌲"_emoji};
	Camera2D camera_2d_{Vec2{400, 300}, 1.0};

	GameState(StateMachine* machine) : State(machine), isGameClear(false)
	{
	}

	void GameClearCheck();

	void Enter() override;

	void Update() override;

	void Exit() override;
};
