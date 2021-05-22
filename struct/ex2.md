### Bài tập

Viết chương trình khai báo kiểu dữ liệu `SinhVien` với các thuộc tính `string name, int age, int score`. Sau đó bạn hãy nhập từ bàn phím mảng `n` phần tử các `SinhVien` (mảng này được cấp phát động) và hiển thị ra màn hình thông tin của sinh viên có điểm cao nhất giống như sau:

```
Name : {P1}
Age: {P2}
Score: {P3}
```

Với `{P1}` là tên của sinh viên có điểm cao nhất.

`{P2}` là tuổi của sinh viên có điểm cao nhất.

`{P3}` là điểm của sinh viên có điểm cao nhất.

Đầu vào luôn đảm bảo chỉ có 1 sinh viên có điểm cao nhất.

Ví dụ nếu bạn nhập

```
2
Binh 19 7
An 20 8
```

Thì màn hình sẽ hiển thị ra:

```
Name: An
Age: 20
Score: 8
```

Giải thích: An là sinh viên có điểm cao hơn Bình nên màn hình sẽ hiển thị ra thông tin của An. 

### Hướng dẫn

Code mẫu:

```
#include<iostream>

using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

int main() {
	int n;
	cin >> n;
	Student *students = new Student[100];
	for (int i = 0; i < n; i++) {
		cin >> students[i].name >> students[i].age >> students[i].score;
	}

	Student s = students[0];
	for (int i = 1; i < n; i++) {
		if (students[i].score > s.score) {
			s = students[i];
		}
	}

	cout << "Name: " << s.name << endl;
	cout << "Age: " << s.age << endl;
	cout << "Score: " << s.score;

	delete[] students;
	return 0;
}
```