//
// Created by dima on 3/28/23.
//

#include "rational_processor.h"
#include <iostream>
#include <fstream>

rational_processor::rational_processor(std::string filename) {
    if (!filename.contains(".txt") || !filename.contains(".in")){
        std::cerr << "Not a valid filename";
    } else {
        process(filename);
    }
}

std::string rational_processor::process(std::string filename) {
    rational_calculator calculator;
    std::ifstream file("name.txt");
    std::string line, buffer;
    std::ofstream outfile("results.txt");
    while(std::getline(file,line)){
        if (outfile.is_open()){
            buffer += line + "\n";
            auto res = calculator.calculate(buffer).str();
            outfile << res << "\n";
            outfile.close();
        } else {
            std::cerr << "Couln't open a file";
        }
    }
    return std::string();
}
