#include <iostream>

namespace array_exercise {

    void ex6() {
        using namespace std;
        int n;
        int* arr;
        cout << "Enter number of elements in array: " << endl;
        cin >> n;
        // Thực hiện cấp phát bộ nhớ động cho mảng
        arr = new int [n];
        // Nhập dữ liệu cho mảng
        for (int i = 0; i < n; i++) {
            cout << "Enter array's element index " << i << ":" << endl;
            cin >> arr[i];
        }
        int sum = 0;
        // Tính tổng các phần tử trong mảng và lưu vào biến sum
        for (int i = 0; i < n; i++) {
//        sum += *(arr + i); // alternative
            sum += arr[i];
        }
        cout << "Sum = " << sum << endl;
        delete []arr;
    }
}