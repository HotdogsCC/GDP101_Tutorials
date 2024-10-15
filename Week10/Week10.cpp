#include "GameObject.h"
#include "Player.h"
#include <iostream>

void demoInheritance()
{
    //GameObject myGameObject;
    //myGameObject.update(0.1f);
    //myGameObject.render();
    Player player(1);
    player.update(0.1f);
    player.render();

}

int main()
{
    demoInheritance();
}

