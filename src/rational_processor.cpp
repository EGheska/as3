//
// Created by dima on 3/28/23.
//

#include "../inc/rational_processor.h"
#include <iostream>
#include <fstream>
#include "../inc/containsFunc.h"
#include <exception>
#include <string>

using namespace containsFunc;

rational_processor::rational_processor(std::string filename) : _inFile(filename), _outFile("name.out") {
    if (!_inFile) {
        throw std::invalid_argument("Invalid file name");
    }
}

void rational_processor::process(std::string filename) {
    rational_calculator calculator;
    std::string file, line, buffer;
    while (std::getline(_inFile, line)) {
        buffer += line + "\n";
        auto res = calculator.calculate(buffer).str();
        std::cout << res;
        _outFile << res << "\n";
        buffer.clear();

    }
    _outFile.close();
}
