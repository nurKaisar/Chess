#pragma once

#include"stdafh.h"

class Bishop
{
public:
	sf::Texture texture;
	sf::Sprite bishop;

	Bishop(const bool white);
	Bishop();
	~Bishop();

	const sf::Vector2f getPositon();
	void setPosition(sf::Vector2f pos);
	void render(sf::RenderWindow* window);

	const bool getGlobalBounds(sf::Vector2f pos);
};

