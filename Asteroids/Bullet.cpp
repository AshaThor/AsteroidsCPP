#include "Bullet.h"

#include "Spaceship.h"

Bullet::Bullet(float rotationInDegrees, sf::Vector2f location)
{
	setOrigin(5.f, 2.5f);

	setFillColor(sf::Color::Black);
	setOutlineThickness(2);
	setOutlineColor(sf::Color::White);
	setPosition(400.f, 300.f);
	//setRotation(rotationInDegrees);
	//move(location);
}

void Bullet::draw(sf::RenderTarget & target, sf::RenderStates states) const {
	sf::Vertex line[] = {
		sf::Vertex(getPosition()),
		sf::Vertex(getPosition() + (direction * 5.0f))
	};
	target.draw(line, 2, sf::Lines, states);
}