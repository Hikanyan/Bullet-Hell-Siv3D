#pragma once
#include "EntityBase.h"
#include "../../System/Singleton.h"

class Player;

class EntityController : public Singleton<EntityController>
{
private:
	std::vector<EntityBase*> entities_;
	Player* player_ = nullptr;

public:
	void Initialize();
	void AddEntity(EntityBase* entity);
	void UpdateEntities();
	void DrawEntities();
	void Dispose();

	Player* GetPlayer() const;
};
