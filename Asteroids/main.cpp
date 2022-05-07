
#include <SFML/Graphics.hpp>
#include "Spaceship.h"
#include "Movement.h"


int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Simple Game", sf::Style::Close);
    sf::RectangleShape rectangle(sf::Vector2f(200.f, 300.f));
    rectangle.setSize(sf::Vector2f(100.f,100.f));
    Spaceship player = Spaceship();

    //Main Game loop 
    while (window.isOpen())
    {
        //Looking for events
        sf::Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        player.movement(event);
        window.clear(sf::Color::Black);
        window.draw(player);
        window.display();
    }

    return 0;
}