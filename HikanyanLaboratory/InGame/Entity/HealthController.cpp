#include "HealthController.h"

void HealthController::Damage(EntityBase* entity, int damage)
{
	if (entity)
	{
		entity->Damage(damage);
		if (entity->hp <= 0)
		{
			// Handle entity death if necessary
		}
	}
}

void HealthController::Heal(EntityBase* entity, int heal)
{
	if (entity)
	{
		entity->Heal(heal);
	}
}
