#pragma once
#include "EntityBase.h"
#include "../../System/Singleton.h"

class EntityController : public Singleton<EntityController>
{
private:
	std::vector<EntityBase*> entities;

public:
	void AddEntity(EntityBase* entity);
	void UpdateEntities();
	void DrawEntities();
};
