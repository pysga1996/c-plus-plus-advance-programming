### Bài tập

Trong C++ có những cách cấp phát bộ nhớ nào?

### Lý thuyết

Trong C++ và các ngôn ngữ lập trình khác có 3 loại cấp phát bộ nhớ:

Cấp phát bộ nhớ tĩnh

-   Dùng để cấp phát bộ nhớ cho các biến toàn cục, các biến được khai báo với từ khóa `static`.
-   Dữ liệu được cấp phát sẽ nằm trên Data Segment.
-   Vùng nhớ của biến được cấp phát ngay khi chương trình chạy.
-   Kích thước của vùng nhớ phải được cung cấp tại thời điểm biên dịch, và đó cũng là lý do vì sao khi khai báo mảng bạn luôn phải khai báo số phần tử của mảng là một hằng số.

    ```
    // Sai
    int a[n];

    // Đúng
    int a[100];
    ```

-   Ví dụ về mảng được cấp phát bộ nhớ tĩnh:

    ```
    #include <iostream>

    using namespace std;

    // Mảng arr được cấp phát tĩnh
    int arr[100];

    int main() {

        return 0;
    }​
    ```

Cấp phát bộ nhớ tự động

-   Dùng để cấp phát bộ nhớ cho biến cục bộ.
-   Kích thước của vùng nhớ phải được cung cấp tại thời điểm biên dịch (giống với cấp phát bộ nhớ tĩnh) nên nếu khai báo mảng, bạn vẫn phải khai báo số phần tử là một hằng số.
-   Dữ liệu được được cấp phát sẽ nằm trên Stack Segment.
-   Ví dụ về mảng được cấp phát tự động:

    ```
    #include <iostream>

    using namespace std;

    int main() {
        // Mảng arr được cấp phát bộ nhớ tự động
        int arr[100];

        return 0;
    }​
    ```

Nhược điểm của 2 loại cấp phát trên

-   Không thể thay đổi số phần tử của mảng sau khi chương trình đã chạy, bạn chỉ có cách tắt chương trình đi và viết lại code.
-   Không thể cấp phát được nhiều bộ nhớ như cấp phát động,nhất là cấp phát bộ nhớ tự động (do kích thước stack segment nhỏ).

Ưu điểm của 2 loại cấp phát trên

-   Truy xuất dữ liệu nhanh.
-   Bộ nhớ được chương trình quản lý tự động.

Lưu ý: ở 1 số trình biên dịch cho phép bạn khai báo mảng mà không cần biết trước số phần tử của mảng giống như sau:

```
#include <iostream>

int main()
{
    int n;
    cin >> n;
    int arr[n];
    return 0;
}

```

Nếu bạn đang sử dụng trình biên dịch có hỗ trợ VLA (Variable Length Arrays) thì đoạn code trên sẽ chạy mà không báo lỗi. Tuy nhiên, đây không phải là cú pháp chuẩn của C++, và nó sẽ không chạy được trên các trình biên dịch không hỗ trợ VLA (đoạn code trên sẽ báo lỗi nếu bạn chạy trên trình biên dịch MSVC của Visual studio). Do đó, bạn nên hạn chế tối đa việc viết code giống như trên.

Cấp phát bộ nhớ động (Dynamic Memory Allocation)

-   Kích thước bộ nhớ sẽ được cấp phát khi chương trình đang chạy.
-   Dữ liệu được cấp phát sẽ nằm trên Heap Segment
-   Bạn phải tự quản lý bộ nhớ.

Ưu điểm của cấp phát bộ nhớ động

-   Heap segment có dung lượng bộ nhớ lớn nhất nên sẽ cấp phát được nhiều bộ nhớ hơn.
-   Bạn có thể thay đổi kích thước mảng khi chương trình đang chạy.

Nhược điểm của cấp phát động:

-   Truy xuất tới vùng nhớ được cấp phát động sẽ chậm hơn so với cấp phát tĩnh và cấp phát tự động.
-   Bạn phải tự quản lý bộ nhớ thay vì được chương trình quản lý hộ. Do đó nếu không cẩn thận sẽ rất dễ bị tràn bộ nhớ.

Cả 3 loại cấp phát này đều có ưu điểm và nhược điểm nên không thể nói loại nào là tốt hơn mà phải tùy vào từng trường hợp cụ thể.

Đọc tới đây bạn đã hiểu về các kiểu cấp phát trong các ngôn ngữ lập trình.