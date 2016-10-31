#include "GuiEntry.h"

GuiEntry::GuiEntry(FontManager * fontManager, const sf::Vector2f & size, const sf::Vector2f & position, const std::string & message, const std::string & fontName)
	: m_fontManager(fontManager),
	m_message(message),
	m_fontName(fontName)
{
	if (fontManager->requireResource(fontName))
	{
		//Test for null
		m_font->loadFromFile(fontName);
		m_text.setFont(*m_font);
	}
	//else
	//{
	//	delete m_font;
	//	m_font = nullptr;
	//	std::cerr << "Unable to load font: " << fontName << "\n";
	//}
}

GuiEntry::~GuiEntry()
{
	m_fontManager->releaseResource(m_fontName);
	//delete m_font? - not entirely sure
}

void GuiEntry::draw(sf::RenderWindow & window)
{
	window.draw(m_shape);
	window.draw(m_text);
}

void GuiEntry::setPosition(const sf::Vector2f & newPos)
{
	m_shape.setPosition(newPos);
	m_text.setPosition(newPos);

	//Possibly change the origin too
	//Set both at same position, box is bigger should work out correctly
}