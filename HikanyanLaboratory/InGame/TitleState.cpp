﻿#include "TitleState.h"

#include "GameState.h"

void TitleState::Enter()
{
	Scene::SetBackground(ColorF{0, 0, 0});
}

void TitleState::Update()
{
	if (KeyEnter.down())
	{
		stateMachine->ChangeState(new GameState(stateMachine));
		return;
	}
	font(U"Press Enter to start").drawAt(Scene::Center(), Palette::Blue);
}

void TitleState::Exit()
{
}
