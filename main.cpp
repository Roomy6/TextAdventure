#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "My Program");
    window.setFramerateLimit(60);

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

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();

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