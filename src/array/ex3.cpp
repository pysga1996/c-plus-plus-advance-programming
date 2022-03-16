#include <iostream>

namespace array_exercise {

    void ex3() {
        using namespace std;
        int arr[] = {1, 2, 3, 4, 5};
        int *p = &arr[0];
        cout << "Address of array's element index 0: " << (long long) p << endl;
        cout << "Address of array's element index 3: " << (long long) (p + 3) << endl;
    }

}
