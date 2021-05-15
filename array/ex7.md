### Bài tập

Cho mảng các số nguyên `n` phần tử được nhập từ bàn phím (mảng này được cấp phát động và quản lý thông qua con trỏ `arr`), bạn hãy viết chương trình hiển thị ra những số chia hết cho 3 và không chia hết cho 5 trong mảng.

Ví dụ nếu bạn nhập `n = 5, arr = [6, 15, 3, 7, 30]` giống như bên dưới:

```
5
6 15 3 7 30
```

Thì màn hình sẽ hiển thị ra:

```
6 3
```

### Hướng dẫn

Code mẫu:

```
#include <iostream>

using namespace std;

int main() {
	int n;
	int* arr;
	cin >> n;
	// Thực hiện cấp phát bộ nhớ động cho mảng
	arr = new int[n];
	// Nhập dữ liệu cho mảng
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	// Hiển thị ra màn hình các số chia hết cho 3 và không chia hết cho 5 trong arr
	for (int i = 0; i < n; i++) {
		if (arr[i] % 3 == 0 && arr[i] % 5 != 0) {
			cout << arr[i] << " ";
		}
	}
	delete[]arr;
	return 0;
}
```