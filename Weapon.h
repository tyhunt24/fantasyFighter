//
// Created by Jeffrey Hunt on 3/29/21.
//

#ifndef FANTASYFIGHTER_WEAPON_H
#define FANTASYFIGHTER_WEAPON_H
#include <string>
#include <vector>
#include "Gun.h"
using namespace std;

class Weapon {
private:
    string name;
    int price;
public:
    void setPrice(int m);
    int getPrice();

};


#endif //FANTASYFIGHTER_WEAPON_H
