//
// Created by Jeffrey Hunt on 3/29/21.
//

#include "Weapon.h"

Weapon::Weapon(string name, int damage, int price) {
    Name = name;
    Damage = damage;
    Price = price;
}

void Weapon::setName(string n) {
    Name = n;
}

string Weapon::getName() {
    return Name;
}

void Weapon::setDamage(int d) {
    Damage = d;
}

int Weapon::getDamage() const {
    return Damage;
}

void Weapon::setPrice(int p) {
Price = p;
}

int Weapon::getPrice() const {
    return Price;
}

Weapon::Weapon() {
}


