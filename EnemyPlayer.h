//
// Created by Jeffrey Hunt on 3/29/21.
//

#ifndef FANTASYFIGHTER_ENEMYPLAYER_H
#define FANTASYFIGHTER_ENEMYPLAYER_H
#include <iostream>
#include "Character.h"
#include <vector>

class EnemyPlayer: public Character {
private:
    vector<EnemyPlayer> enemies;
public:
    EnemyPlayer();
    EnemyPlayer(string n, Weapon cw, int c, int hp);
    void attack(Character& p);
    void showMenu();
    void addEnemies();
};


#endif //FANTASYFIGHTER_ENEMYPLAYER_H
