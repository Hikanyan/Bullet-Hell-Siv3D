#pragma once
#include "../EntityBase.h"

class Player final : public EntityBase
{
public:
	void Initialize() override;
	void Update() override;
	void Draw() override;

private:
	String player_image_ = U">_<";
	int player_speed_ = 5;
};
