#include "EntityController.h"

#include "Player/Player.h"

void EntityController::Initialize()
{
	// Playerの初期化
	Player* player = new Player();
	player->Initialize();
	AddEntity(player);
	//敵の初期化
}

void EntityController::AddEntity(EntityBase* entity)
{
	entities.push_back(entity);
}

void EntityController::UpdateEntities()
{
	for (auto& entity : entities)
	{
		entity->Update();
	}
}

void EntityController::DrawEntities()
{
	for (auto& entity : entities)
	{
		entity->Draw();
	}
}

void EntityController::Disposable()
{
	for (auto& entity : entities)
	{
		delete entity;
	}
	entities.clear();
}
