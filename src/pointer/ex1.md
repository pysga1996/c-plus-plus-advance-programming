### Bài tập:

Bạn hãy điền code vào dấu `...` để màn hình hiển thị ra:

```
Value of a: 20
```

### Lý thuyết:

Mục tiêu của bài này là giúp bạn hiểu được con trỏ ở mức cơ bản. Trước tiên để hiểu được con trỏ bạn cần hiểu rõ về bộ nhớ máy tính và biến.

Bộ nhớ máy tính

Bộ nhớ máy tính là một dãy các ô nhớ nằm liên tiếp nhau, mỗi một ô nhớ sẽ lưu 1 byte dữ liệu và dữ liệu của bạn sẽ nằm trong các ô nhớ này. Để truy xuất được vào một ô nhớ bạn cần biết được vị trí (địa chỉ) của ô nhớ đó.

Biến

Biến là một ô nhớ hoặc một vùng nhớ được hệ điều hành cấp phát cho chương trình. Một biến sẽ gồm 2 phần là địa chỉ của biến (địa chỉ của ô nhớ chứa biến) và giá trị của biến (giá trị của ô nhớ chứa biến).

Giá trị của biến là gì thì chắc bạn cũng đã biết. Ví dụ để hiển thị ra màn hình giá trị của biến `a` bạn có thể làm như sau:

```
// In ra giá trị của biến a.
cout << "Value of a: " << a;
```

Địa chỉ của biến chính là địa chỉ của ô nhớ chứa biến. Bạn có thể dùng toán tử `&` để lấy ra địa chỉ của một biến. Ví dụ chương trình hiển thị địa chỉ của biến `a`:

```
#include<iostream>

using namespace std;

int main() {
    int a = 5;
    // In ra địa chỉ của biến a.
    cout << "Address of a: " << &a;
    return 0;
}

```

Kết quả khi chạy chương trình:

```
Address of a: 00F3FA48
```

Giải thích: biến `a` đang nằm trên vùng nhớ có địa chỉ là `00F3FA48`.

`00F3FA48` chính là địa chỉ của biến `a` được hiển thị dưới [hệ cơ số 16](https://www.google.com/search?sxsrf=ALeKk00LARxNygurf3dELl_4Q2F0atiqYA%3A1584085870865&source=hp&ei=bjtrXuCoMoG_wAOgnYLAAg&q=h%E1%BB%87+c%C6%A1+s%E1%BB%91+16&oq=h%E1%BB%87+c%C6%A1+s%E1%BB%91+16&gs_l=psy-ab.3..35i39l2j0i67j0i22i30l7.230.1508..1745...6.0..4.164.2044.0j16......0....1..gws-wiz.......0j0i131j0i20i263j0i203.x2J8CnRlYYA&ved=0ahUKEwjgl__c-5boAhWBH3AKHaCOACgQ4dUDCAY&uact=5), để hiển thị được địa chỉ của một biến dưới hệ cơ số 10 (hệ cơ số 10 chính là các số mà bạn sử dụng thường ngày như 1, 2, 3, 84, 23, 4324, ...) bạn làm như sau:

```
cout << "Address of a: " << (int)&a;
```

Kết quả:

```
Address of a: 15989320
```

Bạn có thể lấy ra hoặc thay đổi giá trị tại 1 địa chỉ bằng toán tử `*`. Ví dụ để lấy ra giá trị của biến `a` bạn có thể lấy ra giá trị tại địa chỉ của ô nhớ chứa biến `a` như chương trình sau:

```
#include<iostream>

using namespace std;

int main() {
	int a = 5;
	cout << "Value of a: " << *(&a);
	return 0;
}
```

Kết quả khi chạy chương trình:

```
Value of a: 5
```

Bạn cũng có thể thay đổi giá trị của biến `a` thông qua địa chỉ của nó như chương trình sau:

```
#include<iostream>

using namespace std;

int main() {
	int a = 5;
	*(&a) = 9;
	cout << "Value of a: " << *(&a);
	return 0;
}
```

Kết quả khi chạy chương trình:

```
Value of a: 9
```

Khi bạn thực hiện thay đổi hay lấy ra giá trị của một biến thì thực chất chương trình sẽ tìm tới ô nhớ chứa biến này (thông qua địa chỉ của biến) và thao tác trên ô nhớ đó.

Vậy nếu biết được địa chỉ của 1 biến thì bạn có thể thay đổi hoặc lấy ra giá trị của biến đó.

### Con trỏ

Con trỏ là một dạng đặc biệt của biến, do cũng là 1 biến nên nó cũng có địa chỉ và giá trị, nó khác các biến bình thường ở chỗ giá trị của 1 con trỏ chính là địa chỉ của 1 biến khác. Cú pháp để khai báo một con trỏ:

```
Kiểu_dữ_liệu *tên_con_trỏ; // Ví dụ: int *p;
```

Ví dụ về con trỏ:

```
#include<iostream>

using namespace std;

int main() {
	// Khai báo biến a;
	int a = 5;
	// Khai báo con trỏ p
	int* p;
	// Cho con trỏ p trỏ tới biến a.
	p = &a;
	// In ra địa chỉ của biến a và giá trị của con trỏ p.
	cout << "Address of a: " << &a << endl;
	cout << "Value of p: " << p << endl;
	return 0;
}

```

Output là

```
Address of a: 0039FE9C
Value of p: 0039FE9C
```

Có thể thấy giá trị của con trỏ `p` bằng với địa chỉ của biến `a`. Vậy bạn có thể thay đổi giá trị của biến `a` thông qua con trỏ `p` như chương trình sau:

```
#include<iostream>

using namespace std;

int main() {
	// Khai báo biến a
	int a;
	// Khai báo con trỏ p
	int* p;
	// Cho con trỏ p trỏ tới địa chỉ của biến a
	p = &a;
	// Thay đổi giá trị của biến a thông qua con trỏ p
	*p = 7;
	// In ra giá trị của biến a sau khi thay đổi
	cout << "Value of a: " << a;
	return 0;
}

```

Kết quả khi chạy chương trình:

```
Value of a: 7
```

Đọc tới đây bạn đã biết cách thay đổi giá trị cuả 1 biến thông qua con trỏ, hãy quay lại phần bài tập và làm thử.

Nếu bạn chưa làm được bài này thì có thể xem hướng dẫn ở bên dưới.

### Hướng dẫn

Điền số 20 vào dấu `...`

Code mẫu:

```
#include<iostream>

using namespace std;

int main() {
	int a = 5;
	int* p;
	p = &a;
	*p = 20;
	cout << "Value of a: " << a;
	return 0;
}
```