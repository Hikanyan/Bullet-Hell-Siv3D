#include "../../../../stdafx.h"
#include "Player.h"

void Player::Initialize()
{
	FontAsset::Register(U"Regular", 30, Typeface::Regular);
	hp = 100; // 初期HPを設定
	position = {400, 300}; // 初期位置を設定
	rotation = {0.0f, 0.0f}; // 初期回転を設定
	scale = {1.0f, 1.0f}; // 初期スケールを設定
	velocity = {0.0f, 0.0f}; // 初期速度を設定
}

void Player::Update()
{
	//入力処理
	if (KeyW.pressed())
	{
		position.y -= player_jump_power_;
	}
	if (KeyS.pressed())
	{
		position.y += player_speed_;
	}
	if (KeyA.pressed())
	{
		position.x -= player_speed_;
	}
	if (KeyD.pressed())
	{
		position.x += player_speed_;
	}

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

void Player::Draw()
{
	// プレイヤーの座標にプレイヤーを表示
	FontAsset(U"Regular")(player_image_).drawAt(position.x, position.y);
}

Vec2 Player::GetPosition() const
{
	return position;
}
