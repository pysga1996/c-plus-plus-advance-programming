### Bài tập

Bạn hãy cho biết kết quả khi chạy chương trình sau là bao nhiêu:

```
#include <iostream>

using namespace std;

int main() {
    int arr[] = { 3, 2, 4, 1, 9};
    short* p = (short*)&arr[0];
    cout << *(p + 4);
    return 0;
}

```

### Hướng dẫn

Từ kiến thức của các bài trước có thể thấy như sau:

-   Địa chỉ của `arr[1]` cách địa chỉ của `arr[0]` 4 ô nhớ (do kích thước của kiểu `int` là 4 byte).
-   Địa chỉ của `arr[2]` cách địa chỉ của `arr[0]` 8 ô nhớ.
-   Địa chỉ của `arr[3]` cách địa chỉ của `arr[0]` 12 ô nhớ.
-   `p + 1` cách `p` 2 ô nhớ mà `p` trỏ tới `arr[0]` => `p + 1` cách `arr[0]` 2 ô nhớ
-   `p + 2` cách `p` 4 ô nhớ mà `p` trỏ tới `arr[0]` => `p + 2` cách `arr[0]` 4 ô nhớ
-   `p + 3` cách `p` 6 ô nhớ mà `p` trỏ tới `arr[0]` => `p + 3` cách `arr[0]` 6 ô nhớ
-   `p + 4` cách `p` 8 ô nhớ mà `p` trỏ tới `arr[0]` => `p + 4` cách `arr[0]` 8 ô nhớ

Vậy có thể thấy rằng `p + 4` cách `arr[0]` 8 ô nhớ và `arr[2]` cũng cách `arr[0]` 8 ô nhớ nên kết quả của `*(p + 4)` sẽ chính là giá trị của 2 ô nhớ đầu tiên tại địa chỉ của `arr[2]` và giá trị này sẽ bằng 4 (còn phụ thuộc vào big endian và little endian nhưng trong phần lớn các trường hợp sẽ là 4).