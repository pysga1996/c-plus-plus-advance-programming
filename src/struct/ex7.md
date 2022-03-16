### Bài tập

Bạn hãy cho biết kết quả khi chạy chương trình sau là bao nhiêu:

```
#include<iostream>

using namespace std;

struct MyStruct {
};

int main() {
	cout << sizeof(MyStruct);
	return 0;
}
```

### Lý thuyết

Trong trường hợp struct rỗng (không chứa thuộc tính nào) thì kích thước của nó sẽ là `1`.