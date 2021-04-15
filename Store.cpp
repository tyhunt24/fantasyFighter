//
// Created by Jeffrey Hunt on 3/29/21.
//

#include "Store.h"

//Sword kitchenKnife = Sword("Kitchen Knife", 10, -1, 1);
//UserPlayer player1 = UserPlayer("Jeff", kitchenKnife, 100, 100);

void Store::createWeapons() {
    // create all weapons that will be in the game
    Sword samuraiSword = Sword("Samurai Sword", 50, 70, 0);
    Sword khopeshSword = Sword("Khopesh Sword", 150, 175, 1 );
    Gun glock = Gun("Glock", 30, 50, 30, 2);
    Gun m16 = Gun("M16", 70, 100, 50, 3);
    Gun pkm = Gun("Pkm", 100, 200, 100, 4);

    //put all of the weapons into the store
    weapons.push_back(samuraiSword);
    weapons.push_back(khopeshSword);
    weapons.push_back(glock);
    weapons.push_back(m16);
    weapons.push_back(pkm);
}

void Store::showMenu() {
    for (int i = 0; i < weapons.size(); i++) {
        cout <<"ID: " << weapons[i].Id << " Name:" << weapons[i].getName() << " Price:" << weapons[i].getPrice() << " Damage:"
             << weapons[i].getDamage() << endl;
        cout << " " << endl;
    }
}
// todo: figure out how purchase the weapon.
Weapon* Store::purchase() {
        showMenu();
        int choice;
        cout << "Buy a new weapon: ";
        cin >> choice;
        return &(weapons[choice]);
}






