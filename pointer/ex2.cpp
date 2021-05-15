#include <iostream>

void ex2() {
    using namespace std;
    int a = 7;
    cout << "Initial value of a: " << a << endl;
    *(&a) += 1;
    cout << "After modifying a via pointer: " << a << endl;
}