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
    srand(time(NULL));
        while (player1->getHealth() >= 0 && enemy1->getHealth() >= 0) {

            int v1 = rand() % 2 + 1;
            switch (v1) {
                case 1: {
                    player1->attack(enemy1);
                    break;
                }
                case 2: {
                    enemy1->attack(player1);
                    break;
                }
            }

            if (player1->getHealth() == 0) {
                cout << "You have lost the match" << endl;
                player1->setCash(-10);
                break;
            }
            if (enemy1->getHealth() == 0) {
                cout << "congrats you have won the match" << endl;
                player1->setCash(enemy1->getCash());
                break;
            }

        }
    }




