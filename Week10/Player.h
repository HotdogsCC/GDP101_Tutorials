#pragma once
#include "GameObject.h"
class Player : public GameObject
{
public:
	Player(float health);
	void update(float deltaTime) override;
private:
	float health;
};

