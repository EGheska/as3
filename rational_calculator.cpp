//
// Created by Dima Taras on 27.03.2023.
//

#include <cmath>
#include <sstream>
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
    if (expression.contains(" + ")){
        auto endIndex = expression.find("+");
        std::string a = expression.substr(0,endIndex-1);
        std::string b = expression.substr(endIndex+2, std::string::npos);
        rational expA, expB, res;
        expA.str(a);
        expB.str(b);
        res = add(expA,expB);
        std::cout << res.str();
        return add(expA,expB);
    } else if (expression.contains(" - ")){
        auto index = expression.find("-");
        std::string a = expression.substr(0, index);
        std::string b = expression.substr(index+2, std::string::npos);
        rational expA, expB, res;
        expA.str(a);
        expB.str(b);
        res = sub(a,b);
        std::cout << res.str();
        return sub(a,b);
    } else if (expression.contains(" ^ ")){
        auto index = expression.find("^");
        std::string a = expression.substr(0, index);
        int b = std::stoi(expression.substr(index+2, std::string::npos));
        rational expA, res;
        expA.str(a);
        res = pow(a,b);
        std::cout << res.str();
        return pow(a,b);
    } else if (expression.contains(" * ")){
        auto index = expression.find("*");
        std::string a = expression.substr(0, index);
        std::string b = expression.substr(index+2, std::string::npos);
        rational expA, expB, res;
        expA.str(a);
        expB.str(b);
        res = mul(a,b);
        std::cout << res.str();
        return mul(a,b);
    } else if (expression.contains("sqrt")){
        auto index = expression.find("sqrt");
        std::string a = expression.substr(index+5, std::string::npos);
        rational expA, res;
        expA.str(a);
        return sqrt(a);
    } else {
        std::cerr << "Not a valid operation";
    }
}



//rational rational_calculator::calculate(std::string expression) const {
//    rational res;
//    if(expression.contains("^")){
//        std::stringstream ss(expression);
//        std::string Rational,token,Pow;
//        ss >> Rational >> token >> Pow;
//        rational pR(Rational);
//        return pow(pR,std::stoi(Pow));
//    } else if (expression.contains("sqrt")){
//        std::string expr = expression.substr(0,expression.find("sqrt"));
//        rational sR(expr);
//        return sqrt(sR);
//    } else{
//        std::stringstream ss(expression);
//        std::string firstRational,token,secondRational;
//        ss >> firstRational >> token >> secondRational;
//        rational first (firstRational);
//        rational second (secondRational);
//        if (token == "+") {
//            res = add(first,second);
//        } else if (token == "-") {
//            res = sub(first,second);
//        } else if (token == "*") {
//            res = mul(first,second);
//        }
//        return res;
//    }
//}