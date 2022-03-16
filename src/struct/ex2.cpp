#include <iostream>
#include "Student.h"
#include "main.h"

namespace struct_exercise {

    using Student = exercise_2::Student;

    Student* findMaxScoreStudent(Student *student, int n);

    void ex2() {
        using namespace std;
        int n;
        cout << "Enter number of students: " << endl;
        cin >> n;
        auto *students = new Student[100];
        inputStudents(students, n);
        Student* maxScoreStudent = findMaxScoreStudent(students, n);
        cout << "Name: " << maxScoreStudent->name << endl;
        cout << "Age: " << maxScoreStudent->age << endl;
        cout << "Score: " << maxScoreStudent->score << endl;
        delete[] students;
    }

    Student* findMaxScoreStudent(Student *student, int n) {
        Student* maxScoreStudent = nullptr;
        if (n == 0) {
            return maxScoreStudent;
        }
        maxScoreStudent = &student[0];
        for (int i = 0; i < n; i++) {
            if (student[i].score > maxScoreStudent->score) {
                maxScoreStudent = &student[i];
            }
        }
        return maxScoreStudent;
    }
}