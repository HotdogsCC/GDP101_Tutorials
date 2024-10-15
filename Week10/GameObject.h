#pragma once


class GameObject
{
public:
	GameObject(int newint);
	~GameObject();
	virtual void update(float deltaTime);
	void render();

protected:
	void utilityFunction();

private:
	int Id;
};

