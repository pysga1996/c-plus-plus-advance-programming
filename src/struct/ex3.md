### Bài tập

Viết chương trình khai báo kiểu dữ liệu `Student` (sinh viên) với các thuộc tính `string name, int age` và phương thức `display()`. Sau đó bạn hãy nhập từ bàn phím mảng `n` phần tử các sinh viên và dùng phương thức `display()` để hiển thị ra màn hình thông tin các sinh viên.

Ví dụ nếu bạn nhập

```
2
Binh 19
An 20
```

Thì màn hình sẽ hiển thị ra:

```
Name: Binh
Age: 19
Name: An
Age: 20

```

### Lý thuyết

Ngoài các thuộc tính ra thì bạn còn có thể định nghĩa các phương thức bên trong một `Struct`. Ví dụ về `Struct` khai báo và sử dụng phương thức `display()` để hiển thị thông tin của một sinh viên:

```
#include<iostream>

using namespace std;

struct Student {
	string name;
	int dateOfBirth;
	void display() {
		cout << "Name: " << name << endl;
		cout << "Age: " << dateOfBirth;
	}
};

int main() {
	Student s1;
	s1.name = "Codelearn";
	s1.dateOfBirth = 2019;
	s1.display();
	return 0;
}
```

Kết quả khi chạy chương trình:

```
Name: Codelearn
Age: 2019
```

Có thể thấy phương thức `display()` có thể truy xuất tới thuộc tính `name` và thuộc tính `dateOfBirth`.

Đọc tới đây bạn đã có biết cách tạo và sử dụng phương thức bên trong struct, hãy quay lại phần bài tập và làm thử.

### Hướng dẫn

Code mẫu:

```
#include<iostream>

using namespace std;

struct Student {
	string name;
	int age;
	void display() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};

int main() {
	int n;
	cin >> n;
	Student students[100];
	for (int i = 0; i < n; i++) {
		cin >> students[i].name >> students[i].age;
	}
	for (int i = 0; i < n; i++) {
		students[i].display();
	}
	return 0;
}
```