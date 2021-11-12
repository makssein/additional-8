#pragma once
#include <iostream>

namespace myClasses {
    struct Point {
        int x;
        int y;
    };
    class Triangle {
        public:
            Triangle();
            Triangle(Point A, Point B, Point C);
            ~Triangle();
            double Square();
            int Perimeter();
            void SetA(Point A);
            void SetB(Point B);
            void SetC(Point C);
        private:
            Point m_A, m_B, m_C;
    };
}