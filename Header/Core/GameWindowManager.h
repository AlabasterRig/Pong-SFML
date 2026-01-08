#pragma once

#include "SFML/Graphics.hpp"
using namespace sf;

namespace Core
{
	class GameWindowManager
	{
	private:
		int GameWindowWidth = 1280;
		int GameWindowHeight = 720;
		std::string GameWindowTitle = "SFML-Pong!";

		RenderWindow* GameWindow = nullptr;

		void CreateGameWindow();

	protected:

	public:
		void Initialize();
		RenderWindow* GetGameWindow() const;
		bool IsGameRunning() const;
		void Render();
	};
}