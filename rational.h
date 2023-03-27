//
// Created by dima on 3/23/23.
//

#ifndef AS3_RATIONAL_H
#define AS3_RATIONAL_H

#include <string>
#include <iostream>


class rational {
public:
    /* Constructors */
    rational();
    rational(int num, int den);
    rational(int num);
    rational(std::string str);

    /* Accessors */
    int num() const;
    int den() const;
    std::string str() const;

    bool is_pos() const;
    bool is_neg() const;
    bool is_inf() const;
    bool is_nan() const;

    /* Modifiers */
    void num(int n);
    void den(int d);
    void str(std::string s);

    int gcd(int a, int b);

private:
    int _num;
    int _denum;


};


#endif //AS3_RATIONAL_H
