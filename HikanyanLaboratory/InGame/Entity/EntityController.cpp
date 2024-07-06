#include "EntityController.h"

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
