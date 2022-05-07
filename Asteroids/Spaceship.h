#pragma once
#include <SFML/Graphics.hpp>
#include "Spaceship.h"
#define _USE_MATH_DEFINES
#include <math.h>
class Spaceship : public sf::ConvexShape{
	public:
		Spaceship();
		void checkBounds();
		void movement(sf::Event event);
};