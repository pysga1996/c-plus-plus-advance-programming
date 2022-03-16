### Bài tập

Kết quả khi chạy chương trình sau là bao nhiêu:

```
#include<iostream>

using namespace std;

int main() {
	char ch = 'a';
	char* p = &ch;
	cout << "Size of p: " << sizeof(p);
	return 0;
}

```

### Lý thuyết

Ở bài trước bạn đã hiểu sơ qua về con trỏ, bài này sẽ giúp bạn hiểu sâu hơn về nó. Trước hết bạn cần hiểu được kích thước của một biến là gì. Kích thước của một biến chính là số byte mà chương trình dùng để cấp cho ô nhớ/vùng nhớ chứa biến đó. Ví dụ nếu bạn khai báo biến `a` kiểu `int` thì chương trình sẽ dùng 4 ô nhớ để lưu trữ biến `a` và giá trị của biến `a` chính là giá trị của 4 ô nhớ. Dưới đây là bảng thể hiện miền giá trị và kích thước của các kiểu dữ liệu:

| Kiểu dữ liệu | Kích thước | Miền giá trị |
| char | 1byte | -127 tới 127 |
| unsigned char | 1byte | 0 tới 255 |
| int | 4bytes | -2147483648 tới 2147483647 |
| unsigned int | 4bytes | 0 tới 4294967295 |
| short | 2bytes | -32768 tới 32767 |
| unsigned short | 2bytes | 0 tới 65,535 |
| long long | 8bytes | -(263) tới (263) - 1 |
| unsigned long long | 8bytes | 0 tới 18446744073709551615 |
| float | 4bytes |  |
| double | 8bytes |  |

Trong C++ bạn có thể dùng hàm `sizeof()` để lấy ra kích thước của một biến hoặc một kiểu dữ liệu. Ví dụ chương trình sau:

```
#include <iostream>

using namespace std;

int main() {
	cout << "size of char: " << sizeof(char) << endl;
	cout << "size of int: " << sizeof(int) << endl;
	cout << "size of short: " << sizeof(short) << endl;
	cout << "size of long long: " << sizeof(long long) << endl;
	cout << "size of float: " << sizeof(float) << endl;
	cout << "size of double: " << sizeof(double) << endl;
	return 0;
}

```

Kết quả khi chạy chương trình:

```
size of char: 1
size of int: 4
size of short: 2
size of long long: 8
size of float: 4
size of double: 8
```

Ngoài các kiểu dữ liệu cơ bản này ra thì con trỏ cũng là 1 kiểu dữ liệu nên nó cũng có kích thước, câu hỏi của bài này là kích thước của con trỏ kiểu `char*` là bao nhiêu. Một số bạn sẽ nghĩ kích thước của kiểu `char` là 1 nên kích thước của con trỏ kiểu `char*` cũng sẽ là 1 (điều này là sai). Trước hết bạn hãy chạy thử chương trình sau:

```
#include <iostream>

using namespace std;

int main() {
	int number = 9;
	int* p1 = &number;
	char* p2 = (char*)&number;
	double* p3 = (double*)&number;
	cout << "size of p1: " << sizeof(p1) << endl;
	cout << "size of p2: " << sizeof(p2) << endl;
	cout << "size of p3: " << sizeof(p3) << endl;
	return 0;
}

```

Kết quả có thể sẽ làm bạn bất ngờ, có thể output trên máy bạn sẽ là:

```
size of p1: 4
size of p2: 4
size of p3: 4
```

Và cũng có thể output trên máy bạn là

```
size of p1: 8
size of p2: 8
size of p3: 8
```

Có thể thấy kích thước của các con trỏ kiểu `char**, *int*` và `double*` là như nhau. Nếu bạn build ứng dụng trên platform x64 thì kích thước của con trỏ sẽ là 8, ngược lại nếu bạn build ứng dụng trên platform x86 thì kích thước của con trỏ sẽ là 4. Nếu bạn không hiểu build ứng dụng x64 và x86 là gì thì build ứng dụng x64 là tạo ra ứng dụng 64 bit, build x86 là tạo ra ứng dụng 32 bit.

Lý do kết quả có thể là 4 hoặc 8 là do giá trị của một con trỏ luôn là 1 địa chỉ mà ứng dụng x32 sẽ có 232 địa chỉ (232 ô nhớ - tương đương với kiểu dữ liệu có kích thước 4 byte), ứng dụng x64 sẽ có 264 địa chỉ (264 ô nhớ - tương đương với kiểu dữ liệu có kích thước 8 byte) nên con trỏ cần phải được cấp phát đủ bộ nhớ để lưu trữ được các địa chỉ này. Vì thế nên kích thước của con trỏ sẽ phụ thuộc vào platform mà bạn build.

*Có thể bạn sẽ thắc mắc: vậy sự khác biệt giữa con trỏ `char*` và con trỏ `int*` là gì?*

Sự khác biệt là con trỏ `char*` sẽ lấy byte đầu tiên trong vùng nhớ mà nó trỏ tới làm giá trị và con trỏ `int*` sẽ lấy 4 byte đầu tiên trong vùng nhớ mà nó trỏ tới làm giá trị.

Ví dụ chương trình sau:

```
#include <iostream>

using namespace std;

int main() {
	int a = 1005000000;
	int* p1 = &a;
	char* p2 = (char*)&a;
	cout << "*p1 = " << *p1 << endl;
	cout << "*p2 = " << (int)*p2;
	return 0;
}

```

Kết quả khi chạy chương trình:

```
*p1 = 1005000000
*p2 = 64
```

Giải thích: 4 byte tính từ địa chỉ của biến `a` có giá trị là 1005000000, 1 byte tính từ địa chỉ biến `a` có giá trị là 64 (còn phụ thuộc vào big endian và little endian nhưng tạm thời bạn chưa cần quan tâm).

Đọc tới đây bạn đã hiểu hơn về kiểu con trỏ, hãy quay lại phần bài tập và tích vào đáp án đúng.