#pragma once
#include "StateBase.h"
class StateMainMenu :
	public StateBase
{
public:
	StateMainMenu(StateManager* stateManager);
	~StateMainMenu();

	void update(const float deltaTime) override;
	void draw(sf::RenderWindow& window) override;

private:

};

