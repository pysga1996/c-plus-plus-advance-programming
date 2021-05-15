### Bài tập

Cho xâu `s` được nhập từ bàn phím, bạn hãy viết hàm chuyển các ký tự in thường trong xâu `s` thành in hoa và hiển thị xâu `s` ra màn hình.

Ví dụ nếu bạn nhập `s = "codelearn"` như bên dưới:

```
codelearn
```

Thì màn hình sẽ hiển thị ra:

```
CODELEARN
```

### Hướng dẫn

Nếu bạn chưa biết cách chuyển 1 xâu từ in thường sang in hoa thì bạn có thể tham khảo [bài này](https://codelearn.io/learningtask/index?id=522901&taskid=532483) tại khóa học C++ cho người mới bắt đầu.

Code mẫu sử dụng truyền tham chiếu:

```
#include <iostream>

using namespace std;

void toUpper(string &s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] -= 32;
		}
	}
}

int main() {
	string s;
	cin >> s;
	toUpper(s);
	cout << s;
	return 0;
}
```

Code mẫu sử dụng truyền tham trị:

```
#include <iostream>

using namespace std;

void toUpper(string *s) {
	for (int i = 0; i < (*s).size(); i++) {
		if ((*s)[i] >= 'a' && (*s)[i] <= 'z') {
			(*s)[i] -= 32;
		}
	}
}

int main() {
	string s;
	cin >> s;
	toUpper(&s);
	cout << s;
	return 0;
}
```