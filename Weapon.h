//
// Created by Jeffrey Hunt on 3/29/21.
//

#ifndef FANTASYFIGHTER_WEAPON_H
#define FANTASYFIGHTER_WEAPON_H
#include <string>
#include <vector>
using namespace std;

class Weapon {
protected:
    string Name;
    int Price;
    int Damage;
public:
    Weapon();
    Weapon(string name, int damage, int price, int id);
    int Id;
    void setName(string n);
    string getName();
    void setDamage(int d);
    int getDamage() const;
    void setPrice(int p);
    int getPrice() const;

};


#endif //FANTASYFIGHTER_WEAPON_H
