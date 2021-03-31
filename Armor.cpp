//
// Created by Jeffrey Hunt on 3/29/21.
//

#include "Armor.h"

Armor::Armor(string name, int hp, int price) {
    Name = name;
    HealthPoints = hp;
    Price = price;
}

void Armor::setPrice(int p) {
Price = p;
}

int Armor::getPrice() const {
    return Price;
}

void Armor::setHealthPoints(int hp) {
    HealthPoints = hp;
}

int Armor::getHealthPoints() {
    return HealthPoints;
}

void Armor::setName(string n) {
    Name = n;
}

string Armor::getName() {
    return Name;
}




