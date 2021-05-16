#include <bits/stdc++.h>

template<class val>
void swapVal(val &a, val &b);

void ex1() {
    using namespace std;
    int intX = 2, intY = 3;
    double doubleX = 1.2, doubleY = 3.1;
    string str1 = "Code", str2 = "Learn";
    //gọi hàm swapVal() đối với 2 số nguyên
    cout << "intX = " << intX << "\tintY = " << intY << " >>> Swapped >>> ";
    swapVal(intX, intY);
    cout << "intX = " << intX << "\tintY = " << intY << endl;
    //gọi hàm swapVal() đối với 2 số thực
    cout << "doubleX = " << doubleX << "\tdoubleY = " << doubleY << " >>> Swapped >>> ";
    swapVal(doubleX, doubleY);
    cout << "doubleX = " << doubleX << "\tdoubleY = " << doubleY << endl;
    //gọi hàm swapVal() đối với 2 chuỗi
    cout << "Str1 = " << str1 << "\tstr2 = " << str2 << " >>> Swapped >>> ";
    swapVal(str1, str2);
    cout << "Str1 = " << str1 << "\tstr2 = " << str2 << endl;
}

template<class val>
void swapVal(val &a, val &b) {
    val temp;
    temp = a;
    a = b;
    b = temp;
}