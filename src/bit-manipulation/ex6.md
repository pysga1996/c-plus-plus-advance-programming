### Bài tập

Cho hai số nguyên `a` và `n` được nhập từ bàn phím, bạn hãy viết chương trình hiển thị ra màn hình bit thứ `n` từ phải qua trong `a`.

Ví dụ nếu bạn nhập `a = 11, n = 3` như bên dưới:

```
11 3
```

Thì chương trình sẽ hiển thị ra:

```
0
```

Giải thích: biểu diễn bit của `a` là `1011`, có thể quan sát thấy bit thứ 3 từ phải qua của `a` có giá trị bằng `0`.

Ví dụ nếu bạn nhập `a = 11, n = 4` như bên dưới:

```
11 4
```

Thì chương trình sẽ hiển thị ra:

```
1
```

### Hướng dẫn

Muốn lấy ra giá trị tại bit thứ `n` của số `a` bạn có thể làm như sau:

```
cout << (a & (1 << (n - 1)));
```

Giải thích:

`1 << (n - 1);` sẽ trả về một số có bit thứ `n` từ phải qua là `1` và các bit khác là bit 0. Kết quả của phép `AND` số này với `a` sẽ trả về một số có giá trị 0 nếu bit thứ `n` trong `a` là `0` và trả về một số khác `0` nếu bit thứ `n` trong `a` khác `0`.

Bạn cũng có thể làm cách khác như sau:

```
cout << (1 & (a >> (n - 1)));

```

### Code mẫu:

Cách 1:

```
#include<iostream>

using namespace std;

int main() {
	int a, n;
	cin >> a >> n;
	if ((a & (1 << (n - 1))) == 0) {
		cout << 0;
	} else {
		cout << 1;
	}
	return 0;
}​
```

Cách 2:

```
#include<iostream>

using namespace std;

int main() {
	int a, n;
	cin >> a >> n;
	cout << (1 & (a >> (n - 1)));
	return 0;
}
```