//
// Created by Jeffrey Hunt on 3/29/21.
//

#include "Store.h"

//Sword kitchenKnife = Sword("Kitchen Knife", 10, -1, 1);
//UserPlayer player1 = UserPlayer("Jeff", kitchenKnife, 100, 100);

void Store::addWeapon() {
    // create all weapons that will be in the game
    Sword samuraiSword = Sword("Samurai Sword", 50, 70, 2);
    Sword khopeshSword = Sword("Khopesh Sword", 150, 175, 3 );
    Gun glock = Gun("Glock", 30, 50, 30, 4);
    Gun m16 = Gun("M16", 70, 100, 50, 5);
    Gun pkm = Gun("Pkm", 100, 200, 100, 6);

    //put all of the weapons into the store
    weapons.push_back(samuraiSword);
    weapons.push_back(khopeshSword);
    weapons.push_back(glock);
    weapons.push_back(m16);
    weapons.push_back(pkm);
}

void Store::showMenu() {
    addWeapon();
    for (int i = 0; i < weapons.size(); i++) {
        cout <<"ID: " << weapons[i].Id << " Name:" << weapons[i].getName() << " Price:" << weapons[i].getPrice() << " Damage:"
             << weapons[i].getDamage() << endl;
        cout << " " << endl;
    }
}

void Store::purchase() {
    int buy;
    addWeapon();

   cout << "Which weapon would you like to buy: " << endl;
   cin >> buy;


    if (buy == 1 && player1.getCash() > weapons[1].getPrice()) {
        player1.setWeapon(weapons[1]);
    } else if(buy == 2 && player1.getCash() > weapons[2].getPrice()) {
        player1.setWeapon(weapons[2]);
    } else if(buy == 3 && player1.getCash() > weapons[3].getPrice()) {
        player1.setWeapon(weapons[3]);
    }
}
