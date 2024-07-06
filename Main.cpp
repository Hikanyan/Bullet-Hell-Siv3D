# include <Siv3D.hpp> // Siv3D v0.6.13

#include "HikanyanLaboratory/InGame/GameManager.h"


void Main()
{
	GameManager::getInstance()->Initialize();
	while (System::Update())
	{
		GameManager::getInstance()->Update();
	}
	GameManager::getInstance()->Finalize();
}
