//
// Created by dima on 3/28/23.
//

#include "rational_processor.h"
#include <iostream>
#include <fstream>

rational_processor::rational_processor(std::string filename) {
    std::ifstream file;
    if (!filename.contains(".txt") || !filename.contains(".in")){
        std::cerr << "Not a valid filename";
    } else {

    }

}

std::string rational_processor::process(rational_calculator calculator, std::string filename) {
    std::ifstream file("rational.txt");
    std::string line, buffer;
    std::ofstream outfile;
    while(std::getline(file,line)){
        buffer += line + "\n";
        calculator.calculate(line);

    }
    return std::string();
}
