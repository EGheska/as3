#include <iostream>
#include "inc/rational_processor.h"

int main() {
    std::string filename;
    std::cout << "Enter a filename:";
    std::cin >> filename;
    rational_processor processor(filename);
    processor.process(filename);
    return 0;
}
