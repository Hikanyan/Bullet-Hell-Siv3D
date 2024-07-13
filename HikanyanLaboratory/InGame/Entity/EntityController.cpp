#include "EntityController.h"

#include "Enemy/EnemyBase.h"
#include "Player/Player.h"

void EntityController::Initialize()
{
	// Playerの初期化
	player_ = new Player();
	player_->Initialize();
	AddEntity(player_);
	//敵の初期化
	EnemyBase* enemy = new EnemyBase();
	enemy->Initialize();
	AddEntity(enemy);
}

void EntityController::AddEntity(EntityBase* entity)
{
	entities_.push_back(entity);
}

void EntityController::UpdateEntities()
{
	for (auto& entity : entities_)
	{
		entity->Update();
	}
}

void EntityController::DrawEntities()
{
	for (auto& entity : entities_)
	{
		entity->Draw();
	}
}

void EntityController::Dispose()
{
	for (auto& entity : entities_)
	{
		delete entity;
	}
	entities_.clear();
}

Player* EntityController::GetPlayer() const
{
	return player_;
}
