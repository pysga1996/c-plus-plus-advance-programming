#include <iostream>

namespace bit_manipulation {

    void ex7() {
        using namespace std;
        int a;
        cout << "Enter number to change 4th bit from right to left: " << endl;
        cin >> a;
        a = a & (~(1 << (4 - 1)));
        cout << a << endl;

        // C2
//    int a;
//    cin >> a;
//    if(1 & (a >> 3)){
//        cout << (a - (1 << (4 - 1)));
//    } else{
//        cout << a;
//    }
    }
}
