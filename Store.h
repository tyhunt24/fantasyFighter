//
// Created by Jeffrey Hunt on 3/29/21.
//

#ifndef FANTASYFIGHTER_STORE_H
#define FANTASYFIGHTER_STORE_H
#include <vector>
#include <iostream>
#include "Weapon.h"
#include "Gun.h"
#include "Sword.h"
# include "UserPlayer.h"

class Store {
protected:
public:
    Store() {createWeapons();}
    void createWeapons();
    void showMenu();
    Weapon* purchase();
    vector<Weapon> weapons;
};


#endif //FANTASYFIGHTER_STORE_H
