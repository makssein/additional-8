#pragma once
#include "circle.h"

namespace myClasses{
    myClasses::triangle(){
        std::cout<<"empty constructor" << std::endl;
    }

    myClasses::triangle(Point A, Point B, Point C) {
        m_A = A;
        m_B = B;
        m_C = C;
        int d1, d2, d3;
        d1 = sqrt((B.x - A.x)*(B.x - A.x) + (B.y - A.y)*(B.y - A.y));
        d2 = sqrt((B.x - C.x)*(B.x - C.x) + (B.y - C.y)*(B.y - C.y));
        d3 = sqrt((A.x - C.x)*(A.x - C.x) + (A.y - C.y)*(A.y - C.y));

        if(d1 != d2 && d1 != d3 && d2 != d3){
            std::cout << "Треугольник не является равносторонним" << std::endl;
            A.x = 1, A.y = 1, B.x = 3, B.y = 1, C.x = 2, C.y = 2;
        }
        double myClasses::Perimeter(){
            return d1+d2+d3;
        }
        int myClasses::Square(){
            p=d1+d2+d3;
            miniP = 0.5 * p;
            return sqrt(miniP * (miniP - d1)*(miniP-d2)*(miniP-d3));
        }
        void myClasses::SetA(Point A){
            m_A.x = A.x;
            m_A.y = A.y;
        }
        void myClasses::SetB(Point B){
            m_B.x = B.x;
            m_B.y = B.y;
        }
        void myClasses::SetC(Point C){
            m_C.x = C.x;
            m_C.y = C.y;
        }
    }
    myClasses::~triangle(){
        std::cout << "destructor" << std::endl;
    }
}