### Task

What is result of the following program:

```
#include <iostream>

using namespace std;

int main() {
    short arr[] = { 1, 2, 3, 4, 5, 6, 7, 8};
    short* p = &arr[0];
    cout << (int)(p + 5);
    return 0;
}

```

Knowing that the address of the first element in `arr` array is `5504684` (in base 10) and `short` is a 2-byte data type.