#include <iostream>
#include <functional>

namespace lambda_exercise {

    void ex1() {
        using namespace std;
        function x =
                []      // Khai báo lambda capture list
                        ()      // Đối số
                { cout << "Hello" << endl; };     // Thân hàm
        x();     // Chạy!
    }
}
