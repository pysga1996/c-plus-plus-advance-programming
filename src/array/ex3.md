### Bài tập

Bạn hãy cho biết kết quả khi chạy đoạn code sau là bao nhiêu:

```
int arr[] = { 1, 2, 3, 4, 5 };
int* p = &arr[0];
cout << (int)(p + 3) << endl;

```

Biết địa chỉ của phần tử đầu tiên trong mảng `arr` là `5700636` (ở hệ cơ số 10) và `int` là kiểu dữ liệu có kích thước `4 byte`.

### Lý thuyết

Để làm bài này bạn cần hiểu về toán tử `+` trên con trỏ. Đầu tiên bạn hãy chạy thử chương trình sau:

```
#include <iostream>

using namespace std;

int main() {
    // Khai báo mảng arr với 5 phần tử
    int arr[] = { 1, 2, 3, 4, 5 };
    // Cho con trỏ p trỏ tới phần tử đầu tiên của mảng
    int* p = &arr[0];
    // Hiển thị địa chỉ của phần tử đầu tiên trong arr
    cout << (int)&arr[0] << endl;
    for (int i = 0; i < 5; i++) {
        // Hiển thị giá trị khi cộng con trỏ p với i
        cout << (int)(p + i) << " ";
    }
    return 0;
}
```

Kết quả khi chạy chương trình:

```
3799772
3799772 3799776 3799780 3799784 3799788
```

Từ kết quả trên có thể nhận xét rằng:

-   Kết quả của phép cộng một con trỏ với 1 giá trị là 1 con trỏ trỏ tới ô nhớ khác (`p` trỏ tới ô nhớ `3799772`, `p + 1` trỏ tới ô nhớ `3799776`).
-   `p + 1` trỏ tới ô nhớ cách ô nhớ mà `p` trỏ tới 4 địa chỉ (do `p` là con trỏ kiểu `int` và kích thước của kiểu `int` là 4 byte).
-   `p + 2` trỏ tới ô nhớ cách ô nhớ mà `p` trỏ tới 8 địa chỉ.
-   `p + 3` trỏ tới ô nhớ cách ô nhớ mà `p` trỏ tới 12 địa chỉ.
-   `p + 4` trỏ tới ô nhớ cách ô nhớ mà `p` trỏ tới 16 địa chỉ.

Như bài trước bạn đã được học, địa chỉ của các phần tử liên tiếp trong mảng số nguyên luôn cách nhau 4 đơn vị nên bạn cũng có thể duyệt mảng sử dụng con trỏ với toán tử `+` như sau:

```
#include <iostream>

using namespace std;

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int* p = &arr[0];
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
    }
    return 0;
}

```

Kết quả khi chạy chương trình

```
1 2 3 4 5
```

Có thể thấy khi cộng con trỏ với 1 `giá_trị` thì kết quả sẽ là một con trỏ trỏ tới ô nhớ cách đó `sizeof(kiểu_con_trỏ) * giá_trị`. Xem ví dụ với con trỏ kiểu `double*` để hiểu rõ hơn:

```
#include <iostream>

using namespace std;

int main() {
    double arr[] = { 1.5, 2.5, 3.5, 4.5, 5.5 };
    double* p = &arr[0]; // Bạn còn có thể viết double * p = arr;
    for (int i = 0; i < 5; i++) {
        cout << (int)(p + i) << " ";
    }
    return 0;
}

```

Kết quả khi chạy chương trình:

```
9895220 9895228 9895236 9895244 9895252
```

Có thể thấy `p + 1` cách `p` 8 địa chỉ, `p + 2` cách `p` 16 địa chỉ, `...` (do `sizeof(double) = 8)`

Đọc tới đây bạn đã hiểu về toán tử `+` trên con trỏ, hãy quay lại phần bài tập và làm thử.

### Hướng dẫn

Kết quả của bài này là: `5700636 + 3 * sizeof(int) = 5700648`