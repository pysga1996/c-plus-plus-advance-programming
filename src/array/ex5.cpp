#include <iostream>

namespace array_exercise {

    void ex5() {
        using namespace std;
        int arr[] = {3, 2, 4, 1, 9};
        short *p = (short *) &arr[0];
        cout << "Value at p: " << *p << endl;
        cout << "Value at (p + 4): " << *(p + 4) << endl;
    }
}