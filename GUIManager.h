#pragma once

#include "GUIInterface.h"
#include <unordered_map>

struct SharedContext;
class GUIManager
{
public:
	GUIManager(SharedContext* sharedContext);
	~GUIManager();

	void addInterface(const std::string& interfaceName, const std::vector<GUIInterface>& guiInterface);
	void setCurrentInterface(const std::string& interfaceName);

	void draw(sf::RenderWindow& window, const std::string interfaceName);
	void update(const float deltaTime);

private:
	std::unordered_map<std::string, GUIInterface> m_guiInterfaces;
	SharedContext* m_sharedContext;
	GUIInterface* m_currentInterface;

	GUIInterface* findInterface(const std::string& interfaceName);
};

