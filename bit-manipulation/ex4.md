### Bài tập

Cho số nguyên `n` được nhập từ bàn phím, bạn hãy viết chương trình hiển thị ra màn hình kết quả của `2n`.

Ví dụ nếu bạn nhập `n = 2` như bên dưới:

```
2
```

Thì màn hình sẽ hiển thị ra

```
4
```

Giải thích: `22 = 4`

### Hướng dẫn

Sử dụng phép dịch bit sang trái.

Code mẫu:

```
#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	cout << (1 << (n));
	return 0;
}
```