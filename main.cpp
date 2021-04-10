#include <iostream>
using namespace std;
#include "Character.h"
#include "Gun.h"
#include "UserPlayer.h"
#include "EnemyPlayer.h"
#include "Sword.h"
#include "Store.h"


int main() {
    Store s;
    EnemyPlayer ep;

    Weapon kitchenKnife = Weapon("knife", 20, 0, 0);
    UserPlayer player = UserPlayer("Jeff", kitchenKnife, 2200, 10);

    s.purchase();

    player.viewUserWeapon();

//    while(true) {
//        cout << "Choose an option: " << endl;
//        cout << "1. Enter the Store " << endl;
//        cout << "2. View the Enemies. " << endl;
//        cout << "3. Fight in the Arena " << endl;
//        cout << "4. View the Characters sheet " << endl;
//
//        int menu;
//        cin >> menu;
//        cin.ignore();
//
//        switch(menu) {
//            case 0:
//                cout << "Thank you goodbye" << endl;
//                // todo: save user status
//                return 0;
//            case 1: {
//                s.showMenu();
//                // todo: Figure out how to purchase weapons
//                break;
//            }
//            case 2: {
//               ep.showMenu();
//               break;
//            }
//            case 3: {
//                // todo: Figure out how to fight
//                cout << "Arena to fight: " << endl;
//                break;
//            }
//            case 4: {
//                // todo: show the character his sheet
//                cout << "Figure out how to show the character his sheet.";
//                break;
//            }
//            default: {
//                cout << "Sorry you did not answer the correct input" << endl;
//                break;
//            }
//
//        }
//    }


    return 0;
}
