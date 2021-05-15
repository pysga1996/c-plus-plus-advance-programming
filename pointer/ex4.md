### Bài tập

Cho biến `a` kiểu số nguyên được nhập từ bàn phím, bạn hãy viết hàm tăng giá trị biến `a` lên `1` và hiển thị ra màn hình:

```
New Value of a: {P}
```

Với `{P}` là giá trị của biến `a` sau khi tăng lên `1`.

### Lý thuyết

Bài này bạn sẽ hiểu được khái niệm về truyền tham trị và truyền tham chiếu trong C++.

Đầu tiên bạn hãy chạy thử chương trình sau:

```
#include <iostream>

using namespace std;

void inc(int a) {
    a++;
}

int main() {
    int a = 5;
    inc(a);
    cout << "Value of a: " << a;
    return 0;
}

```

Kết quả khi chạy chương trình:

```
Value of a: 5
```

Bạn có thể nhận thấy giá trị của biến `a` sau khi gọi hàm `inc()` là không thay đổi (vẫn là 5). Giải thích:

Khi bạn gọi hàm `inc(a);` thì thực chất là bạn đang lấy giá trị tại ô nhớ chứa biến `a` trong hàm `main()` và copy giá trị đó vào ô nhớ chứa biến `a` trong hàm `inc()`, vậy có nghĩa là biến `a` trong hàm `main()` và biến `a` trong hàm `inc()` là 2 biến khác hoàn toàn nhau (không cùng 1 ô nhớ) nên bạn thay đổi biến này cũng sẽ không ảnh hưởng tới biến kia.

Tiếp theo bạn hãy chạy thử chương trình sau:

```
#include <iostream>

using namespace std;

void inc(int* p) {
    (*p)++;
}

int main() {
    int a = 5;
    inc(&a);
    cout << "Value of a: " << a;
    return 0;
}

```

Kết quả khi chạy chương trình:

```
Value of a: 6
```

Có thể thấy giá trị của biến `a` đã được thay đổi sau khi gọi hàm `inc()`, tới đây nhiều bạn mới học lập trình sẽ nghĩ rằng trong đoạn code trên giá trị của biến `a` được thay đổi khi gọi hàm `inc` là do biến `a` được truyền tham chiếu (điều này là sai). Nếu bạn không biết truyền tham trị và tham chiếu là gì thì mình sẽ giải thích:

Truyền tham trị

Như ở ví dụ đầu tiên, biến `a` được truyền tham trị vào hàm `inc()` dẫn tới giá trị của nó không thay đổi, truyền tham trị là truyền giá trị của một biến vào một biến khác (truyền giá trị của một ô nhớ vào một ô nhớ khác).

Truyền tham chiếu

Một biến được truyền tham chiếu khi biến đó có cùng địa chỉ với biến được truyền. Để dễ hiểu hơn hãy xem ví dụ về truyền tham chiếu trong ngôn ngữ lập trình C++ (C++ hỗ trợ truyền tham chiếu thông qua toán tử `&`):

```
#include <iostream>

using namespace std;

void inc(int& a) {
	a++;
	cout << "Address of a in inc function: " << &a << endl;
}

int main() {
	int a = 5;
	inc(a);
	cout << "Address of a in main function: " << &a << endl;
	cout << "Value of a: " << a;
	return 0;
}

```

Kết quả khi chạy chương trình:

```
Address of a in inc function: 010FFAEC
Address of a in main function: 010FFAEC
Value of a: 6
```

Có thể thấy địa chỉ của biến `a` trong hàm `main()` và trong hàm `inc()` là giống hệt nhau nên đây mới đúng là truyền tham chiếu.

Quay lại ví dụ thứ 2: Bạn thay đổi được giá trị của biến `a` trong hàm `inc()` là do bạn truyền địa chỉ của biến `a` vào con trỏ `p` trong hàm `inc()` và lúc này con trỏ `p` đang trỏ tới ô nhớ chứa biến `a` nên những thay đổi mà con trỏ `p` thực hiện sẽ ảnh hưởng tới biến `a` dẫn tới giá trị của a được thay đổi (về bản chất thì đây không phải truyền tham chiếu).

Ngoài C++ ra thì C# cũng hỗ trợ cả truyền tham và truyền tham chiếu, Java và C chỉ hỗ trợ truyền tham trị.

Tổng kết lại, nếu muốn thay đổi giá trị của một biến thông qua hàm thì phải truyền tham chiếu hoặc truyền địa chỉ của biến đó vào hàm.

Đọc tới đây bạn đã có thể làm được bài này, hãy quay lại phần bài tập và làm thử.

Nếu bạn chưa làm được bài này thì có thể xem hướng dẫn ở dưới:

### Hướng dẫn

Code mẫu sử dụng truyền tham chiếu:

```
#include <iostream>

using namespace std;

void change(int &a) {
    a++;
}

int main() {
    int a;
    cin >> a;
    change(a);
    cout << "New value of a: " << a;
    return 0;
}

```

Code mẫu sử dụng truyền tham trị:

```
#include <iostream>

using namespace std;

void change(int* p) {
	(*p)++;
}

int main() {
	int a;
	cin >> a;
	change(&a);
	cout << "New value of a: " << a;
	return 0;
}
```