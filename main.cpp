#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "My Program");
    window.setFramerateLimit(60);

    sf::Font block;
    block.loadFromFile("RES\\FONT\\Blocko.ttf");

    sf::Text loadText;
    loadText.setFont(block);
    loadText.setString("Hello, World!");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) window.close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();
        }

        window.clear();
        window.draw(loadText);
        window.display();
    }

    return 0;
}