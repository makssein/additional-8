#include <iostream>
#include "classes.h"



int main() {
    myClasses::triangle triangle;
    myClasses::Point A, B, C;
    std::cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
    triangle.SetA(A);
    triangle.SetB(B);
    triangle.SetC(C);

    std::cout << "Площадь = " << triangle.Square() << " Периметр = " <<  triangle.Perimeter() << std::endl;


    return 0;
}
