#include "stdafx.h"
#include "TmxLevel.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 600), "TMXLevelRefactoring");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}

			window.clear();
			window.draw(shape);
			window.display();
		}
	}

	return 0;
}