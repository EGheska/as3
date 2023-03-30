//
// Created by dima on 3/23/23.
//

#include "../inc/rational.h"
#include <iostream>
#include <numeric>

// default constructor
rational::rational() : rational{1, 1} {
}

// constructor with initial value 1 in denominator
rational::rational(int num) : rational(num, 1) {
}

// constructor which construct rational object with nominator and denominator
rational::rational(int num, int den) : _denum{den}, _num{num} {
    int GreatestCommonDivisor = gcd(num, den);
    this->_denum = den / GreatestCommonDivisor;
    this->_num = num / GreatestCommonDivisor;
    if (_num < 0 && _denum < 0) {
        this->_denum = _denum * (-1);
        this->_num = _num * (-1);
    }
    if (_num > 0 && _denum < 0) {
        this->_num = _num * (-1);
        this->_denum = _denum * (-1);
    }
}

// constructor that constructs object based in inputed string
rational::rational(std::string str) {
    auto index = str.find('/');
    _num = std::stoi(str.substr(0, index));
    _denum = std::stoi(str.substr(index + 1, std::string::npos));
}

// accsessors
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

// modifiers
void rational::num(int n) {
    _num = n;
}

void rational::den(int d) {
    _denum = d;
}

void rational::str(std::string s) {
    rational toStr(s);
}

// greates common divisor function
int rational::gcd(int a, int b) {
    if (a < b) {
        std::swap(a, b);
    }
    int remainder = a % b;
    while (remainder != 0) {
        a = b;
        b = remainder;
        remainder = a % b;
    }
    return b;
}