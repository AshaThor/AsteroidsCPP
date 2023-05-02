#pragma once
#include <SFML/Graphics/RectangleShape.hpp>

#include "Spaceship.h"

class Bullet : public sf::RectangleShape
{
public:
	Bullet(float rotationInDegrees, sf::Vector2f location);
	void draw(sf::RenderTarget target, sf::RenderStates states) const;
};
