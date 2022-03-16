#include <iostream>

namespace bit_manipulation {

    void ex3() {
        using namespace std;
        int a;
        cout << "Enter number to shift bit to the right: " << endl;
        cin >> a;
        cout << "answer = " << (a >> 1) << endl;
    }
}
