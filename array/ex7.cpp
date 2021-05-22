#include <iostream>

namespace array_exercise {

    void ex7() {
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
        cout << "Numbers that are divisible by 3 but not divisible by 5: " << endl;
        // Hiển thị ra màn hình các số chia hết cho 3 và không chia hết cho 5 trong arr
        for (int i = 0; i < n; i++) {
            if (arr[i] % 3 == 0 && arr[i] % 5 != 0) {
                cout << arr[i] << " ";
            }
        }
        delete[]arr;
    }
}