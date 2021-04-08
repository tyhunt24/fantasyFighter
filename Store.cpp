//
// Created by Jeffrey Hunt on 3/29/21.
//

#include "Store.h"

void Store::addWeapon() {
    Gun glock = Gun("Glock",20, 10, 40);
    Gun p90 = Gun("p90",50, 100, 80);
    weapons.push_back(glock);
    weapons.push_back(p90);
}

void Store::showMenu() {
    for(int i =0; i < weapons.size(); i++) {
        cout << " Name: " << weapons[i].getName() << " Price: " << weapons[i].getPrice() << " Damage: " << weapons[i].getDamage() << endl;
    }
}
