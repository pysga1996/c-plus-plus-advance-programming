#ifndef ADVANCED_STUDENT_H
#define ADVANCED_STUDENT_H

#include <string>

namespace struct_exercise {

    namespace base {

        struct Student {
            Student();
        };
    }

    namespace exercise_1 {

        struct Student : base::Student {
            std::string name;
            int age{};

            Student();

            Student(const std::string &name, int age);
        };
    }

    namespace exercise_2 {

        struct Student : exercise_1::Student {
            int score{};

            Student();

            Student(const std::string &name, int age, int score);
        };
    }

    namespace exercise_3 {

        struct Student : exercise_1::Student {
            int dateOfBirth{};

            void display() const;
        };
    }

    namespace exercise_4 {

        struct Student : exercise_3::Student {
            void getInformation();
        };
    }

    namespace exercise_5 {

        struct Student : base::Student {
            char gender{};
            int age{};
            double gpa{};
        };
    }
}

#endif //ADVANCED_STUDENT_H
