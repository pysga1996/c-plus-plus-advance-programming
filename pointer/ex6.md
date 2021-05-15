### Câu hỏi

Nếu biết được địa chỉ của một biến trong chương trình khác thì bạn có thể sử dụng con trỏ để thay đổi giá trị của biến này hay không?

### Lý thuyết

Do không cùng một chương trình nên bạn không thể dùng toán tử `&` để lấy ra địa chỉ của biến trong chương trình khác. Để cho con trỏ trỏ tới 1 địa chỉ mà không sử dụng toán tử `&` bạn có thể dùng câu lệnh sau:

```
// Cho con trỏ p trỏ tới địa chỉ 5241044
int* p = reinterpret_cast<int*>(5241044);
```

Ví dụ chương trình sau:

```
#include<iostream>

using namespace std;

int main() {
	int a = 5;
	cout << (int)&a << endl;
	int address;
	cin >> address;
	int* p = reinterpret_cast<int*>(address);
	*p = 10;
	cout << a;
	return 0;
}

```

Khi chạy chương trình bạn hãy nhập vào địa chỉ của biến `a` và kết quả sẽ là:

```
10
```

Có thể thấy bạn có thể cho con trỏ `p` trỏ tới bất cứ đâu trên bộ nhớ nhưng đáp án của bài này là không thể.

Giải thích: khi ứng dụng của bạn chạy, hệ điều hành sẽ cấp cho nó một vùng nhớ ảo và con trỏ của bạn sẽ trỏ tới vùng nhớ ảo này chứ không thể trỏ tới vùng nhớ ảo của ứng dụng khác. Hơn nữa địa chỉ mà bạn nhìn thấy là địa chỉ ảo, không phải địa chỉ trên bộ nhớ vật lý nên bạn cũng không thể dùng địa chỉ này để thay đổi giá trị của biến trong chương trình khác.

![](https://codelearn.io/Media/Default/Users/blackcat/Cpp-Advanced/download.png)

*Bộ nhớ ảo, nguồn ảnh: [Wikipedia](https://vi.wikipedia.org/wiki/B%E1%BB%99_nh%E1%BB%9B_%E1%BA%A3o)*

Để thay đổi được giá trị của một biến trong chương trình khác bạn có thể dùng WinAPI, nếu bạn quan tâm thì có thể xem blog hack game Half Life gồm 2 phần của mình để biết rõ cách làm ([Phần 1](https://codelearn.io/blog/view/hack-game-half-life-voi-c), [Phần 2](https://codelearn.io/blog/view/phan-2-hack-game-half-life-voi-c)).

Đọc tới đây bạn đã có thể hiểu và chọn được đáp án cho bài này. 