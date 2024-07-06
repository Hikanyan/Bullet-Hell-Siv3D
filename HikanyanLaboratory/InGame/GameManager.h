#pragma once
#include "../System/Singleton.h"
#include "../System/StateMachine.h"

class GameManager : public Singleton<GameManager>
{
public:
	StateMachine sm;
	void Initialize();
	void Update();
	void Finalize();
};
