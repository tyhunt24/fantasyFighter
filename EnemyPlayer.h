//
// Created by Jeffrey Hunt on 3/29/21.
//

#ifndef FANTASYFIGHTER_ENEMYPLAYER_H
#define FANTASYFIGHTER_ENEMYPLAYER_H
#include <iostream>
#include "Character.h"


class EnemyPlayer: public Character {
private:
public:
    EnemyPlayer(string n, Weapon cw, int c, int hp);
    void attack(Character& p);
};


#endif //FANTASYFIGHTER_ENEMYPLAYER_H
