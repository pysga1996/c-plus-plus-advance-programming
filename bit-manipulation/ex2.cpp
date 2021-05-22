#include <iostream>

void ex2() {
    using namespace std;
    int a;
    cout << "Enter a number: " << endl;
    cin >> a;
    if (a & 1) {
        cout << "a is an odd number" << endl;
    } else {
        cout << "a is an even number" << endl;
    }
}