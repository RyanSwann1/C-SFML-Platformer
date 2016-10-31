#include "GUIManager.h"
#include <iostream>


GUIManager::GUIManager(SharedContext* sharedContext)
	: m_sharedContext(sharedContext)
{
}


GUIManager::~GUIManager()
{
}

void GUIManager::addInterface(const std::string & interfaceName, const std::vector<GUIInterface>& guiInterface)
{
	auto iter = findInterface(interfaceName);
	if (!iter)
	{
		m_guiInterfaces.emplace(std::make_pair(interfaceName, guiInterface));
	}
	else {
		std::cerr << "Interface already exists.\n";
	}
}

void GUIManager::setCurrentInterface(const std::string & interfaceName)
{
	auto iter = findInterface(interfaceName);
	if (iter)
	{
		m_currentInterface = iter;
	}
}

void GUIManager::draw(sf::RenderWindow & window, const std::string interfaceName)
{
	if (m_currentInterface)
	{
		m_currentInterface->draw(window);
	}
	//Check for 
}

void GUIManager::update(const float deltaTime)
{
	//If mouse is hovering over gui element
	//Possibly highlight, then click
}

GUIInterface * GUIManager::findInterface(const std::string & interfaceName)
{
	auto cIter = m_guiInterfaces.find(interfaceName);
	return (cIter != m_guiInterfaces.cend() ? &cIter->second : nullptr);
}
