#include <iostream>

void ex9() {
    using namespace std;
    int n, m;
    cout << "Enter row size and column size: " << endl;
    cin >> n >> m;
    int** arr = new int* [n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int [m];
        for (int j = 0; j < m; ++j) {
            cout << "Enter array's element row " << i + 1 << ", column " << j + 1 << endl;
            cin >> arr[i][j];
        }
    }
    int sum;
    for (int i = 0; i < n; ++i) {
        sum = 0;
        for (int j = 0; j < m; ++j) {
            sum += arr[i][j];
        }
        cout << "Sum of row " << i + 1 << ":" << endl;
        cout << sum << endl;
    }
    for (int i = 0; i < n; ++i) {
        delete [] arr[i];
    }
    delete [] arr;
}