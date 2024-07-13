#pragma once
#include "../EntityBase.h"

class EnemyBase : public EntityBase
{
public:
	void Initialize() override;
	void Update() override;
	void Draw() override;

private:
	String enemy_image_ = U"(°ロ°)";
	float enemy_speed_ = 5;
	float enemy_jump_power_ = 10;
	float gravity_ = 0.5f; // 重力加速度
	float ground_level_ = 500.0f; // 地面の高さ
};
