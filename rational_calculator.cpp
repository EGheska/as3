//
// Created by Dima Taras on 27.03.2023.
//

#include <cmath>
#include "rational_calculator.h"

rational rational_calculator::add(rational a, rational b) const {
    return {a.num()*b.den() + b.num() * a.den(), a.den()*b.den()};
}

rational rational_calculator::sub(rational a, rational b) const {
    return {a.num()*b.den() - b.num() * a.den(), a.den()*b.den()};
}

rational rational_calculator::mul(rational a, rational b) const {
    return {a.num() * b.num(), a.den() * b.den()};
}

rational rational_calculator::pow(rational a, int n) const {
   rational temp(a.num(),a.den());
    for(int i=0; i<n ;i++){
       if (i == 1){
           temp = mul(a,a);
       } else {
           temp = mul(temp,a);
       }
   }
    return temp;
}

rational rational_calculator::sqrt(rational a) const {
    rational temp(a.num(), a.den());
    if (a.is_neg() || a.is_nan() || a.is_inf()) {
        return 0;
    }
    temp.num(std::sqrt(a.num()));
    temp.den(std::sqrt(a.den()));
    return temp;
}

rational rational_calculator::calculate(std::string expression) const {

}
