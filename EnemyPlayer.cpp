//
// Created by Jeffrey Hunt on 3/29/21.
//

#include "EnemyPlayer.h"

EnemyPlayer::EnemyPlayer(string n, Weapon cw, int c, int hp) : Character(n, cw, c, hp)  {

}

void EnemyPlayer::addEnemies() {
    Weapon teeth = Weapon("teeth", 50, -1, 0);
    Weapon sword = Weapon("sword", 70, -1, 0);
    Weapon eyes = Weapon("eyes", 100, -1, 0);
    Weapon snap = Weapon("thanos", 200, -1, 0);

    EnemyPlayer Vampire = EnemyPlayer("Vampire", teeth, 50, 25);
    EnemyPlayer Barbarian = EnemyPlayer("Barbarian", sword, 100, 50);
    EnemyPlayer Medusa = EnemyPlayer("Medusa", eyes, 150, 100);
    EnemyPlayer Thanos = EnemyPlayer("Thanos", snap, 200, 200);

    enemies.push_back(Vampire);
    enemies.push_back(Barbarian);
    enemies.push_back(Medusa);
    enemies.push_back(Thanos);
}

void EnemyPlayer::showMenu() {
    addEnemies();

    for(int i =0; i < enemies.size(); i++) {
        cout << "Name:" << enemies[i].getName() << " Weapon:" << enemies[i].getWeapon().getName() << " Cash:" <<
        enemies[i].getCash() << " Health:" << enemies[i].getHealth() << endl;
    }
}

Character *EnemyPlayer::getEnemy(int level) {
    if(level >= enemies.size()) {
        return nullptr;
    }
    return &(enemies[level]);
}




