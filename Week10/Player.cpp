#include "Player.h"
#include <iostream>

void Player::update(float deltaTime)
{
	std::cout << "overwritten update method\n";
}

Player::Player(float health)
{
	std::cout << "player object constructor";
}