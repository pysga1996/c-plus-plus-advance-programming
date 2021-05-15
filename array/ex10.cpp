#include <iostream>

void resize(int* arr, int newSize);

void ex10() {
    using namespace std;
    int* arr = new int[10];
    resize(arr, 1000);
    for (int i = 0; i < 1000; i++) {
        // access error when i exceeds 10, if not use valgrind to debug
        arr[i] = i;
    }
    for (int i = 0; i < 1000; i++) {
        cout << arr[i] << " ";
    }
    delete[]arr;
}

void resize(int* arr, int newSize) {
    arr = new int[newSize];
}