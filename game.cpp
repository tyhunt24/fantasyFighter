//
// Created by Jeffrey Hunt on 4/13/21.
//

#include "game.h"

//Constructor for this function, intial values
game::game() {
    Weapon knife("knife", 10, 0);
    // todo: Change to the enemies to the enemies I have saved in the enemy class.
    enemy1 = new EnemyPlayer("enemy", knife, 20, 50);

    player1 = loadPlayer();
}

// Allow user to buy and set weapon
void game::playerWeapons() {
Weapon* w = store.purchase();

if(player1->getCash() > w->getPrice()) {
    player1->setWeapon(*w);
    player1->setCash(player1->getCash() - w->getPrice());
} else {
    cout << "Sorry you do not have enough cash." << endl;
}

saveData(player1);
}

//Characters fight
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

            if (player1->getHealth() <= 0) {
                cout << "You have lost the match" << endl;
                player1->setCash(player1->getCash() - 10);
                player1->setHealth(50);
                break;
            }
            if (enemy1->getHealth() <= 0) {
                cout << "congrats you have won the match" << endl;
                player1->setCash(player1->getCash() + enemy1->getCash());
                break;
            }
        }
        saveData(player1);
    }

int game::play() {
    cout << "Choose an option: " << endl;
    cout << "0. Exit out of the game." << endl;
    cout << "1. Enter the Store " << endl;
    cout << "2. View the Enemies. " << endl;
    cout << "3. Fight in the Arena " << endl;
    cout << "4. View the Characters sheet " << endl;
    do {
        cout <<" " << endl;
        cout << "What is your pick: ";

        int menu;
        cin >> menu;
        cin.ignore();

        switch (menu) {
            case 0:
                cout << "Thank you goodbye" << endl;
                // todo: save user status
                return 0;
            case 1: {
                playerWeapons();
                break;
            }
            case 2: {
                enemy1->showMenu();
                break;
            }
            case 3: {
                fight();
                break;
            }
            case 4: {
                player1->showCharacterMenu();
                break;
            }
            default: {
                cout << "Sorry you did not answer the correct input" << endl;
                break;
            }

        }
    } while (true);
}


void game::saveData(Character * cPtr) {
    ofstream outFile;
    outFile.open("User.txt");

    outFile << cPtr->getName() << " " << cPtr->getCash() << " " << cPtr->getHealth() << endl;
    outFile << cPtr->getWeapon().getName() << " " << cPtr->getWeapon().getDamage() << ", " << cPtr->getWeapon().getPrice();

    outFile.close();
}

Character *game::loadPlayer() {

    Character *cptr;

    string name;
    // todo: Change this string to a weapon
    Weapon weapon;
    int cash;
    int health;
    string weaponName;
    int damage;
    int price;


    ifstream fin("user.txt");

    if(!fin) {
        cout << "File error";
        exit(1);
    }

    fin >> name >> cash >> health;
    fin >> weaponName >> damage >> price;

    weapon.setName(weaponName);
    weapon.setDamage(damage);
    weapon.setPrice(price);

    cptr = new Character(name, weapon, cash, health);

    return cptr;
}









