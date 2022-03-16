#include <iostream>
#include "Student.h"

namespace struct_exercise {

    void ex3() {
        using namespace std;
        using Student = exercise_3::Student;
        int n;
        Student students[100];
        for (int i = 0; i < n; i++) {
            cin >> students[i].name >> students[i].age;
        }
        for (int i = 0; i < n; i++) {
            students[i].display();
        }
    }
}