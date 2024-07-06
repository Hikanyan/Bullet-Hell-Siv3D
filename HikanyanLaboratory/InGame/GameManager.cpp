#include "GameManager.h"


// ゲームの状態を表す
enum class GameState
{
	// ゲームの初期化
	Init,
	// ゲームのメインループ
	Main,
	// ゲームの終了
	End
};

enum class GameScene
{
	Title,
	InGame,
	Result
};


void GameManager::Initialize()
{
	sm.Initialize();
}

void GameManager::Update()
{
	sm.Update();
}

void GameManager::Finalize()
{
	sm.~StateMachine();
}
