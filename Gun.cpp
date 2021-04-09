//
// Created by Jeffrey Hunt on 3/29/21.
//

#include "Gun.h"


Gun::Gun(string name, int damage, int price, int ammo, int id) : Weapon(name, damage, price, id) {
Ammo=ammo;
}

void Gun::setAmmo(int a) {
Ammo=a;
}

int Gun::getAmmo() {
    return Ammo;
}
