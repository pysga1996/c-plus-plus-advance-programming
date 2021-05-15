#include <iostream>

using namespace std;

void toUpper(string& s) {
    for (char& i : s) {
        if (i >= 'a' && i <= 'z') {
            i -= 32;
        }
    }
}

int ex5() {
    string s;
    cout << "Enter string s: " << endl;
    cin >> s;
    toUpper(s);
    cout << s;
    return 0;
}