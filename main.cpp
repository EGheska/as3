#include <iostream>
#include "rational.h"
#include "rational_calculator.h"

int main() {
    rational r(3,4);
    rational r1(67,-3);
    rational r2(-36,25);
    //std::cout << r.str() << "\n";
    //std::cout << r.is_nan() << "\n";
    rational_calculator calculator;
    rational r3 = calculator.mul(r,r1);
    rational r4 = calculator.add(r,r1);
    rational r5 = calculator.sub(r,r1);
    rational r6 = calculator.pow(r,4);
    rational r7 = calculator.sqrt(r2);
    std::cout << r3.str() << "\n";
    std::cout << r4.str() << "\n";
    std::cout << r5.str() << "\n";
    std::cout << r6.str() << "\n";
    std::cout << r7.str();
    return 0;
}
