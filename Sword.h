//
// Created by Jeffrey Hunt on 3/29/21.
//

#ifndef FANTASYFIGHTER_SWORD_H
#define FANTASYFIGHTER_SWORD_H
#include <string>
#include "Weapon.h"


class Sword: public Weapon {
private:
    string name;
    int damage;

public:
    void setDamage(int d);
    int getDamage();
};


#endif //FANTASYFIGHTER_SWORD_H
