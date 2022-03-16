#include <iostream>
#include "Student.h"

struct_exercise::exercise_1::Student::Student(const std::string &name, int age) {
    this->name = name;
    this->age = age;
}

struct_exercise::exercise_1::Student::Student() = default;

struct_exercise::exercise_2::Student::Student(const std::string &name, int age, int score) :
        struct_exercise::exercise_1::Student(name, age) {
    this->score = score;
}

struct_exercise::exercise_2::Student::Student() = default;

void struct_exercise::exercise_3::Student::display() const {
    using namespace std;
    cout << "Name: " << name << endl;
    cout << "Age: " << dateOfBirth << endl;
}

void struct_exercise::exercise_4::Student::getInformation() {
    using namespace std;
    cin >> name >> age;
}

struct_exercise::base::Student::Student() = default;
