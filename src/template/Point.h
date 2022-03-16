#ifndef ADVANCED_POINT_H
#define ADVANCED_POINT_H
#include <iostream>

namespace template_exercise {

    template<typename TypeOne = int, typename TypeTwo = int>
    class Point {
    private:
        TypeOne x;
        TypeTwo y;
    public:
        Point(TypeOne x, TypeTwo y) {
            this->x = x;
            this->y = y;
        }
        Point() = default;

        void printPoint() {
            using namespace std;
            cout << "x: " << this->x << ",";
            cout << "y: " << this->y << endl;
        };
    };
}

#endif //ADVANCED_POINT_H
