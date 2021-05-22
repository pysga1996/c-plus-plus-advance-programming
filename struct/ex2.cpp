#include <iostream>
#include "Student.h"

void inputStudents(Student *student, int n);

void ex2() {
    using namespace std;
    int n;
    cout << "Enter number of students: " << endl;
    cin >> n;
    cin.ignore(); // ignore newline from last input
    auto *students = new Student[100];
    inputStudents(students, n);
//    TODO
    delete[] students;
}

void inputStudents(Student *student, int n) {
    using namespace std;
    for (int i = 0; i < n; i++) {
        Student s = student[i];
        cout << "Enter student's name: " << endl;
        getline(cin, s.name);
        cout << "Enter student's age: " << endl;
        cin >> s.age;
        cout << "Enter student's score: " << endl;
        cin >> s.score;
        cout << "Student " << i + 1 << endl;
        cout << "Name: " << s.name << endl;
        cout << "Age: " << s.age << endl;
        cout << "Score: " << s.score << endl;
    }
}