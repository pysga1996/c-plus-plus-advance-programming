#include <iostream>

void ex6() {
    // C1
//    int a, n;
//    cin >> a >> n;
//    if ((a & (1 << (n - 1))) == 0) {
//        cout << 0;
//    } else {
//        cout << 1;
//    }
    using namespace std;
    int a, n;
    cout << "Enter a and n: " << endl;
    cin >> a >> n;
    cout << (1 & (a >> (n - 1)));
}