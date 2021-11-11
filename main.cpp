﻿#include <iostream>
#include "classes.h"



int main() {
    myClasses::triangle trian;
    myClasses::Point A, B, C;
    std::cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
    trian.SetA(A);
    trian.SetB(B);
    trian.SetC(C);

    std::cout << "Square = " << trian.Square() << " Perimetr = " << trian.Perimeter() << std::endl;


    return 0;
}