
#include <SFML/Graphics.hpp>

#include "Bullet.h"
#include "Spaceship.h"




int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode(800, 600), "Simple Game", sf::Style::Close, settings);
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
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
            Bullet bullet = Bullet(player.getRotation(), player.getPosition());
            window.draw(bullet);
        }
        // Do I pass the window from here to the bullet for magical happiness?
        
        window.draw(player);
        window.display();
    }

    return 0;
}