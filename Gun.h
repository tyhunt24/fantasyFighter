//
// Created by Jeffrey Hunt on 3/29/21.
//

#ifndef FANTASYFIGHTER_GUN_H
#define FANTASYFIGHTER_GUN_H
#include "Weapon.h"
using namespace std;


class Gun: public Weapon{
private:
    string name;
    int price;
    int damage;
    int ammo;

public:
    void setDamage(int d);
    int getDamage();
};


#endif //FANTASYFIGHTER_GUN_H
