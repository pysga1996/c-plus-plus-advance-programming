#include <iostream>

namespace bit_manipulation {

    void ex1() {
        using namespace std;
        int a, b;
        cout << "Enter a, b: " << endl;
        cin >> a >> b;
        cout << (a | b) + (a & b) << endl;
    }
}

