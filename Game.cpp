#include "Game.hpp"

namespace Sonar {
	Game::Game(int width, int height, std::string title) {
		_data->window.create(sf::VideoMode(width, height),
			title, sf::Style::close | sf::Style::Titlebar);
		this->Run();
	}

	void Game::Run() {
		float newTime, frameTime, interpolation;

		float currnetTime = this->_clock.getElapsedTime().asSeconds();

		float  accumulator = 0.0f;

		while (this->_data->window.isOpen()) {
			this->_data->machine.ProcessStateChanges();

			newTime = this->_clock.getElapsedTime().asSeconds();

			frameTime = newTime - currnetTime;

			if (frameTime > 0.25f) {
				frameTime = 0.25f;
			}
			currnetTime = newTime;
			accumulator += frameTime;

			while (accumulator >= dt)
			{
				this->_data->machine.GetActiveState()->HandleInput();

				this->_data->machine.GetActiveState()->Update(dt);

				accumulator -= dt;
			}
			interpolation = accumulator / dt;
			this->_data->machine.GetActiveState()->Draw(interpolation);
		}
	}
}