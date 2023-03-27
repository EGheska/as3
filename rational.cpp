//
// Created by dima on 3/23/23.
//

#include "rational.h"
#include <iostream>
#include <numeric>


rational::rational() : rational{1,1} {
}

rational::rational(int num) : rational(num, 1) {
}

rational::rational(int num, int den) : _denum{den}, _num{num} {
    int GreatestCommonDivisor = gcd(num, den);
    this->_denum = den / GreatestCommonDivisor;
    this->_num = num / GreatestCommonDivisor;
    if (_num < 0 && _denum < 0){
        this->_denum = _denum * (-1);
        this->_num = _num * (-1);
    }
    //if den is negative and num is positive => both values multiply with (-1_
    if(_num > 0 && _denum < 0){
        this->_num = _num * (-1);
        this->_denum = _denum * (-1);
    }
}

rational::rational(std::string str) {
    auto index = str.find('/');
    _num = std::stoi(str.substr(0, index));
    _denum = std::stoi(str.substr(index, std::string::npos));
}

int rational::num() const {
    return _num;
}

int rational::den() const {
    return _denum;
}

std::string rational::str() const {
    return std::to_string(_num) + "/" + std::to_string(_denum);
}

bool rational::is_pos() const {
    return _num > 0 && _denum > 0 || _num < 0 && _denum < 0;
}

bool rational::is_neg() const {
    return _num < 0 && _denum > 0 || _num > 0 && _denum < 0;
}

bool rational::is_inf() const {
    return _denum == 0 && _num != 0;
}

bool rational::is_nan() const {
    return _denum == 0 && _num == 0;
}

void rational::num(int n) {
    _num = n;
}

void rational::den(int d) {
    _denum = d;
}

void rational::str(std::string s) {
    rational str(s);
}
int rational::gcd(int a,int b) {
    if (b == 0) {
        return 1;
    }
    return gcd(b, a % b);
}