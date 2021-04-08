//
// Created by Jeffrey Hunt on 3/29/21.
//

#ifndef FANTASYFIGHTER_USERPLAYER_H
#define FANTASYFIGHTER_USERPLAYER_H
using namespace std;
#include <iostream>
#include <string>
#include "Weapon.h"
#include "Armor.h"
#include "Character.h"


//UserPlayer class
class UserPlayer: public Character{
public:
    UserPlayer(string n, Weapon cw, int c, int hp);
    void attack(Character& e);
};


#endif //FANTASYFIGHTER_USERPLAYER_H
