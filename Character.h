//
// Created by Jeffrey Hunt on 3/24/21.
//

#ifndef FANTASYFIGHTER_CHARACTER_H
#define FANTASYFIGHTER_CHARACTER_H
#include <string>
#include "Weapon.h"
#include <iostream>

using namespace std;

class Character {
protected:
    string Name;
    int cash;
    Weapon weapon;

public:
    Character(string n, Weapon cw, int c, int hp);
    void setWeapon(Weapon w);
    Weapon getWeapon();
    void setName(string name);
    string getName();
    void setCash(int c);
    int getCash();
    void setHealth(int hp);
    int getHealth() const;
    int healthPoints;
    void attack(Character c);
};


#endif //FANTASYFIGHTER_CHARACTER_H
