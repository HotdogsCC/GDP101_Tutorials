#include "GameObject.h"
#include <iostream>
using namespace std;

GameObject::GameObject(int newint)
{
	someInt = newint;
	cout << "Calling game object constructor\n";
}

GameObject::~GameObject()
{
	cout << "calling destructor, goodbye world\n";
}

void GameObject::update(float deltaTime)
{
	cout << "calling update\n";
}
void GameObject::render()
{
	cout << "calling render\n";
}

void GameObject::utilityFunction() 
{
	cout << "some util\n";
}
