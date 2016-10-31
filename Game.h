#pragma once

#include "Window.h"
#include "TextureManager.h"
#include "StateManager.h"
#include "SharedContext.h"
#include "EntityManager.h"
#include "Camera.h"
#include "AudioManager.h"

class Game
{
public:
	Game();
	~Game();

	bool isRunning() const { return m_window.isRunning(); }

	void update();
	void draw();
	void lateUpdate();

private:
	Window m_window;
	TextureManager m_textureManager;
	SharedContext m_sharedContext;
	StateManager m_stateManager;
	EntityManager m_entityManager;
	AudioManager m_audioManager;
	sf::Time m_timeElasped;
	sf::Clock m_clock;
};

