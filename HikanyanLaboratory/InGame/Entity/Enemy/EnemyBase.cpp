#include "../../../../stdafx.h"
#include "EnemyBase.h"

void EnemyBase::Initialize()
{
	FontAsset::Register(U"Regular", 30, Typeface::Regular);
	hp = 100; // 初期HPを設定
	position = {0, 0}; // 初期位置を設定
	rotation = {0.0f, 0.0f}; // 初期回転を設定
	scale = {1.0f, 1.0f}; // 初期スケールを設定
	velocity = {0.0f, 0.0f}; // 初期速度を設定
}

void EnemyBase::Update()
{
	//position.x += enemy_speed_;

	// 重力の影響を適用
	velocity.y += gravity_;
	position.y += velocity.y;

	// 地面に達したら落下を止める
	if (position.y > ground_level_)
	{
		position.y = ground_level_;
		velocity.y = 0;
	}
}

void EnemyBase::Draw()
{
	FontAsset(U"Regular")(enemy_image_).drawAt(position.x, position.y);
}
