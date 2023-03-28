//
// Created by dima on 3/28/23.
//

#ifndef AS3_RATIONAL_PROCESSOR_H
#define AS3_RATIONAL_PROCESSOR_H
#include "rational_calculator.h"
#include <string>
#include "sstream"
#include <iostream>

class rational_processor {
    rational_processor(std::string filename);
    std::string process(rational_calculator calculator, std::string filename);
};


#endif //AS3_RATIONAL_PROCESSOR_H