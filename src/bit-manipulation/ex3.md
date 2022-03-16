### Bài tập

Cho số nguyên `a` được nhập từ bàn phím, bạn hãy dùng phép dịch bit để chương trình hiển thị ra màn hình:

```
answer = {P}
```

Với `{P} = a/2` (chỉ lấy phần nguyên).

Ví dụ nếu bạn nhập:

```
9
```

Thì màn hình sẽ hiển thị ra:

```
answer = 4
```

Nếu bạn nhập:

```
4
```

Thì màn hình sẽ hiển thị ra:

```
answer = 2
```

### Hướng dẫn

Nếu bạn đã hiểu về hệ nhị phân thì bạn có thể làm được bài này (dịch bit sang phải 1 đơn vị).

Code mẫu:

```
#include<iostream>

using namespace std;

int main() {
	int a;
	cin >> a;
	cout << "answer = " << (a >> 1);
	return 0;
}
```