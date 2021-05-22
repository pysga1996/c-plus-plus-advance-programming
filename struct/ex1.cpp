#include <iostream>
#include "Student.h"

void ex1() {
    using namespace std;
    Student s1;
    cin.ignore(); // ignore newline from last input
    cout << "Enter student's name: " << endl;
    getline(cin, s1.name);
    cout << "Enter student's age: " << endl;
    cin >> s1.age;
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
}