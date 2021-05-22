#include <iostream>
#include "Student.h"

namespace struct_exercise {

    void ex4() {
        using namespace std;
        using Student = exercise_4::Student;
        int n;
        Student students[100];
        cin >> n;
        for (int i = 0; i < n; i++) {
            students[i].getInformation();
        }
        for (int i = 0; i < n; i++) {
            students[i].display();
        }
    }
}
