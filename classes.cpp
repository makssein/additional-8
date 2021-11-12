#include "classes.hpp"

namespace myClasses {
    int d1, d2, d3;
    Triangle::Triangle() {
        std::cout << "empty" << std::endl;
    }
    Triangle::Triangle(Point A, Point B, Point C) {
        m_A = A;
        m_B = B;
        m_C = C;
        std::cout << A;
        d1 = sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
        d2 = sqrt((B.x - C.x) * (B.x - C.x) + (B.y - C.y) * (B.y - C.y));
        d3 = sqrt((A.x - C.x) * (A.x - C.x) + (A.y - C.y) * (A.y - C.y));

        if (d1 != d2 != d3) {
            std::cout << "Треугольник не является равносторонним" << std::endl;
            d1 = 1;
            d2 = 1;
            d3 = 1;
        }
        std::cout << "Constructor works!" << std::endl;
    }
    int Triangle::Perimeter() {
        return d1 + d2 + d3;
    }
    double Triangle::Square() {
        int p = d1 + d2 + d3;
        int miniP = 0.5 * p;
        return sqrt(miniP * (miniP - d1) * (miniP - d2) * (miniP - d3));
    }
    void Triangle::SetA(Point A) {
        m_A.x = A.x;
        m_A.y = A.y;
    }
    void Triangle::SetB(Point B) {
        m_B.x = B.x;
        m_B.y = B.y;
    }
    void Triangle::SetC(Point C) {
        m_C.x = C.x;
        m_C.y = C.y;
    }
    Triangle::~Triangle() {
        std::cout << "destructor" << std::endl;
    }

}