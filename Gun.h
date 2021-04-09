//
// Created by Jeffrey Hunt on 3/29/21.
//

#ifndef FANTASYFIGHTER_GUN_H
#define FANTASYFIGHTER_GUN_H
#include "Weapon.h"


class Gun : public Weapon{
private:
    int Ammo;
public:
    Gun(string name, int damage, int price, int ammo, int id);
    void setAmmo(int a);
    int getAmmo();
};


#endif //FANTASYFIGHTER_GUN_H
