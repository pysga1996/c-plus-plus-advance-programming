### Bài tập

Cho số nguyên `a` được nhập từ bàn phím, bạn hãy viết chương trình kiểm tra xem `a` là số chẵn hay số lẻ. Nếu `a` là số chẵn thì in ra `"a is an even number"`, ngược lại in ra `"a is an odd number"`.

### Hướng dẫn

Nếu `a` là một số lẻ thì kết quả của phép `a & 1` sẽ bằng `1` (một số lẻ luôn có bit thấp bằng `1`).

Code mẫu:

```
#include<iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	if (a & 1) {
		cout << "a is an odd number";
	} else {
		cout << "a is an even number";
	}
	return 0;
}
```