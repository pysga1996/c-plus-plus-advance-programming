### Bài tập

Cho số nguyên `a` được nhập từ bàn phím, bạn hãy viết chương trình thay đổi giá trị bit thứ `4` từ phải qua của `a` về `0` và hiển thị ra màn hình giá trị của biến `a`.

Ví dụ nếu bạn nhập `a = 27` như bên dưới:

```
27
```

Thì chương trình sẽ hiển thị ra:

```
19
```

Giải thích: biểu diễn bit của `a` là `11011`. Sau khi tắt bit thứ `4` từ phải qua thì a có dạng `10011` và giá trị của `10011` ở hệ cơ số 10 là `19`.

### Hướng dẫn

Muốn tắt bit thứ `n` của số `a` bạn có thể dùng công thức sau.

```
a = a & (~(1 << (n - 1)));
```

Hoặc cách làm đơn giản hơn là xem bit thứ `n` của `a` là `1` hay `0` (giống bài trước), nếu là `1` thì hiển thị ra màn hình `a = a - (1 << (n - 1));`, ngược lại chỉ cần hiển thị biến `a`.

Cách 1:

```
#include<iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	a = a & (~(1 << (4 - 1)));
	cout << a;
	return 0;
}​
```

Cách 2:

```
#include<iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	if(1 & (a >> 3)){
		cout << (a - (1 << (4 - 1)));
	} else{
		cout << a;
	}
	return 0;
}
```