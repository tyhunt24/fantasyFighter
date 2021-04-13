//
// Created by Jeffrey Hunt on 4/13/21.
//

#ifndef FANTASYFIGHTER_GAME_H
#define FANTASYFIGHTER_GAME_H
#include <random>
#include "EnemyPlayer.h"
#include "UserPlayer.h"
#include "Store.h"
#include "Weapon.h"

class game {
protected:
    Character* player1;
    Character* enemy1;
    Store store;
    int level;
public:
    game();
    void playerWeapons();
    void fight();
};


#endif //FANTASYFIGHTER_GAME_H
