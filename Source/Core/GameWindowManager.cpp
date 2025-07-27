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
	GameWindow->clear(sf::Color(200, 50, 50, 255));

	GameWindow->display();
}

void Core::GameWindowManager::CreateGameWindow()
{
	GameWindow->create(VideoMode::getDesktopMode(), GameWindowTitle, Style::Default);
}