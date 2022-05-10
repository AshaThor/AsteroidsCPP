#include <SFML/Graphics.hpp>
#include "Spaceship.h"
#define _USE_MATH_DEFINES
#include <math.h>

#include "Bullet.h"

Spaceship::Spaceship()
{
	setPointCount(3);
	setPoint(0, sf::Vector2f(5.f, 0.f));
	setPoint(1, sf::Vector2f(10.f, 10.f));
	setPoint(2, sf::Vector2f(0.f, 10.f));
	
	
	setOrigin(5.f, 2.5f);

	setFillColor(sf::Color::Black);
	setOutlineThickness(2);
	setOutlineColor(sf::Color::White);
	setPosition(400.f, 300.f);
}
void Spaceship::checkBounds()
{
    if (getPosition().x < -10.0f)
    {
        setPosition(800, getPosition().y);
    }
    if (getPosition().y < -10)
    {
        setPosition(getPosition().x, 600);
    }
    if (getPosition().x > 810)
    {
        setPosition(0, getPosition().y);
    }
    if (getPosition().y > 600)
    {
        setPosition(getPosition().x, 0);
    }
    
}

void Spaceship::movement(sf::Event event)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
	    float radians = M_PI / 180 * getRotation();
        float y = 0.05f * -cos(radians);
        float x = 0.05f * sin(radians);
        move(x, y);
        checkBounds();
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        rotate(-0.05f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        move(0.f, 0.1f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        rotate(0.05f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        Bullet bullet = Bullet(getRotation(), getPosition());
    }
}




