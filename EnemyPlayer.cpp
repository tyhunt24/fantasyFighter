//
// Created by Jeffrey Hunt on 3/29/21.
//

#include "EnemyPlayer.h"

EnemyPlayer::EnemyPlayer(string n, Weapon cw, int c, int hp) : Character(n, cw, c, hp)  {
}

// Add Enemies to array
void EnemyPlayer::addEnemies() {
    Weapon teeth = Weapon("teeth", 50, -1);
    Weapon sword = Weapon("sword", 70, -1);
    Weapon eyes = Weapon("eyes", 100, -1);
    Weapon snap = Weapon("thanos", 200, -1);

    EnemyPlayer Vampire = EnemyPlayer("Vampire", teeth, 50, 25);
    EnemyPlayer Barbarian = EnemyPlayer("Barbarian", sword, 100, 50);
    EnemyPlayer Medusa = EnemyPlayer("Medusa", eyes, 150, 100);
    EnemyPlayer Thanos = EnemyPlayer("Thanos", snap, 200, 200);

    enemies.push_back(Vampire);
    enemies.push_back(Barbarian);
    enemies.push_back(Medusa);
    enemies.push_back(Thanos);
}

// Show the enemies
void EnemyPlayer::showMenu() {
    addEnemies();

    for(int i =0; i < enemies.size(); i++) {
        cout << "Name:" << enemies[i].getName() << " Weapon:" << enemies[i].getWeapon().getName() << " Cash:" <<
        enemies[i].getCash() << " Health:" << enemies[i].getHealth() << endl;
    }
}

// todo: Figure out how to add these to the game class
// todo: Figure out the file input output system
EnemyPlayer EnemyPlayer::getEnemy() {
    int i = rand() % enemies.size();

    EnemyPlayer e = enemies[i];

    return e;
}

EnemyPlayer::EnemyPlayer() {

}




