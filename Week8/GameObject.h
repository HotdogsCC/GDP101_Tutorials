#pragma once
struct Vector2D
{
	float x;
	float y;
};
class GameObject
{
private:
	Vector2D position = { 0,0 };
	Vector2D velocity = { 0,0 };
public:
	void initialize(const Vector2D& _position, const Vector2D& _velocity);

	void update(float deltaTime);
	GameObject();
	GameObject(Vector2D position, Vector2D velocity);
};

