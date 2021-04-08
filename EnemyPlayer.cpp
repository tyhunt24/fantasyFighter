//
// Created by Jeffrey Hunt on 3/29/21.
//

#include "EnemyPlayer.h"

EnemyPlayer::EnemyPlayer(string n, Weapon cw, int c, int hp) : Character(n, cw, c, hp)  {
    n = n;
    cw = cw;
}

void EnemyPlayer::attack(Character& p) {
    p.healthPoints = p.healthPoints - weapon.getDamage();
    cout << p.getName() << " health is at " << p.healthPoints << endl;
}

