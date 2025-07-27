#include <iostream>
#include "../../Header/Core/GameWindowManager.h"

int main()
{
	Core::GameWindowManager GameWindow;
	GameWindow.Initialize();
	
	while (GameWindow.IsGameRunning())
	{
		GameWindow.Render();
	}

	return 0;
}