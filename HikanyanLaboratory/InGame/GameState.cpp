#include "GameState.h"

#include "ResultState.h"
#include "TitleState.h"
#include "Entity/EntityController.h"

void GameState::GameClearCheck()
{
}

void GameState::Enter()
{
	EntityController::getInstance()->Initialize();
}

void GameState::Update()
{
	if (KeyEnter.down())
	{
		stateMachine->ChangeState(new ResultState(stateMachine));
		return;
	}
	EntityController::getInstance()->UpdateEntities();

	EntityController::getInstance()->DrawEntities();
}

void GameState::Exit()
{
	EntityController::getInstance()->Disposable();
}
