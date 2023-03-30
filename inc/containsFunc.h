/*
 * Initially there were no need to write this function in the namespace.
 * This function implements a functional of std::contains() function.
 * When i was doing this assignmemnt from my Linux setup, GCC compiler had this function
 * But after switching on Mac, where Clang is, this function for some reason wasn't included into the compiler.
 * So that why i came to this
 */

#ifndef AS3_CONTAINSFUNC_H
#define AS3_CONTAINSFUNC_H

#include <string>

namespace containsFunc {
    static bool containsFunc(const std::string &str, const std::string &substr) {
        return str.find(substr) != std::string::npos;
    }
}

#endif //AS3_CONTAINSFUNC_H
