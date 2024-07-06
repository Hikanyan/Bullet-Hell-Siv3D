#pragma once
#include "EntityBase.h"

class HealthController
{
public:
	void Damage(EntityBase* entity, int damage);
	void Heal(EntityBase* entity, int heal);
};
