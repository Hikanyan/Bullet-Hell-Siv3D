#include "../../../../stdafx.h"
#include "Player.h"

void Player::Initialize()
{
	FontAsset::Register(U"Regular", 30, Typeface::Regular);
	hp = 100; // 初期HPを設定
	position = {400, 300}; // 初期位置を設定
	rotation = { 0.0f, 0.0f }; // 初期回転を設定
	scale = { 1.0f, 1.0f }; // 初期スケールを設定
}

void Player::Update()
{
	//入力処理
	if (KeyW.pressed())
	{
		position.y -= player_speed_;
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
}

void Player::Draw()
{
	// プレイヤーの座標にプレイヤーを表示
	Transformer2D transform(Mat3x2::Scale(scale).translated(position), TransformCursor::Yes);
	FontAsset(U"Regular")(player_image_).drawAt(0, 0);
}
