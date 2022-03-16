#include <iostream>
#include "main.h"

int main() {
    using namespace std;
    int cmd;
    cout << "Select an exercise:" << endl;
    cin >> cmd;
    switch (cmd) {
        using namespace struct_exercise;
        case 1:
            ex1();
            break;
        case 2:
            ex2();
            break;
        case 3:
            ex3();
            break;
        case 4:
            ex4();
            break;
        case 5:
            ex5();
            break;
        case 6:
            ex6();
            break;
        case 7:
            ex7();
            break;
        default:
            cout << "Exit" << endl;
    }
    return 0;
}

namespace struct_exercise {

    using Student = exercise_2::Student;

    void inputStudents(Student *student, int n) {
        using namespace std;
        Student *s;
        for (int i = 0; i < n; i++) {
            s = &student[i];
            cout << "Enter student's name: " << endl;
            cin.ignore(); // ignore newline from last input
            getline(cin, s->name);
            cout << "Enter student's age: " << endl;
            cin >> s->age;
            cout << "Enter student's score: " << endl;
            cin >> s->score;
            cout << "Student " << i + 1 << endl;
//        cout << "Name: " << s->name << endl;
//        cout << "Age: " << s->age << endl;
//        cout << "Score: " << s->score << endl;
        }
    }
}
