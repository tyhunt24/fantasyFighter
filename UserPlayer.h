//
// Created by Jeffrey Hunt on 3/29/21.
//

#ifndef FANTASYFIGHTER_USERPLAYER_H
#define FANTASYFIGHTER_USERPLAYER_H
using namespace std;
#include <string>
#include "Weapon.h"
#include "Armor.h"


class UserPlayer {
private:
    string name;
    int money;
    Weapon weapon;
    Armor armor;
public:
    UserPlayer();
    void setMoney();
    int getMoney();
    void setWeapon(Weapon w);
    Weapon getWeapon();
    void setArmour();
    Armor getArmour();
    void attack();

};


#endif //FANTASYFIGHTER_USERPLAYER_H
