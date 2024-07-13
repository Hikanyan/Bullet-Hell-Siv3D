#include "GameState.h"

#include "ResultState.h"
#include "TitleState.h"
#include "Entity/EntityController.h"
#include "Entity/Player/Player.h"

void GameState::GameClearCheck()
{
}

void GameState::Enter()
{
	Scene::SetBackground(ColorF{0.6, 0.8, 0.7});
	EntityController::getInstance()->Initialize();
}

void GameState::Update()
{
	const Player* player = EntityController::getInstance()->GetPlayer();
	// プレイヤーの位置を取得
	if (player)
	{
		// カメラの目標中心座標を設定
		camera_2d_.setTargetCenter(player->GetPosition());
	}


	// UV 座標が 0.0～1.0 の範囲を超えたとき、くり返しマッピングするように設定する
	const ScopedRenderStates2D sampler{SamplerState::RepeatLinear};
	// カメラを更新
	camera_2d_.update();
	{
		// カメラによる座標変換を適用
		const auto tr = camera_2d_.createTransformer();
		// シーンのサイズにマッピングして背景を描画
		tree.mapped(Scene::Size()).draw().setPos(player->GetPosition());


		if (KeyEnter.down())
		{
			stateMachine->ChangeState(new ResultState(stateMachine));
			return;
		}
		EntityController::getInstance()->UpdateEntities();

		EntityController::getInstance()->DrawEntities();
	}
}

void GameState::Exit()
{
	EntityController::getInstance()->Dispose();
}
