#include <iostream>

void ex4() {
    using namespace std;
    int n;
    cout << "Enter n to count 2^n: " << endl;
    cin >> n;
    cout << (1 << n);
}