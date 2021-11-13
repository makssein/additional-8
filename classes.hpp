#pragma once
#include <iostream>
#include <math.h>

namespace myClasses {
    struct Point {
        double x;
        double y;
    };
    class Triangle {
        public:
            Triangle();
            ~Triangle();
            Triangle(Point A, Point B, Point C);
            double Square();
            double Perimeter();
            void SetA(Point A);
            void SetB(Point B);
            void SetC(Point C);
        private:
            Point m_A, m_B, m_C;
            double m_d1, m_d2, m_d3;
            double lengthOfSide(Point p1, Point p2){
                return sqrt((p2.x-p1.x)*(p2.x-p1.x) + (p2.y-p1.y)*(p2.y-p1.y));
            }
    };
}