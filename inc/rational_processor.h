//
// Created by dima on 3/28/23.
//

#ifndef AS3_RATIONAL_PROCESSOR_H
#define AS3_RATIONAL_PROCESSOR_H
#include "rational_calculator.h"
#include <string>
#include "sstream"
#include <iostream>
#include "fstream"

class rational_processor {
public:
    rational_processor(std::string filename);
    void process(std::string filename);

private:
    std::ifstream _inFile;
    std::ofstream _outFile;
};


#endif //AS3_RATIONAL_PROCESSOR_H
