#include <iostream>

void printAndIncrease();

void ex11() {
    for (int i = 0; i < 5; ++i) {
        printAndIncrease();
    }
}

void printAndIncrease() {
    using namespace std;
    static int x;
    cout << "Value of x: " << x << endl;
    x++;
}