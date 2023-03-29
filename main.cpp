#include <iostream>
#include "rational.h"
#include "rational_calculator.h"
#include "rational_processor.h"

int main() {
//    rational r(3,4);
//    rational r1(67,-3);
//    rational r2(-36,25);
//    std::cout << r.str() << "\n";
//    std::cout << r.is_nan() << "\n";
//    rational_calculator calculator;
//    rational r3 = calculator.mul(r,r1);
//    rational r4 = calculator.add(r,r1);
//    rational r5 = calculator.sub(r,r1);
//    rational r6 = calculator.pow(r,4);
//    rational r7 = calculator.sqrt(r2);
//    std::cout << r3.str() << "\n";
//    std::cout << r4.str() << "\n";
//    std::cout << r5.str() << "\n";
//    std::cout << r6.str() << "\n";
//    std::cout << r7.str();
    std::string toCalc = "3/4 + 67/-3";
    std::string calc = "sqrt 144/9";
    std::string mult = "6/4 * 0/0";
    std::string power = "5/6 ^ 2";
    std::string subs = "10/8 - 0/3";
    rational_calculator calculator;
    // TODO: check the sum
   // calculator.calculate(toCalc);
   // calculator.calculate(calc);
   //calculator.calculate(mult);
   //calculator.calculate(power);
   // TODO: check the subs. Implement GCD
   //calculator.calculate(subs);
   rational_processor processor("name.txt");
   return 0;
}
