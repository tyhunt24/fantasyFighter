//
// Created by Jeffrey Hunt on 3/24/21.
//

#ifndef FANTASYFIGHTER_CHARACTER_H
#define FANTASYFIGHTER_CHARACTER_H
#include <String>
#include "Weapon.h"
#include "Armor.h"

using namespace std;

class Character {
private:
    string name;
    Weapon currentWeapon;
    Armor armor;
    int money;
    int wins;
    int losses;
public:
    string getName(string name);
    Weapon getWeapon();


};


#endif //FANTASYFIGHTER_CHARACTER_H
