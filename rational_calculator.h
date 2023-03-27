//
// Created by Dima Taras on 27.03.2023.
//

#ifndef AS3_RATIONAL_CALCULATOR_H
#define AS3_RATIONAL_CALCULATOR_H
#include "rational.h"

class rational_calculator {
public:
    rational add(rational a, rational b) const;
    rational sub(rational a, rational b) const;
    rational mul(rational a, rational b) const;
    rational pow(rational a, int n) const;
    rational sqrt(rational a) const;
    rational calculate(std::string expression) const;

};


#endif //AS3_RATIONAL_CALCULATOR_H
