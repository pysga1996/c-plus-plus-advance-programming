#include <iostream>

void change(int& x) {
    x++;
}

int ex4() {
    using namespace std;
    int a;
    cout << "Enter value of a: " << endl;
    cin >> a;
    change(a);
    cout << "New value of a: " << a << endl;
}
