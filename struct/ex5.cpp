#include <iostream>
#include "Student.h"

namespace struct_exercise {

    void ex5() {
        using namespace std;
        using Student = exercise_5::Student;
        cout << "Size of student: " << sizeof(Student) << endl;
    }
}

