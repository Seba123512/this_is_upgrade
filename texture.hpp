#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class Texture
{
	private:

		const static short amount = 4;
	public:
		
		sf::Texture textures_pit[amount];
		Texture();
};
