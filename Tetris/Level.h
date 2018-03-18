//Level.h
#include <SFML/Graphics.hpp>
#pragma once

class Level
{
private:
	const int  rowCount = 20;
	const int  colCount = 10;
	int level_map[20][10];
public:
	Level();
	void drawFrame(sf::RenderWindow* window, float x, float y, float blockSize, float blockBorderSize);
};