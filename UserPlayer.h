//
// Created by Jeffrey Hunt on 3/29/21.
//

#ifndef FANTASYFIGHTER_USERPLAYER_H
#define FANTASYFIGHTER_USERPLAYER_H
using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include "Weapon.h"
#include "Character.h"


//UserPlayer class
class UserPlayer: public Character{
protected:
    vector<Weapon> userWeapon;
    Weapon currentWeapon;
public:
    UserPlayer();
    UserPlayer(string n, Weapon cw, int c, int hp);
    void attack(Character& e);
    void addWeapon(Weapon weapon);
    Weapon getCurrentWeapon(int i);
    void viewUserWeapon();
};


#endif //FANTASYFIGHTER_USERPLAYER_H
