#include "classes.hpp"
#include <math.h>

namespace myClasses {
    Triangle::Triangle() {
        std::cout << "empty" << std::endl;
    }
    Triangle::Triangle(Point A, Point B, Point C) {
        m_A = A;
        m_B = B;
        m_C = C;

        if (m_d1 != m_d2 || m_d2 != m_d3 || m_d1 != m_d3) {
            std::cout << "Треугольник не является равностороонним" << std::endl;
            m_d1 = 1;
            m_d2 = 1;
            m_d3 = 1;
        }
        std::cout << "Constructor works!" << std::endl;
    }
    Triangle::~Triangle() {
        std::cout << "destructor" << std::endl;
    }
    double Triangle::Perimeter() {
        m_d1 = lengthOfSide(m_B, m_A);
        m_d2 = lengthOfSide(m_C, m_B);
        m_d3 = lengthOfSide(m_A, m_C);
        return m_d1 + m_d2 + m_d3;
    }
    double Triangle::Square() {
        m_d1 = lengthOfSide(m_B, m_A);
        m_d2 = lengthOfSide(m_C, m_B);
        m_d3 = lengthOfSide(m_A, m_C);
        double p = m_d1 + m_d2 + m_d3;
        double miniP = 0.5 * p;
        return sqrt(miniP * (miniP - m_d1) * (miniP - m_d2) * (miniP - m_d3));
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
}