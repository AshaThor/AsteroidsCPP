#include "Bullet.h"

#include "Spaceship.h"

Bullet::Bullet(float rotationInDegrees, sf::Vector2f location)
{
	sf::Vector2f(5.0f, 5.0f);
	setFillColor(sf::Color::White);
	setRotation(rotationInDegrees);
	move(location);
	Draw();
}
void Bullet::Draw()
{
	
}