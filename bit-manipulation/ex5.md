### Bài tập

Cho số nguyên `a` được nhập từ bàn phím, bạn hãy viết chương trình đếm số bit có giá trị `1` của `a` và hiển thị ra màn hình:

```
answer = {P}
```

Với `{P}` là số bit có giá trị `1` của `a`.

Ví dụ nếu bạn nhập `a = 27` như bên dưới:

```
27
```

Thì màn hình sẽ hiển thị ra:

```
4
```

Giải thích: biểu diễn của số `a` dưới dạng dãy bit là `11011`, có thể quan sát thấy `a` có `4` bit `1` nên kết quả là `4`.

### Hướng dẫn

Sử dụng phép dịch bit sang phải kết hợp với phép `AND` bit.

Code mẫu:

```
#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int answer = 0;
	while (n != 0) {
		if (n & 1) {
			answer++;
		}
		n = n >> 1;
	}
	cout << "answer = " << answer;
	return 0;
}
```