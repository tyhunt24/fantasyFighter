//
// Created by Jeffrey Hunt on 3/29/21.
//

#ifndef FANTASYFIGHTER_STORE_H
#define FANTASYFIGHTER_STORE_H
#include <vector>
#include <iostream>
#include "Weapon.h"
#include "Armor.h"
#include "Gun.h"

class Store {
private:
    vector<Weapon> weapons;
    vector<Armor> armors;
public:
    void addWeapon();
    void showMenu();
};


#endif //FANTASYFIGHTER_STORE_H
