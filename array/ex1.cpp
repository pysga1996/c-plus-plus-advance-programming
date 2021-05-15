#include <iostream>

int getMaxValue(int* p, int n) {
    int max = p[0];
    for (int i = 0; i < n; i++) {
        if (p[i] > max) {
            max = p[i];
        }
    }
    return max;
}

int ex1() {
    using namespace std;
    int n;
    cout << "Enter number of elements in array: " << endl;
    cin >> n;
    int* arr = new int [n];
    for (int i = 0; i < n; i++) {
        cout << "Enter array's element index " << i << ": " << endl;
        cin >> arr[i];
    }
    cout << "Max value = " << getMaxValue(arr, n) << endl;
    delete [] arr;
    return 0;
}

