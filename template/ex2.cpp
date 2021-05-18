#include "Point.h"

void ex2() {
    using namespace std;
    Point<int, int> p1{};
    Point<float, float> p2(3.2, 4.5);
    p1.printPoint();
    p2.printPoint();
}
