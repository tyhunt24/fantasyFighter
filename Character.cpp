//
// Created by Jeffrey Hunt on 3/24/21.
//

#include "Character.h"

Character::Character() {

}

Character::Character(string n, Weapon cw, int c, int hp): weapon(cw) {
    Name = n;
    weapon = cw;
    cash = c;
    healthPoints = hp;
}

void Character::setWeapon(Weapon w) {
    weapon = w;
}

Weapon Character::getWeapon() {
    return weapon;
}

void Character::setCash(int c) {
    cash = c;
}

int Character::getCash() {
    return cash;
}

void Character::setHealth(int hp) {
    healthPoints = hp;
}

int Character::getHealth() const {
    return healthPoints;
}

void Character::setName(string name) {
    Name = name;
}

string Character::getName() {
    return Name;
}

void Character::attack(Character* target) {
    target->setHealth(target->healthPoints-=weapon.getDamage());
    if(target->getHealth() < 0) {
        target->setHealth(0);
    }

    if(getHealth() < 0) {
        setHealth(0);
    }
    cout << target->getName()  << " health is at " << target->healthPoints << endl;

}



void Character::showCharacterMenu() {
    cout << "Player Name:" << getName() << " Weapon:" << getWeapon().getName() << " Cash:" << getCash() << " Health: " << getHealth();
}



