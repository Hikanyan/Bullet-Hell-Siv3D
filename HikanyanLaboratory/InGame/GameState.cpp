#include "GameState.h"

#include "ResultState.h"
#include "TitleState.h"

void GameState::GameClearCheck()
{
}

void GameState::Update()
{
	if (KeyEnter.down())
	{
		stateMachine->ChangeState(new ResultState(stateMachine));
		return;
	}
}
