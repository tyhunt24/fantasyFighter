//
// Created by Jeffrey Hunt on 3/29/21.
//

#include "UserPlayer.h"


UserPlayer::UserPlayer(string n, Weapon cw, int c, int hp) : Character(n, cw, c, hp) {
    n = n;
    currentWeapon = cw;
}

void UserPlayer::attack(Character& p) {
    p.healthPoints = p.healthPoints - weapon.getDamage();
    cout << p.getName() << " health is at " << p.healthPoints << endl;
}

UserPlayer::UserPlayer() {

}

void UserPlayer::addWeapon(Weapon weapon) {
    userWeapon.push_back(weapon);
}

Weapon UserPlayer::getCurrentWeapon(int i) {
  currentWeapon = userWeapon[i];
  return currentWeapon;
}

void UserPlayer::viewUserWeapon() {
    for(int i = 0; i < userWeapon.size(); i++) {
        cout << userWeapon[i].getName() << endl;
    }
}



