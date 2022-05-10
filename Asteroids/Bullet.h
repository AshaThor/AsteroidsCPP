#pragma once
#include <SFML/Graphics/RectangleShape.hpp>

#include "Spaceship.h"

class Bullet : public sf::RectangleShape
{
public:
	Bullet(float rotationInDegrees, sf::Vector2f location);
	void Draw();
};
