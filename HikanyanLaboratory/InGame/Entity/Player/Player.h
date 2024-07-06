#pragma once
#include "../EntityBase.h"

class Player final : public EntityBase
{
public:
	void Initialize() override;
	void Update() override;
	void Draw() override;
};
