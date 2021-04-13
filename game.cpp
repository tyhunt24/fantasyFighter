//
// Created by Jeffrey Hunt on 4/13/21.
//

#include "game.h"

game::game() {
    Weapon knife("knife", 10, 0, 1);
    player1 = new UserPlayer("Player", knife, 30, 50);
    enemy1 = new EnemyPlayer("enemy", knife, 20, 50);
}


void game::playerWeapons() {
Weapon* w = store.purchase();

if(player1->getCash() > w->getPrice()) {
    player1->setWeapon(*w);
}

cout << player1->getWeapon().getName() << endl;
}

void game::fight() {
    while (player1->healthPoints > 0 && enemy1->healthPoints > 0) {
        int i = 50;
        i--;
        player1->setHealth(i);
        cout << player1->getHealth() << endl;
        }
    }




