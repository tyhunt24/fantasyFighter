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
using namespace std;

class game {
protected:
    Character* player1;
    EnemyPlayer* enemy1;
    Store store;
    int level = 0;
public:
    game();
    void playerWeapons();
    void fight();
    int play();
    Character loadPlayer();
    static void saveData(Character * cPtr);

};


#endif //FANTASYFIGHTER_GAME_H
