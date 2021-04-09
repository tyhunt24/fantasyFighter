//
// Created by Jeffrey Hunt on 3/29/21.
//

#include "Store.h"

void Store::addWeapon() {
    // create all weapons that will be in the game
    Sword kitchenKnife = Sword("Kitchen Knife", 10, -1);
    Sword samuraiSword = Sword("Samurai Sword", 50, 70);
    Sword khopeshSword = Sword("KhopeshSword", 150, 175);
    Gun glock = Gun("Glock", 30, 50, 30);
    Gun m16 = Gun("M16", 70, 100, 50);
    Gun pkm = Gun("Pkm", 100, 200, 100);

    //put all of the weapons into the store
    weapons.push_back(kitchenKnife);
    weapons.push_back(samuraiSword);
    weapons.push_back(khopeshSword);
    weapons.push_back(glock);
    weapons.push_back(m16);
    weapons.push_back(pkm);
}

void Store::showMenu() {
    addWeapon();
    for (int i = 0; i < weapons.size(); i++) {
        cout << " Name: " << weapons[i].getName() << " Price: " << weapons[i].getPrice() << " Damage: "
             << weapons[i].getDamage() << endl;
        cout << " " << endl;
    }
}
