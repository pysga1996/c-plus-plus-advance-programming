#include<iostream>
#include "main.h"

int main() {
    using namespace std;
    int cmd;
    cout << "Select an exercise:" << endl;
    cin >> cmd;
    switch (cmd) {
        case 1:
            ex1();
            break;
//        case 2:
//            ex2();
//            break;
//        case 3:
//            ex3();
//            break;
//        case 4:
//            ex4();
//            break;
//        case 5:
//            ex5();
//            break;
//        case 6:
//            ex6();
//            break;
//        case 7:
//            ex7();
//            break;
//        case 9:
//            ex9();
//            break;
//        case 10:
//            ex10();
//            break;
//        case 11:
//            ex11();
//            break;
        default:
            cout << "Exit" << endl;
    }
    return 0;
}
