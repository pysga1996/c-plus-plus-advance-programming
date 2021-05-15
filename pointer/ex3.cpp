#include <iostream>

void ex3() {
    using namespace std;
    char ch = 'a';
    char* p = &ch;
    // Size of pointer is 8 bytes in x64 platform and 4 bytes in x86 platform
    cout << "Size of pointer p: " << sizeof(p) << endl;
}