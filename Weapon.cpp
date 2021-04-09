//
// Created by Jeffrey Hunt on 3/29/21.
//

#include "Weapon.h"

Weapon::Weapon(string name, int damage, int price, int id) {
    Name = name;
    Damage = damage;
    Price = price;
    Id = id;
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


