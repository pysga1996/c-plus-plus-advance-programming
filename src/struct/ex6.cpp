#include <iostream>
#include "MyStruct.h"

namespace struct_exercise {

    void ex6() {
        using namespace std;
        using MyStruct = exercise_6::MyStruct;
        cout << "Size of my struct: " << sizeof(MyStruct) << endl;
    }
}