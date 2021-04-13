//
// Created by Jeffrey Hunt on 3/29/21.
//

#ifndef FANTASYFIGHTER_ENEMYPLAYER_H
#define FANTASYFIGHTER_ENEMYPLAYER_H
#include <iostream>
#include "Character.h"
#include <vector>

class EnemyPlayer: public Character {
protected:
    vector<EnemyPlayer> enemies;
public:
    EnemyPlayer(string n, Weapon cw, int c, int hp);
    void showMenu();
    void addEnemies();
    Character* getEnemy(int level);
};


#endif //FANTASYFIGHTER_ENEMYPLAYER_H
