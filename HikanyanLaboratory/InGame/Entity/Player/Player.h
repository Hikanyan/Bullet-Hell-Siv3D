#pragma once
#include "../EntityBase.h"

class Player final : public EntityBase
{
public:
	void Initialize() override;
	void Update() override;
	void Draw() override;

	Vec2 GetPosition() const;
private:
	String player_image_ = U">_<";
	float player_speed_ = 5;
	float player_jump_power_ = 10;
	float gravity_ = 0.5f; // 重力加速度
	float ground_level_ = 500.0f; // 地面の高さ

};
