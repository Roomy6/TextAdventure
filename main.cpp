#include <SFML/Graphics.hpp>

// Switched from console app to GUI (this is going to be a challenge)

int main()
{
    sf::RenderWindow window(sf::VideoMode(700, 500), "My Program");
    window.setFramerateLimit(20);

    sf::Font block;
    block.loadFromFile("RES\\FONT\\Blocko.ttf");

    sf::Text text;
    text.setFont(block);
    text.setString("Hello, World!");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) window.close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            {
                text.setString("You have pressed the escape key.");
            }

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            {
                // left key is pressed: move our character
                text.move(5.f, 0.f);
            }

        }

        window.clear();
        window.draw(text);
        window.display();
    }

    return 0;
}