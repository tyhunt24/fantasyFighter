//
// Created by Jeffrey Hunt on 3/29/21.
//

#ifndef FANTASYFIGHTER_ARMOR_H
#define FANTASYFIGHTER_ARMOR_H
#include <string>
using namespace std;


class Armor {
private:
    string Name;
    int HealthPoints;
    int Price;
public:
    Armor(string name, int hp, int price);
    void setName(string n);
    string getName();
    void setHealthPoints(int hp);
    int getHealthPoints();
    void setPrice(int p);
    int getPrice() const;
};


#endif //FANTASYFIGHTER_ARMOR_H
