#include "Level.h"

Level::Level():
	level_map
	{
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
	}
{
	//constructor
}

void Level::drawFrame(sf::RenderWindow * window, float x, float y, float blockSize, float blockBorderSize)
{
	sf::Vertex line[] =
	{
		sf::Vertex(sf::Vector2f(x, y)),
		sf::Vertex(sf::Vector2f(x, y + (blockSize + 2 * blockBorderSize) * rowCount)),

		sf::Vertex(sf::Vector2f(x, y + (blockSize + 2 * blockBorderSize) * rowCount)),
		sf::Vertex(sf::Vector2f(x + (blockSize + 2 * blockBorderSize) * colCount, y + (blockSize + 2 * blockBorderSize) * rowCount)),

		sf::Vertex(sf::Vector2f(x + (blockSize + 2 * blockBorderSize) * colCount, y + (blockSize + 2 * blockBorderSize) * rowCount)),
		sf::Vertex(sf::Vector2f(x + (blockSize + 2 * blockBorderSize) * colCount, y))
	};
	window->draw(line, 6, sf::Lines);
}