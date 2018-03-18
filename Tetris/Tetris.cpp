#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include "Level.h"


/*
#include <sfml/audio.hpp> 
#include <sfml/config.hpp> 
#include <sfml/network.hpp> 
#include <sfml/opengl.hpp> 
#include <sfml/system.hpp> 
#include <sfml/window.hpp>*/

using namespace std;

/*void drawFrame(sf::RenderWindow* window, float x, float y, float blockSize, const int rowCount, const int colCount)
{
	sf::Vertex line[] =
	{
		sf::Vertex(sf::Vector2f(x, y)),
		sf::Vertex(sf::Vector2f(x, y + blockSize * rowCount))
	};
	window->draw(line, 2, sf::Lines);
}*/

int main()
{
	//Window
	sf::RenderWindow window(sf::VideoMode(600, 800), "Tetris!");

	//Boll
	/*sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);*/

	#pragma region BASE_SETTINGS
	sf::Color blockBorderColor = sf::Color(140, 140, 140, 255);
	sf::Color blockFillColor = sf::Color(160, 160, 160, 255);	//Gray
	sf::Color windowBackgroundColor = sf::Color(200, 200, 220, 255);	//light-Gray

	const float SIZERATIO = 1.8;

	float blockSize = 10.0 * SIZERATIO;
	float blockBorderSize = 3.0 * SIZERATIO;

	float startX = 100.0;
	float startY = 120.0;

	#pragma endregion  

	//rectangle
	float x = startX;
	float y = startY;
	sf::RectangleShape rectangle(sf::Vector2f(blockSize, blockSize));
	rectangle.setFillColor(blockFillColor);
	rectangle.setOutlineThickness(blockBorderSize);
	rectangle.setOutlineColor(blockBorderColor);
	rectangle.setPosition(x, y);

	sf::RectangleShape rectangle2(sf::Vector2f(blockSize, blockSize));
	rectangle2.setFillColor(blockFillColor);
	rectangle2.setOutlineThickness(blockBorderSize);
	rectangle2.setOutlineColor(blockBorderColor);
	rectangle2.setPosition(x + blockSize + 2* blockBorderSize, y);

	Level level;


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(windowBackgroundColor);

		level.drawFrame(&window, startX, startY, blockSize, blockBorderSize);
		//drawFrame(&window, startX, startY, blockSize, rowCount, colCount);

		y += 1;
		rectangle.setPosition(x, y);
		rectangle2.setPosition(x + blockSize + 2 * blockBorderSize, y);

		window.draw(rectangle);
		window.draw(rectangle2);
		window.display();


		sf::sleep(sf::milliseconds(10));
	}

    return 0;
}

