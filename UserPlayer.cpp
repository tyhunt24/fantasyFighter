//
// Created by Jeffrey Hunt on 3/29/21.
//

#include "UserPlayer.h"


UserPlayer::UserPlayer(string n, Weapon cw, int c, int hp) : Character(n, cw, c, hp) {
    n = n;
    cw = cw;
}

void UserPlayer::attack(Character& p) {
    p.healthPoints = p.healthPoints - weapon.getDamage();
    cout << p.getName() << " health is at " << p.healthPoints << endl;
}
