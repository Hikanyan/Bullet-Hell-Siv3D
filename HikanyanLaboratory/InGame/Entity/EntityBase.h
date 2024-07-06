#pragma once

class EntityBase
{
public:
	virtual ~EntityBase() = default;
	Vector2D<int> position;
	int hp;

	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;

	virtual void Damage(int damage)
	{
		hp -= damage;
		if (hp < 0) hp = 0;
	}

	virtual void Heal(int heal)
	{
		hp += heal;
		// 最大HPの制限が必要であれば追加
	}
};
