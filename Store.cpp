//
// Created by Jeffrey Hunt on 3/29/21.
//

#include "Store.h"

//Sword kitchenKnife = Sword("Kitchen Knife", 10, -1, 1);
//UserPlayer player1 = UserPlayer("Jeff", kitchenKnife, 100, 100);

void Store::createWeapons() {
    // create all weapons that will be in the game
    Sword samuraiSword = Sword("samuraiSword", 50, 70);
    Sword khopeshSword = Sword("khopeshSword", 150, 175);
    Gun glock = Gun("glock", 30, 50, 30);
    Gun m16 = Gun("m16", 70, 100, 50);
    Gun pkm = Gun("pkm", 100, 200, 100);

    //put all of the weapons into the store
    weapons.push_back(samuraiSword);
    weapons.push_back(khopeshSword);
    weapons.push_back(glock);
    weapons.push_back(m16);
    weapons.push_back(pkm);
}

void Store::showMenu() {
    for (int i = 0; i < weapons.size(); i++) {
        cout <<"Pick: " << i << " Name:" << weapons[i].getName() << " Price:" << weapons[i].getPrice() << " Damage:"
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






