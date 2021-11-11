#pragma once
#include <iostream>

namespace myClasses {
    struct Point {
        int x;
        int y;
    };
    class triangle {
    public:
        triangle();
        triangle(Point A, Point B, Point C);
        ~triangle();
        double Square();
        int Perimeter();
        void SetA(Point A);
        void SetB(Point B);
        void SetC(Point C);
    private:
        Point m_A, m_B, m_C;\
    };
}