#include <iostream>
#include <String>
#include <sstream>
#include <SFML\Graphics.hpp>

const unsigned int WIDTH = 900, HEIGHT = 800;

int main() {
	sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Text Adventure | By Roomy");
	sf::Event event;

	//CIRCLE (stole this code from somewhere)
	sf::CircleShape circle;
	circle.setPosition(100.f, 100.f);
	circle.setRadius(150.f);

	bool colorUp = true;
	float colorValue = 0;

	//FONT
	sf::Font font;
	font.loadFromFile("RES\\FONT\\Blocko.ttf");

	//TEXT
	sf::Text text;
	text.setPosition(0, 0);
	text.setFont(font);
	text.setFillColor(sf::Color::White);
	text.setCharacterSize(10);

	//CLOCK, sf::clock starts on creation, has useful member funtions for keeping track of time
	sf::Clock gameClock;


	//GAME LOOP
	while (window.isOpen()) {

		while (window.pollEvent(event))
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				window.close();

		text.setString("Time: " + std::to_string(gameClock.getElapsedTime().asSeconds()));

		//text.setString("Hello, World!");
		//text.setPosition(sf::Vector2f{ window.getSize() / 2u }); // smart way of Width Height / 2)

		//Fade out circle
		colorValue += colorUp ? 0.1f : -0.1f;
		colorUp = (colorValue < 0.0f || colorValue > 255.f ? !colorUp : colorUp);
		circle.setFillColor(sf::Color((int)colorValue, (int)colorValue, (int)colorValue, 255));

		//DRAW HERE ---------------------------------------------------------------------------
		window.clear(sf::Color::Black); //clear screen with color

		//draw shapes
		window.draw(circle);
		window.draw(text);

		window.display();
	}
}