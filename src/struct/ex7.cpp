#include <iostream>
#include "MyStruct.h"
#include "main.h"


namespace struct_exercise {

    void ex7() {
        using namespace std;
        using MyStruct = exercise_7::MyStruct;
        cout << "Size of my empty struct: " << sizeof(MyStruct) << endl;
    }
}