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
    string Name;
    Weapon CurrentWeapon;
    Armor CurrentArmor;
    int Money;
public:
    Character(string name, Weapon cw, Armor ca, int m);
    void attack();
};


#endif //FANTASYFIGHTER_CHARACTER_H
