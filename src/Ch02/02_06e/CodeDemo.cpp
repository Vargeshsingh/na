// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

//CAPACITY is a constant value (5000) that is used throughout the code.
#define CAPACITY 5000 

/*
DEBUG is a flag that controls whether certain debug-related code is included in the compilation. Its presence or absence doesn't affect the behavior of the program at runtime, but it does affect which parts of the code are compiled.
*/
#define DEBUG

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    std::cout << "[About to perform the addition]" << std::endl;
#endif
    large += small; // Shorthand for "large = large + small;"
    std::cout << "The large integer is " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
