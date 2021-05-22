#include <iostream>

namespace array_exercise {

    void ex4() {
        using namespace std;
        short arr[] = { 1, 2, 3, 4, 5, 6, 7, 8};
        short* p = &arr[0];
        cout << "Address of array's element index 0: " << (long long) p << endl;
        cout << "Address of array's element index 5: " << (long long) (p + 5) << endl;
    }
}