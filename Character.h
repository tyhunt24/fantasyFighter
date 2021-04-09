//
// Created by Jeffrey Hunt on 3/24/21.
//

#ifndef FANTASYFIGHTER_CHARACTER_H
#define FANTASYFIGHTER_CHARACTER_H
#include <string>
#include "Weapon.h"

using namespace std;

class Character {
protected:
    string Name;
    Weapon weapon;
    int cash;

public:
    Character();
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


};


#endif //FANTASYFIGHTER_CHARACTER_H
