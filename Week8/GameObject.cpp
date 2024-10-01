#include "GameObject.h"

void GameObject::initialize(const Vector2D& _position, const Vector2D& _velocity)
{
	position = _position;
	velocity = _velocity;
}

void GameObject::update(float deltaTime)
{
	position.x += velocity.x;
	position.y += velocity.y;
}

GameObject::GameObject()
{
	position = {};
	velocity = {};
}

GameObject::GameObject(Vector2D _position, Vector2D _velocity)
{
	position = _position;
	velocity = _velocity;
}