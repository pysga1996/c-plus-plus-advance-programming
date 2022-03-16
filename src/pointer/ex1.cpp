#include <iostream>

namespace pointer {

    void ex1() {
        using namespace std;
        int a = 5;
        int* p;
        p = &a;
        *p = 20;
        cout << "Value of a: " << a << endl;
        cout << "Address of a (in hexadecimal): " << p << endl;
        cout << "Address of a (in decimal): " << (long long) &a << endl;
    }
}

