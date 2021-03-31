//
// Created by Jeffrey Hunt on 3/29/21.
//

#ifndef FANTASYFIGHTER_USERPLAYER_H
#define FANTASYFIGHTER_USERPLAYER_H
using namespace std;
#include <string>
#include "Weapon.h"
#include "Armor.h"
#include "Character.h"

class UserPlayer: public Character{
private:
    int money;
public:
    UserPlayer(int m);
    void setMoney(int m);
    int getMoney();

};


#endif //FANTASYFIGHTER_USERPLAYER_H
