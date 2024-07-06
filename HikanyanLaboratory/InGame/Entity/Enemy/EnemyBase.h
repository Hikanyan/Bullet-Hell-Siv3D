#pragma once
#include "../EntityBase.h"

class EnemyBase : public EntityBase
{
public:
	void Initialize() override;
	void Update() override;
	void Draw() override;
};
