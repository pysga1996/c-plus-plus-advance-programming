#include <iostream>

namespace bit_manipulation {

    void ex5() {
        using namespace std;
        int n;
        cout << "Enter number to count numbers of bit 1: " << endl;
        cin >> n;
        int answer = 0;
        while (n != 0) {
            if (n & 1) {
                answer++;
            }
            n = n >> 1;
        }
        cout << "answer = " << answer << endl;
    }
}
