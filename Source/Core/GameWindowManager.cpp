#include "../../Header/Core/GameWindowManager.h"

void Core::GameWindowManager::Initialize()
{
	GameWindow = new RenderWindow();

	CreateGameWindow();
}

RenderWindow* Core::GameWindowManager::GetGameWindow() const
{
	return GameWindow;
}

bool Core::GameWindowManager::IsGameRunning() const
{
	return GameWindow->isOpen();
}

void Core::GameWindowManager::Render()
{
}

void Core::GameWindowManager::CreateGameWindow()
{
	GameWindow->create(VideoMode(GameWindowWidth, GameWindowHeight), GameWindowTitle, Style::Default);
}