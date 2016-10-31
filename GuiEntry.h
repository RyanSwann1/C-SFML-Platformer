#pragma once

#include "FontManager.h"
#include <SFML\Graphics.hpp>
#include <string>

struct GuiEntry
{
public:
	GuiEntry(FontManager* fontManager, const sf::Vector2f& size, const sf::Vector2f& position, const std::string& message, const std::string& fontName);
	~GuiEntry();

	std::string getMessage() const { return m_message; }
	void setPosition(const sf::Vector2f& newPos);

	void draw(sf::RenderWindow& window);

private:
	//Might benefit in making these private and only modifiable through functions
	sf::RectangleShape m_shape;
	std::string m_message;
	std::string m_fontName;
	sf::Text m_text;
	sf::Font* m_font;
	FontManager* m_fontManager;
};